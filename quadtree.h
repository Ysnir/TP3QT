#ifndef QUADTREE_H
#define QUADTREE_H

#include <QVector2D>
#include <QVector3D>

class quadtree
{

public:
    quadtree();
    bool inBoundary(QVector2D point);

protected:
    QVector2D coord;
    QVector3D * data;

    quadtree * tl;
    quadtree * tr;
    quadtree * bl;
    quadtree * br;
};

#endif // QUADTREE_H
