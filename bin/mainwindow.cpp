#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "mangalist.h"
#include "splittor.h"
#include "literallydoingthesplit.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initialization()
{
    setWindowTitle("MangaSplitor");
    setWindowIcon(QIcon(":/icon/resource/icon.png"));

    ui->radioButton_Split->setChecked(true);
    ui->radioButton_RightToLeft->setChecked(true);

    ui->groupBox_SplitMode->hide();
    ui->groupBox_BlankPage->hide();
}

MangaList ml;
Splittor sp;

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    if(event->mimeData()->hasUrls())
    {
        event->acceptProposedAction();
    }
}

//  此处只考虑拖入一个文件/目录的情况，同时处理复数个目录下的文件就交给未来的我吧
void MainWindow::dropEvent(QDropEvent *event)
{
    url = event->mimeData()->urls().first();

    // qDebug() << url.toLocalFile();
    dirConditionReset();
    showFileDirProcess(url.toLocalFile(), ui->label_Url);
    qDebug() << dir.absolutePath();

    event->acceptProposedAction();
}

void MainWindow::on_lineEdit_Index_editingFinished()
{
    dirConditionReset();
    showFileDirProcess(ui->lineEdit_Index->text(), ui->label_Url);
    qDebug() << dir.absolutePath();
}

void MainWindow::on_lineEdit_Index_textChanged(const QString &arg1)
{
    dirConditionReset();
    showFileDirProcess(arg1, ui->label_Url);
    qDebug() << dir.absolutePath();
}

void MainWindow::on_pushButton_Split_clicked()
{
    // qDebug() << "clicked";
    if(dirUninitalized)
    {
        QMessageBox::critical(this, "Dir is empty", "路径未初始化！");
        return;
    }
    if(dirEmpty)
    {
        QMessageBox::critical(this, "Dir is empty", "当前路径为空！");
        return;
    }
    if(dirUnexist)
    {
        QMessageBox::critical(this, "Dir doesn't exist", "路径不存在！");
        return;
    }

    bool result;
    result = literallydoingthesplit(ml, sp, dir);

    if(!result)
        QMessageBox::critical(this, "Dir doesn't exist", "图片分割失败！");
    else
        QMessageBox::information(this, "Mission Complete", "图片分割完成！");
}

void MainWindow::on_radioButton_Split_clicked()
{
    ui->pushButton_Split->setText("将目录下所有“大跨页”图片从正中间分割为两张图片");
    sp.methodChangeToSplit();
}

void MainWindow::on_radioButton_Merge_clicked()
{
    ui->pushButton_Split->setText("将目录下所有非“大跨页”图片合并为一张完整的图片");
    sp.methodChangeToMerge();
}

void MainWindow::on_pushButton_Start_clicked()
{
    on_pushButton_Split_clicked();
}

void MainWindow::on_checkBox_BlankPage_checkStateChanged(const Qt::CheckState &arg1)
{
    if(arg1 == Qt::CheckState::Checked)
    {
        sp.withBlankPage();
        ui->label_BlankPage->setText("当前选择为：是");
    }
    if(arg1 == Qt::CheckState::Unchecked)
    {
        sp.withoutBlankPage();
        ui->label_BlankPage->setText("当前选择为：否");
    }
}

void MainWindow::on_radioButton_LeftToRight_clicked()
{
    sp.orderChangeToLeftToRight();
}

void MainWindow::on_radioButton_RightToLeft_clicked()
{
    sp.orderChangeToRightToLeft();
}


void MainWindow::showFileDirProcess(QString absoluteFilePath, QLabel *label)
{
    //  录入输入路径
    QFileInfo fileInfo;
    fileInfo.setFile(absoluteFilePath);

    //  路径不存在
    if(!fileInfo.exists())
    {
        dirUnexist = true;
        label->setText("路径不存在！");
        return;
    }

    //  只保留路径的目录部分
    if(!fileInfo.dir().exists())    //  防止文件名后面多了个"/"被识别成目录
    {
        fileInfo.setFile(fileInfo.absolutePath());
    }
    if(fileInfo.isFile())
    {
        fileInfo.setFile(fileInfo.absolutePath());
    }

    QDir dir;
    dir.setPath(fileInfo.absoluteFilePath());

    //  错误检测
    if(!dir.exists())
    {
        label->setText("哪里不对......");
    }

    //  检测目录是否为空
    dir.setFilter(QDir::AllEntries | QDir::NoDotAndDotDot);
    // qDebug() << dir.entryList().count();
    if(dir.entryList().count() == 0)
    {
        dirEmpty = true;
        label->setText("当前路径为空！");
        return;
    }

    //  输出当前目录
    label->setText("当前路径为：" + dir.absolutePath());
    this->dir = dir.absolutePath();
}


