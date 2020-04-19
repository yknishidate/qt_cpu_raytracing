#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <QVector3D>
#include "ray.h"

class Triangle
{
public:
    Triangle();

    Triangle(const QVector3D &v0, const QVector3D &v1, const QVector3D &v2);

    bool intersect(const Ray &ray, Intersection &intersection);

    QVector3D normal();

    QVector3D& operator[](int i);

private:
    QVector3D v0;
    QVector3D v1;
    QVector3D v2;
};

#endif // TRIANGLE_H
