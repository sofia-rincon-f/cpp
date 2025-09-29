#include <iostream>
#include "Pila.cpp"
#include "Cola.cpp"
#include "Arreglo.cpp"
#include "ListaEnlazada.cpp"

using namespace std;

int main() {
    int opc;
    cout << "---- MENU ----\n";
    cout << "1. Pila\n";
    cout << "2. Cola\n";
    cout << "3. Lista Enlazada\n";
    cout << "4. Arreglo\n";
    cout << "Opcion: ";
    cin >> opc;

    switch(opc) {
        case 1: {
            Pila p;
            p.menu();
            break;
        }
        case 2: {
            Cola c;
            c.menu();
            break;
        }
        case 3: {
            ListaEnlazada l;
            l.menu();
            break;
        }
        case 4: {
            Arreglo a;
            a.menu();
            break;
        }
        default:
            cout << "Opción inválida\n";
    }
    return 0;
}
