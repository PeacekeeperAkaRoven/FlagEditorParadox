#include "filetools.h"
#include <QFileDialog>

FileTools::FileTools(Ui::MainWindow *ui, QObject *parent)
    : QObject(parent), m_ui(ui)
{}

void FileTools::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(
                m_ui->lineInput,
                tr("Open File"),
                "/home",
                tr("Images (*.png *.xpm *.jpg *.dds *.tga)")
                );
    m_ui->lineInput->setText(fileName);
}
