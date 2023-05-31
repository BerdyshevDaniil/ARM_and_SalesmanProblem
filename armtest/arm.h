#ifndef ARM_H
#define ARM_H
#include "addclient.h"
#include "insurencecompany.h"

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDialog>
#include <QSqlTableModel>
#include <QDate>

QT_BEGIN_NAMESPACE
namespace Ui { class arm; }
QT_END_NAMESPACE

class arm : public QMainWindow
{
    Q_OBJECT

public:
    arm(QWidget *parent = nullptr);
    ~arm();

private slots:

    void on_clients_btn_clicked();

    void on_insurence_company_btn_clicked();

    void on_add_meeting_btn_clicked();

    void on_delete_meeting_btn_clicked();

    void on_tableMeetingSchedule_clicked(const QModelIndex &index);

    void on_updateBtn_clicked();


private:
    Ui::arm *ui;
    AddClient *add = new AddClient;
    InsurenceCompany *company = new InsurenceCompany;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;

    int row; // номер активной строки

    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
};
#endif // ARM_H
