#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "datastore.h"

//https://www.youtube.com/watch?v=7cH7DXrzxWU

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();
    DataStore dt;
    context->setContextProperty("dataStore",&dt);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
