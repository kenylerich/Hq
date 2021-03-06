﻿#ifndef QSHARETABLEWIDGET_H
#define QSHARETABLEWIDGET_H

#include "HqTableWidget.h"
//#include "dbservices/sharedata.h"
class ShareDataList;
class QShareTablewidget : public HqTableWidget
{
    Q_OBJECT
public:
    explicit QShareTablewidget(QWidget *parent = 0);
private:
    void    initMenu();

signals:
    void    signalSetShareMarket(int mkt);
    void    signalSetDisplayMinuteGraph(const QString& code);
    void    signalSetDisplayDayGraph(const QString& code);
    void    signalSetDisplayBlockDetail(const QStringList& blockCodes);
    void    signalSetDisplayHSHK(const QString& code);
    void    signalSetFavCode(const QString& code);
    void    signalDisplayChinaTop10();

public slots:
    void    setDataList(const ShareDataList& list);
    void    slotCustomContextMenuRequested(const QPoint &pos);
    void    setShareMarket();
    void    setDisplayMinuteGraph();
    void    setDisplayDayGraph();
    void    setDisplayBlockDetail();
    void    setDisplayHSHK();
    void    slotCellDoubleClicked(int row, int col);
private:
    QMap<QString, double>   mShareMap;
    QList<QAction*>         mCodesActionList;
};

#endif // QSHARETABLEWIDGET_H
