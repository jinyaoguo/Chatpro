#ifndef LOGIN_H
#define LOGIN_H
#include <QString>
#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <vector>

class login: public QObject
{
    Q_OBJECT
public:
    login();
    login(QTcpServer*);
    ~login();
    QString ip;
    QString account;
    class login* next;
    int inout, valid;
    QTcpSocket *socket;
    void destroy();
signals:
    void newMessage(login*);
private slots:
    void on_connected();
    void on_disconned();
};

#endif // LOGIN_H
