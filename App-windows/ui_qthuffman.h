/********************************************************************************
** Form generated from reading UI file 'qthuffman.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHUFFMAN_H
#define UI_QTHUFFMAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qthuffman
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *enocdeSrcBtn;
    QPushButton *decodeSrcBtn;
    QPushButton *decodeDstBtn;
    QPushButton *encodeBtn;
    QLabel *encodeSrcLabel;
    QLabel *decodeSrcLabel;
    QLabel *decodeDstLabel;
    QPushButton *encodeDstBtn;
    QPushButton *decodeBtn;
    QLabel *label_6;
    QLabel *encodeDstLabel;
    QMenuBar *menubar;
    QMenu *menuHuffman;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Qthuffman)
    {
        if (Qthuffman->objectName().isEmpty())
            Qthuffman->setObjectName("Qthuffman");
        Qthuffman->resize(785, 578);
        centralwidget = new QWidget(Qthuffman);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 58, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 351, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 300, 58, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 330, 351, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 400, 351, 16));
        enocdeSrcBtn = new QPushButton(centralwidget);
        enocdeSrcBtn->setObjectName("enocdeSrcBtn");
        enocdeSrcBtn->setGeometry(QRect(40, 110, 100, 32));
        decodeSrcBtn = new QPushButton(centralwidget);
        decodeSrcBtn->setObjectName("decodeSrcBtn");
        decodeSrcBtn->setGeometry(QRect(40, 360, 100, 32));
        decodeDstBtn = new QPushButton(centralwidget);
        decodeDstBtn->setObjectName("decodeDstBtn");
        decodeDstBtn->setGeometry(QRect(40, 430, 100, 32));
        encodeBtn = new QPushButton(centralwidget);
        encodeBtn->setObjectName("encodeBtn");
        encodeBtn->setGeometry(QRect(40, 230, 100, 32));
        encodeSrcLabel = new QLabel(centralwidget);
        encodeSrcLabel->setObjectName("encodeSrcLabel");
        encodeSrcLabel->setGeometry(QRect(150, 120, 501, 16));
        decodeSrcLabel = new QLabel(centralwidget);
        decodeSrcLabel->setObjectName("decodeSrcLabel");
        decodeSrcLabel->setGeometry(QRect(150, 370, 501, 16));
        decodeDstLabel = new QLabel(centralwidget);
        decodeDstLabel->setObjectName("decodeDstLabel");
        decodeDstLabel->setGeometry(QRect(150, 440, 501, 16));
        encodeDstBtn = new QPushButton(centralwidget);
        encodeDstBtn->setObjectName("encodeDstBtn");
        encodeDstBtn->setGeometry(QRect(40, 180, 100, 32));
        decodeBtn = new QPushButton(centralwidget);
        decodeBtn->setObjectName("decodeBtn");
        decodeBtn->setGeometry(QRect(40, 480, 100, 32));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 150, 351, 16));
        encodeDstLabel = new QLabel(centralwidget);
        encodeDstLabel->setObjectName("encodeDstLabel");
        encodeDstLabel->setGeometry(QRect(150, 190, 501, 16));
        Qthuffman->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Qthuffman);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 785, 24));
        menuHuffman = new QMenu(menubar);
        menuHuffman->setObjectName("menuHuffman");
        Qthuffman->setMenuBar(menubar);
        statusbar = new QStatusBar(Qthuffman);
        statusbar->setObjectName("statusbar");
        Qthuffman->setStatusBar(statusbar);

        menubar->addAction(menuHuffman->menuAction());

        retranslateUi(Qthuffman);

        QMetaObject::connectSlotsByName(Qthuffman);
    } // setupUi

    void retranslateUi(QMainWindow *Qthuffman)
    {
        Qthuffman->setWindowTitle(QCoreApplication::translate("Qthuffman", "Qthuffman", nullptr));
        label->setText(QCoreApplication::translate("Qthuffman", "Encode", nullptr));
        label_2->setText(QCoreApplication::translate("Qthuffman", "Please select the txt file you want to compress", nullptr));
        label_3->setText(QCoreApplication::translate("Qthuffman", "Decode", nullptr));
        label_4->setText(QCoreApplication::translate("Qthuffman", "Please select the txt file you want to decompress", nullptr));
        label_5->setText(QCoreApplication::translate("Qthuffman", "Please select the save location", nullptr));
        enocdeSrcBtn->setText(QCoreApplication::translate("Qthuffman", "source", nullptr));
        decodeSrcBtn->setText(QCoreApplication::translate("Qthuffman", "source", nullptr));
        decodeDstBtn->setText(QCoreApplication::translate("Qthuffman", "destination", nullptr));
        encodeBtn->setText(QCoreApplication::translate("Qthuffman", "encode", nullptr));
        encodeSrcLabel->setText(QString());
        decodeSrcLabel->setText(QString());
        decodeDstLabel->setText(QString());
        encodeDstBtn->setText(QCoreApplication::translate("Qthuffman", "destination", nullptr));
        decodeBtn->setText(QCoreApplication::translate("Qthuffman", "decode", nullptr));
        label_6->setText(QCoreApplication::translate("Qthuffman", "Please select the save location", nullptr));
        encodeDstLabel->setText(QString());
        menuHuffman->setTitle(QCoreApplication::translate("Qthuffman", "Huffman", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qthuffman: public Ui_Qthuffman {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHUFFMAN_H
