#include<QObject>
#include<QDebug>
#include "datastore.h"


DataStore::DataStore()
{

}

  void DataStore::callMeFromQml()
{
    qDebug("Inside callMeFromQml");
}
