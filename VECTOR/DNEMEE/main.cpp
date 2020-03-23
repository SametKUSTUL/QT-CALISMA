
#include <QCoreApplication>
#include <QDebug>
#include <QVector>
class QtIsMyLife{
    public:
        int Age;
        QString Name;
        QString Familyname;

        QtIsMyLife(int _age, QString _name, QString _familyname) {
            this->Age = _age;
            this->Name = _name;
            this->Familyname = _familyname;
        }
};


class Derneme
{
public:
    Derneme() {}
    QString Name;
};


QVector<QtIsMyLife*> GetNewVector() {
    QVector<QtIsMyLife*> my_vector;
    my_vector.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
    my_vector.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
    my_vector.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
    my_vector.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));

    return my_vector;
}

void GetNewVector(QVector<QtIsMyLife*> &vec) {
    vec.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
    vec.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
    vec.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
    vec.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
    vec.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
    vec.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
    vec.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
    vec.push_back(new QtIsMyLife(21, "Tazo", "Leladze"));
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<QtIsMyLife*> vec = GetNewVector();

    qDebug() << vec.size();

    QVector<QtIsMyLife*> vec_2;

    GetNewVector(vec_2);

    qDebug() << vec_2.size();
    QtIsMyLife is(30,"SS","KK");
    is.Age=30;



    QVector<QtIsMyLife*> vec_3;
    vec_3.push_back(&is);

    QVector<Derneme> vec_4;

    for(int i=1;i<50;i++){
        Derneme dndn;
        qDebug()<<QString::number(i)<<"SAMET"+QString::number(i);
        dndn.Name="SAMET"+QString::number(i);
        vec_4.append(dndn);

    }


    qDebug()<<vec_4.size();
    int localLen=vec_4.size();
    qDebug()<<"LLLL"<<localLen;
    for(int i=0;i<localLen;i++){
        qDebug()<<"Size:"<<vec_4.size();
        qDebug()<<vec_4.at(i).Name;
    }
    qDebug()<<"rEMOVE";
    vec_4.clear();
    qDebug()<<"Size:"<<vec_4.size();

    return a.exec();
}
