#ifndef ADDCLIENT_H
#define ADDCLIENT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class AddClient;
}

class AddClient : public QDialog
{
    Q_OBJECT

public:
    explicit AddClient(QWidget *parent = nullptr);
    ~AddClient();

private slots:

    void on_delete_client_btn_clicked();

    void on_add_client_btn_clicked();

    void on_tableClients_clicked(const QModelIndex &index);

    void on_sortBtn_clicked();

private:
    Ui::AddClient *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;

    int row; // номер активной строки

    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
};

#endif // ADDCLIENT_H
