#ifndef QTHUFFMAN_H
#define QTHUFFMAN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Qthuffman; }
QT_END_NAMESPACE

class Qthuffman : public QMainWindow
{
    Q_OBJECT

public:
    Qthuffman(QWidget *parent = nullptr);
    ~Qthuffman();

private slots:
    void on_enocdeSrcBtn_clicked();

    void on_encodeBtn_clicked();

    void on_decodeDstBtn_clicked();

    void on_encodeDstBtn_clicked();

    void on_decodeSrcBtn_clicked();

    void on_decodeBtn_clicked();

private:
    Ui::Qthuffman *ui;
    QString encodeInfile;
    QString encodeOutfile;
    QString decodeInfile;
    QString decodeOutfile;
};
#endif // QTHUFFMAN_H
