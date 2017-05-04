#include <iostream>
#include "punto.h"

using namespace std;

int main()
{
    punto p(1.2,1);
    punto clon(2,1);
    punto* punteroNuevo = new punto(3,-1);
    cout << "Hello world!" << endl;
    p.trasladar(3, -2);
    cout << p.coordx() << " " << p.coordy() << endl ;
    cout << clon.coordx() << " " << clon.coordy() << endl ;
    cout << p.distancia( *punteroNuevo) << endl ;
    if (p == clon)
    {
        cout << "son iguales" << endl;
    }
    else
    {
        cout << "son distintos"<< endl;
    }
    return 0;
}
