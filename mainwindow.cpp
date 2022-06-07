#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

/////////--------BoxNamePort------------///////////

    QList<QSerialPortInfo> list = QSerialPortInfo::availablePorts();

    for(int i = 0; i < list.count(); i++)
    {
        if (list.count() != 0 )
        {
        ui->comboBoxNamePort->addItem(list[i].portName());
        }
    }

/////////--------BoxSpeedPort------------///////////

    ui->comboBoxSpeedPort->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
    ui->comboBoxSpeedPort->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
    ui->comboBoxSpeedPort->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
    ui->comboBoxSpeedPort->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);



//        serial.close();


//    if (!serial.open(QIODevice::ReadWrite)) {
//            QMessageBox::about(this,"Заголовок","Error");

//                return;
//            }

//    QByteArray requestData = serial.readAll();

//    for(int i = 0; i < 300; i++)
//    {
//        if(serial.waitForReadyRead(10))
//     {
//         requestData += serial.readAll();
//         ui->labelResive->setText(requestData);

//     }

//    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonConect_clicked()
{
       QMessageBox::about(this,"Заголовок","Просто текст");
}

