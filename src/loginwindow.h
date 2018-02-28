#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <windows.h>

#include <QCryptographicHash>
#include <QMessageBox>

#include "db.h"


#include <QVector>
#include <QSystemTrayIcon>

//QSqlDatabase db1;



namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    QString HashFile();
    QString getLoggedInUser(){
        return validUserName;
    }

    ~LoginWindow();

public slots:
    void on_pbRegister_clicked();

    void on_pbLogin_clicked();

    void on_pbUserName_clicked();

    void on_pbLocateFile1_clicked();

    void on_pbLocateFile2_clicked();

    void on_pbLocateFile3_clicked();

public slots:
    void iconActivated(QSystemTrayIcon::ActivationReason);

private:
    QString hashedFileFromLogin;
    QString validUserName;
    QSystemTrayIcon * trayIcon = new QSystemTrayIcon;
    Ui::LoginWindow *ui;

};

#endif // LOGINWINDOW_H

