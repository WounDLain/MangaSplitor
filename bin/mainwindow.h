#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDrag>
#include <QDropEvent>
#include <QMimeData>

#include <QDir>

#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initialization();

protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);

private slots:
    void on_pushButton_Split_clicked();

    void on_lineEdit_Index_editingFinished();

    void on_lineEdit_Index_textChanged(const QString &arg1);

    void on_radioButton_Split_clicked();

    void on_radioButton_Merge_clicked();

    void on_pushButton_Start_clicked();

    void on_checkBox_BlankPage_checkStateChanged(const Qt::CheckState &arg1);

    void on_radioButton_LeftToRight_clicked();

    void on_radioButton_RightToLeft_clicked();

private:
    Ui::MainWindow *ui;

    QUrl url;
    QDir dir;
    bool dirUninitalized = true;
    bool dirEmpty;
    bool dirUnexist;
    void dirConditionReset(){ dirUninitalized = dirEmpty = dirUnexist = false; }

    bool do_mangaSplit(QList<QUrl> urls);

    void showFileDirProcess(QString absoluteFilePath, QLabel *label);
};
#endif // MAINWINDOW_H
