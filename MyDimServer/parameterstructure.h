#ifndef PARAMETER_H
#define PARAMETER_H

#include <QString>
#include <QVector>


struct Parameter
{
    QString name;
    qint32 data;
    bool isControl;
    Parameter(QString _name, bool _isControl);
};


struct PMChannel
{
    QString name;
    QVector<Parameter*> vPars;

    PMChannel(QString _name);
    ~PMChannel();
};


struct PM
{
    QString name;
    QVector<Parameter*> vPars;      // Parameters common for all channels
    QVector<PMChannel*> vChans;

    PM(QString _name);
    ~PM();
};


struct AllParameters
{
    QString name;
    QVector<PM*> vPMs;
    AllParameters();
    ~AllParameters();
};



#endif // PARAMETER_H
