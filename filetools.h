#ifndef FILETOOLS_H
#define FILETOOLS_H

#include <QMainWindow>
#include <QObject>

class FileTools : public QObject
{
    Q_OBJECT
public:
    explicit FileTools(QObject *parent = nullptr);

signals:

};

#endif // FILETOOLS_H
