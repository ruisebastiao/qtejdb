#ifndef QEJDBDATABASESERVICE_H
#define QEJDBDATABASESERVICE_H

#include <ServiceProxy>
#include "qbson/qbsonobject.h"
#include "qejdbdatabase.h"

using namespace QtRpc;
class QEjdbDatabaseService : public ServiceProxy
{
    Q_OBJECT
public:

    // container for returned data.
    struct ResultData
    {
        int count;
        QList<QBsonObject> result;
    };


    explicit QEjdbDatabaseService(QObject *parent = 0);

    ReturnValue auth(QString user, QString passwd);


signals:

public slots:

    ReturnValue save(QString collectionName, QBsonObject obj);
    ReturnValue createCollection(QString collectionName);
    ReturnValue removeCollection(QString collectionName);
    ReturnValue containsCollection(QString collectionName);
    ReturnValue load(const QString &collectionName, const QString &oid);
    ReturnValue remove(const QString &collectionName, const QString &oid);
    ReturnValue query(const QString &collectionName, const QBsonObject &query);
private:
    QEjdbDatabase m_database;

};

Q_DECLARE_METATYPE(QEjdbDatabaseService::ResultData)

//Declare QDataStream operators for any custom types to be passed over QtRpc.
//These will serialize/deserialize the data for transport over the network.
QDataStream& operator<<(QDataStream& d, const QEjdbDatabaseService::ResultData& object);
QDataStream& operator>>(QDataStream& d, QEjdbDatabaseService::ResultData& object);


#endif // QEJDBDATABASESERVICE_H
