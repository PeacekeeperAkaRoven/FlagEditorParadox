#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_fileTools = new FileTools(ui);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_InputButton_released()
{
    /*QString fileName = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "/home",
                tr("Images (*.png *.xpm *.jpg *.dds *.tga)")
                );
    ui->lineInput->setText(fileName);*/

    //QMessageBox::warning(this, "Ошибка!","Не указанно имя флага! ");
    m_fileTools->openFile();
}


void MainWindow::on_OutputButton_released()
{
    /*QString dirName = QFileDialog::getExistingDirectory(
                this,
                tr("Open Directory"),
                "/home",
                QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
                );
    ui->lineOutput->setText(dirName);*/

    //QMessageBox::warning(this, "Ошибка!","Не указанно имя флага! ");
}

