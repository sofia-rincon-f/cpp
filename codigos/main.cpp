#include <iostream>
using namespace std;

void ejecutarPila();
void ejecutarCola();
void ejecutarLista();
void ejecutarArreglo();

int main() {
    int opcion;

    do {
        cout << "\n=== Menu de estructuras de datos ===\n";
        cout << "1. Pila (Stack)\n";
        cout << "2. Cola (Queue)\n";
        cout << "3. Lista enlazada simple\n";
        cout << "4. Arreglo\n";
        cout << "0. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ejecutarPila();
                break;
            case 2:
                ejecutarCola();
                break;
            case 3:
                ejecutarLista();
                break;
            case 4:
                ejecutarArreglo();
                break;
            case 0:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intenta de nuevo.\n";
        }
    } while (opcion != 0);

    return 0;
}