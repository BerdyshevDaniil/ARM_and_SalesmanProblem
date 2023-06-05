#include "arm.h"
#include "ui_arm.h"

#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include <QWidget>

arm::arm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::arm)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE"); // добавление бд
    db.setDatabaseName("D:\\QT\\SQLiteStudio\\ARM"); // подключение к бд (установка имени)
    db.setUserName("root");
    db.setPassword("123456");
    if (!db.open()){
        qDebug() << db.lastError().text();
        return;
    }
    else {
        qDebug() << "Successfully connected to the DB\n";
    }

    model = new QSqlTableModel(this, db); // создание модели на основе созданной базы данных
    model->setTable("MeetingSchedule"); // установка нужной таблицы
    this->setupModel("MeetingSchedule",
                     QStringList() << trUtf8("id")
                                   << trUtf8("                     Client                     ")
                                   << trUtf8("MeetingDate")
                                   << trUtf8("MeetingTime")
                                   << trUtf8("MeetingPlace"));
    this->createUI();
}

arm::~arm()
{
    delete ui;
}

void arm::on_clients_btn_clicked()
{
    add->exec();
}

void arm::on_insurence_company_btn_clicked()
{
    company->exec();
}

void arm::on_add_meeting_btn_clicked()
{
    model->insertRow(model->rowCount());
}

void arm::on_delete_meeting_btn_clicked()
{
    model->removeRow(row);
}

void arm::on_tableMeetingSchedule_clicked(const QModelIndex &index)
{
    row = index.row();
}

void arm::setupModel(const QString &tableName, const QStringList &headers)
{
    /* Производим инициализацию модели представления данных
     * с установкой имени таблицы в базе данных, по которому
     * будет производится обращение в таблице */
    model = new QSqlTableModel(this);
    model->setTable(tableName);
    // Устанавливаем названия колонок в таблице с сортировкой данных
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++){
        model->setHeaderData(i,Qt::Horizontal,headers[j]);
    }
    // Устанавливаем сортировку по возрастанию данных по нулевой колонке
    model->setSort(1,Qt::AscendingOrder);
}

void arm::createUI()
{
    ui->tableMeetingSchedule->setModel(model); // Устанавливаем модель на созданную таблицу


    ui->tableMeetingSchedule->setColumnHidden(0, true); // Скрываем колонку с id записей
    // Разрешаем выделение строк
    ui->tableMeetingSchedule->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Устанавливаем режим выделения лишь одно строки в таблице
    //ui->tableMeetingSchedule->setSelectionMode(QAbstractItemView::SingleSelection);
    // Устанавливаем размер колонок по содержимому
    ui->tableMeetingSchedule->resizeColumnsToContents();
    ui->tableMeetingSchedule->horizontalHeader()->setStretchLastSection(true);


    model->select(); // Делаем выборку данных из таблицы
}

void arm::on_updateBtn_clicked()
{
    model->sort(2,Qt::AscendingOrder);
}

