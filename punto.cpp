#include "punto.h"
#include <math.h>

punto::punto()
{
    x= 0.0;
    y= 0.0;
}
punto::punto(float x, float y)
{
    this->x= x;
    this->y= y;
}

punto::punto(const punto& otropunto)
{
    this->x= otropunto.x;
    this->y= otropunto.y;
}

float punto::coordx() const
{
    return x;
}

float punto::coordy() const
{
    return y;
}

float punto::distancia(const punto& otroPunto) const
{

    return sqrt(pow(x-otroPunto.x, 2.0) + pow(y-otroPunto.y, 2.0));
}

void punto::trasladar(float dx, float dy)
{
    x+= dx;
    y+= dy;
}

bool punto::operator==(const punto& otroPunto) const
{
    return (x==otroPunto.x) && (y==otroPunto.y);
}
