#include <iostream>
#include "punto.h"

using namespace std;

int main()
{
    punto p(1,1);
    punto clon(p);
    punto* pp = &p;
    punto* punteroNuevo = new punto(p);
    cout << "Hello world!" << endl;
    //p.trasladar(3, -2);
    cout << p.coordx() << " " << p.coordy() << endl ;
    cout << clon.coordx() << " " << clon.coordy() << endl ;
    cout << p.distancia( *punteroNuevo) << endl ;
    if (p == clon)
    {
        cout << "son iguales";
    }
    else
    {
        cout << "son distintos";
    }
    return 0;
}
