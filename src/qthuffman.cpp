#include "qthuffman.h"
#include "ui_qthuffman.h"
#include <QFileDialog>
#include <QMessageBox>
#include "huffman.hpp"

Qthuffman::Qthuffman(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Qthuffman)
{
    ui->setupUi(this);
}

Qthuffman::~Qthuffman()
{
    delete ui;
}


//Encoding Ui
void Qthuffman::on_enocdeSrcBtn_clicked()
{
    QString src =
        QFileDialog::getOpenFileName(this, "Open a file", "directoryToOpen",
            "Text files (*.txt)");
    ui->encodeSrcLabel->setText(src);
    encodeInfile=src;

}

void Qthuffman::on_encodeDstBtn_clicked()
{
    QString dst =
        QFileDialog::getExistingDirectory(0, ("Select Output Folder"), QDir::currentPath());
   encodeOutfile=dst;
   ui->encodeDstLabel->setText(dst);
}

void Qthuffman::on_encodeBtn_clicked()
{

    huffman f(encodeInfile.toStdString(), encodeOutfile.toStdString());
    bool b=f.compress();
    if(b)
    {QMessageBox::information(
            this,
            tr("Application Name"),
            tr("Encoding successful!") );
       }

}





//Decoding Ui

void Qthuffman::on_decodeDstBtn_clicked()
{
    QString dst=
       QFileDialog::getExistingDirectory(0, ("Select Output Folder"), QDir::currentPath());
   decodeOutfile=dst;
   ui->decodeDstLabel->setText(dst);
}




void Qthuffman::on_decodeSrcBtn_clicked()
{
    QString src =
        QFileDialog::getOpenFileName(this, "Open a file", "directoryToOpen",
            "Text files (*.txt)");
   decodeInfile=src;
   ui->decodeSrcLabel->setText(src);
}


void Qthuffman::on_decodeBtn_clicked()
{
    huffman f(decodeInfile.toStdString(), decodeOutfile.toStdString());
    bool b=f.decompress();
    if(b){
        QMessageBox::information(
            this,
            tr("Application Name"),
            tr("Decoding Successful!") );}
}

