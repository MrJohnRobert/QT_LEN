#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //此为第一次测试
//    *** Please tell me who you are.

//    Run

//      git config --global user.email "you@example.com"
//      git config --global user.name "Your Name"

//    to set your account's default identity.
//    Omit --global to set the identity only in this repository.
  //  解决办法 https://blog.csdn.net/coco_wonderful/article/details/51822143


    return a.exec();
}
