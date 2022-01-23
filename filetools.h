#ifndef FILETOOLS_H
#define FILETOOLS_H

#include <QMainWindow>
#include <QObject>
#include "ui_mainwindow.h"

class FileTools : public QObject
{
    Q_OBJECT
public:
    explicit FileTools(Ui::MainWindow *ui, QObject *parent = nullptr);
    void FilePath();

private:
    Ui::MainWindow *m_ui;

    QString m_filePath;

signals:

};

#endif // FILETOOLS_H
