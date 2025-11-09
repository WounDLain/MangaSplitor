#ifndef LITERALLYDOINGTHESPLIT_H
#define LITERALLYDOINGTHESPLIT_H

#include "mangalist.h"
#include "splittor.h"

bool literallydoingthesplit(MangaList &mangaList, Splittor &splittor, QDir dir)
{
    qDebug() << "literallydoingthesplit start";
    mangaList.dirClassification();

    mangaList.mangaFilesInitialization(dir);
    mangaList.mangaFilesClassification();
    mangaList.mangaRename(splittor.getMethod(), splittor.getBlankPageOrNot());
    mangaList.mangaSplit(splittor.getMethod(), splittor.getReadingOrder());

    qDebug() << "literallydoingthesplit end";
    return true;
}

#endif // LITERALLYDOINGTHESPLIT_H
