#ifndef MANGALIST_H
#define MANGALIST_H

#include <QObject>

#include <QDir>
#include <QLabel>

#include <method.h>

class MangaList
{
public:
    MangaList();
    MangaList(QDir dir, QStringList nameList);

public:
    QDir dir;
    QFileInfo fileInfo;

    void fileDirProcess(QString absoluteFilePath, QLabel *label);

    void dirClassification();

private:
    static int getIDFromFileName(QString name);

    //  你是大跨页吗？
    enum Attribute
    {
        DoublePageSpread, SinglePage
    };

    //  一个文件对应的类
    struct MangaFile
    {
        MangaFile(QDir dir, QString name)
        {
            id = getIDFromFileName(name);

            pageFile = new QFile(dir.filePath(name));

            image = new QImage;
            image->load(dir.filePath(name));
        }

        int id;
        QFile *pageFile;
        QImage *image;
        Attribute attribute;
    };

    //  一个目录下所有文件对应的类
    struct MangaFiles
    {
        MangaFiles(QDir dir)
        {
            mangaDir = dir;

            QStringList files = dir.entryList(QDir::Files | QDir::NoDotAndDotDot);
            for(int i = 0; i < files.size(); i++)
            {
                // 文件默认加载顺序为字典序，需要重新排序
                qDebug() << "filename : " << files[i];
                mangaFile.push_back(MangaFile(mangaDir, files[i]));
            }

            //  初始化的时候顺手排个序，结果为升序，从小到大
            std::sort(mangaFile.begin(), mangaFile.end(), [](MangaFile a, MangaFile b){
                return a.id < b.id;
            });
        }

        QList<MangaFile> mangaFile;
        QDir mangaDir;
    };

    MangaFiles *mangaFiles;

    void fileRename(QFile *file, QString newName);

public:
    void mangaFilesInitialization(QDir dir);
    void mangaFilesClassification();
    void mangaRename(Method method, BlankPageOrNot blankPage);
    void mangaSplit(Method method, ReadingOrder readingOrder);

    void oldCode(){
        //     QList <MangaFiles> fileList;
        //     QList <int> doublePageSpreadIDList;
        //     QList <int> singlePageIDList;

        //     bool rename();      //  把大跨页需要的空位留出来（Split）；或者把大跨页扔到最末尾，合并完单页再塞回去（Merge）
        //     bool classify();    //  把Attribute值给划分出来
        //     bool split();       //  把大跨页劈成两半
        //     bool merge();       //  把单页拼成一整块

        //     bool doublePageSpreadExist = true;

        //     double toolNumber;  //  粗略估计单页宽度的0.25x（使用单页宽度0.25x和大跨页宽度0.125x的平均值）
        //     double getToolNumber(int min, int max)
        //     {
        //         return (((double)min / 4) + ((double)max / 8)) / 2;
        //     }
        //     bool illegal(int min, int max, int width)
        //     {
        //         return width > min + toolNumber && width < max + toolNumber;
        //     }

        // public:
        //     Error errorCode;

        //     friend bool Splittor::mangaSplit();
        //     friend void Splittor::throwException(Error);
    }
};

#endif // MANGALIST_H
