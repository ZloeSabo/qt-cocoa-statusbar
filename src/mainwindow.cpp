#include "mainwindow.h"
#include "MenuWrapperPrivate.h"
#include <QMessageBox>
#include <Carbon/Carbon.h>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->pool = [[NSAutoreleasePool alloc] init];
    menuWrapperProxy * mwp = [[menuWrapperProxy alloc] init];
    menuWrapperPrivate * signalWrapper = [mwp getQtProxy];
    QMessageBox * box = new QMessageBox(tr("Hello, habr"), QString::fromUtf8("Привет, хабр, привет!"), QMessageBox::NoIcon,  QMessageBox::QMessageBox::Ok, 0, 0, this, Qt::Dialog);
    box->setIconPixmap(QPixmap(":/icons/habrahabr.ico"));
    connect(signalWrapper, SIGNAL(sayHello()), box,  SLOT(exec()));
}

MainWindow::~MainWindow()
{
    delete ui;
    [this->pool release];
}
