#include "splittor.h"

Splittor::Splittor() {}

void Splittor::splitDoublePageSpread(QFile *file, ReadingOrder readingOrder)
{
    QFileInfo fileInfo(*file);

    QImage imageDoublePageSpread;
    imageDoublePageSpread.load(fileInfo.absoluteFilePath());

    const int width = imageDoublePageSpread.width();
    const int height = imageDoublePageSpread.height();
    const int halfWidth = width / 2;

    QImage leftPartImage = imageDoublePageSpread.copy(0, 0, halfWidth, height);
    QImage rightPartImage = imageDoublePageSpread.copy(halfWidth, 0, width - halfWidth, height);

    QString baseNameLeft;
    QString baseNameRight;
    if(readingOrder == ReadingOrder::RightToLeft)
    {
        baseNameLeft = fileInfo.baseName();
        baseNameRight = QString::number(fileInfo.baseName().toInt() - 1);
    }
    if(readingOrder == ReadingOrder::LeftToRight)
    {
        baseNameLeft = QString::number(fileInfo.baseName().toInt() - 1);
        baseNameRight = fileInfo.baseName();
    }
    qDebug() << baseNameLeft;
    qDebug() << baseNameRight;

    QString doublePageSpreadName = fileInfo.path() + "/" + fileInfo.baseName() + "_doublePageSpread" + "." + fileInfo.completeSuffix();
    QString leftName = fileInfo.path() + "/" + baseNameLeft + "." + fileInfo.completeSuffix();
    QString rightName = fileInfo.path() + "/" + baseNameRight + "." + fileInfo.completeSuffix();

    file->rename(doublePageSpreadName);
    leftPartImage.save(leftName);
    rightPartImage.save(rightName);
    file->remove();
}
