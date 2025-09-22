#include <iostream>

using namespace std;

typedef int TipoDeDato;

#include "PilaLineal.cpp"

int main( )
{
    PilaLineal pila; // crea pila vacía
    TipoDeDato x;
    const TipoDeDato CLAVE = -1;

    cout << "Teclea elemento de la pila(termina con -1)" << endl;
    try {
        do {
            cin >> x;
            pila.insertar(x);
        }while (x != CLAVE);

        cout << "Elementos de la Pila: " ;
        while (!pila.pilaVacia( ))
        {
            x = pila.quitar( );
            cout << x << " ";
        }
    }
    catch (const char * error)
    {
        cout << "Excepcion: " << error;
    }
return 0;
}