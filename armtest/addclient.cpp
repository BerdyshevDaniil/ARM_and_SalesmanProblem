#include "addclient.h"
#include "ui_addclient.h"

#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlTableModel>

AddClient::AddClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddClient)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setHostName("127.0.0.1"); //idk. it's local server
    db.setDatabaseName("D:\\QT\\SQLiteStudio\\ARM"); // specify file directory
    db.setUserName("root"); //idk still hehe
    db.setPassword("123456");
    if (!db.open()){
        qDebug() << db.lastError().text();
        return;
    }
    else {
        qDebug() << "Successfully connected to the DB\n";
    }

    query = new QSqlQuery(db);
    //query->exec("CREATE TABLE Clients(ID INT, ФИО TEXT, Phone INT);");

    model = new QSqlTableModel(this, db);
    model->setTable("Clients");
    this->setupModel("Clients",
                     QStringList() << trUtf8("ID")
                                   << trUtf8("                     Name                     ")
                                   << trUtf8("       Phone       ")
                                   << trUtf8(" InsuranceCompany ")
                                   << trUtf8("InsuranceExpirationDate")
                                   << trUtf8("InsuranceType"));
    this->createUI();
}

AddClient::~AddClient()
{
    delete ui;
}

void AddClient::on_add_client_btn_clicked()
{
    model->insertRow(model->rowCount());
}

void AddClient::on_delete_client_btn_clicked()
{
    model->removeRow(row);
}

void AddClient::on_tableClients_clicked(const QModelIndex &index)
{
    row = index.row();
}

void AddClient::setupModel(const QString &tableName, const QStringList &headers)
{
    /* Производим инициализацию модели представления данных
     * с установкой имени таблицы в базе данных, по которому
     * будет производится обращение в таблице
     * */
    model = new QSqlTableModel(this);
    model->setTable(tableName);

    /* Устанавливаем названия колонок в таблице с сортировкой данных
     * */
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i,Qt::Horizontal,headers[j]);
    }
    // Устанавливаем сортировку по возрастанию данных по нулевой колонке
    model->setSort(4, Qt::AscendingOrder);
}

void AddClient::createUI()
{
    ui->tableClients->setModel(model);     // Устанавливаем модель на TableView
    ui->tableClients->setColumnHidden(0, true);    // Скрываем колонку с id записей
    // Разрешаем выделение строк
    ui->tableClients->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Устанавливаем режим выделения лишь одно строки в таблице
    //ui->tableClients->setSelectionMode(QAbstractItemView::SingleSelection);
    // Устанавливаем размер колонок по содержимому
    ui->tableClients->resizeColumnsToContents();
    ui->tableClients->horizontalHeader()->setStretchLastSection(true);

    model->select(); // Делаем выборку данных из таблицы
}

void AddClient::on_sortBtn_clicked()
{
    model->sort(4, Qt::AscendingOrder);
}

