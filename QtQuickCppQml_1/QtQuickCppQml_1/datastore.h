#ifndef DATASTORE_H
#define DATASTORE_H

#include <QObject>

class DataStore : public QObject
{
    Q_OBJECT

public:
    DataStore();
public slots:
    void callMeFromQml();
};

#endif // DATASTORE_H
