
#pragma once
#include <QGraphicsView>

class GraphicsView : public QGraphicsView
{
    Q_OBJECT

public:
    GraphicsView(QGraphicsScene *scene = nullptr, QWidget *parent = nullptr);

    bool viewportEvent(QEvent *event) override;

private:
    qreal totalScaleFactor = 1;
};
