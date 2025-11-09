#ifndef SPLITTOR_H
#define SPLITTOR_H

#include <QObject>

#include <QDir>
#include <QLabel>
#include <QList>
#include <QImageReader>

#include <method.h>

class Splittor
{
public:
    Splittor();

private:
    Method method = Method::Split;
    BlankPageOrNot blankPage = BlankPageOrNot::WithoutBlankPage;
    ReadingOrder readingOrder = ReadingOrder::RightToLeft;

public:
    void methodChangeToSplit() { method = Method::Split; }
    void methodChangeToMerge() { method = Method::Merge; }
    Method getMethod() { return method; }

    void withBlankPage()    { blankPage = BlankPageOrNot::WithBlankPage; }
    void withoutBlankPage() { blankPage = BlankPageOrNot::WithoutBlankPage; }
    BlankPageOrNot getBlankPageOrNot() { return blankPage; }

    void orderChangeToLeftToRight() { readingOrder = ReadingOrder::LeftToRight; }
    void orderChangeToRightToLeft() { readingOrder = ReadingOrder::RightToLeft; }
    ReadingOrder getReadingOrder() { return readingOrder; }

    static void splitDoublePageSpread(QFile *file, ReadingOrder readingOrder);
    static void mergeSinglePagePair() { return; };

    //  超级无敌牛逼判断算法
    static bool isDoublePageSpread(int width, int height) { return width > height; }
};



#endif // SPLITTOR_H
