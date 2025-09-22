#include <iostream>
using namespace std;

// ------------------------
// Clase Nodo
// ------------------------
class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor) {
        dato = valor;
        siguiente = nullptr;
    }
};

// ------------------------
// Clase Lista Enlazada
// ------------------------
class ListaEnlazada {
public:
    Nodo* cabeza;

    ListaEnlazada() {
        cabeza = nullptr;
    }

    // Destructor para liberar memoria
    ~ListaEnlazada() {
        Nodo* actual = cabeza;
        while (actual != nullptr) {
            Nodo* temp = actual;
            actual = actual->siguiente;
            delete temp;
        }
        cout << "Memoria liberada correctamente.\n";
    }

    // Insertar al inicio
    void insertarAlInicio(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
    }

    // Insertar al final
    void insertarAlFinal(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        if (cabeza == nullptr) {
            cabeza = nuevoNodo;
            return;
        }
        Nodo* temp = cabeza;
        while (temp->siguiente != nullptr) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }

    // Insertar después de un valor
    void insertarDespuesDe(int valorBuscado, int valorNuevo) {
        Nodo* actual = cabeza;
        while (actual != nullptr && actual->dato != valorBuscado) {
            actual = actual->siguiente;
        }
        if (actual != nullptr) {
            Nodo* nuevoNodo = new Nodo(valorNuevo);
            nuevoNodo->siguiente = actual->siguiente;
            actual->siguiente = nuevoNodo;
        } else {
            cout << "Valor " << valorBuscado << " no encontrado.\n";
        }
    }

    // Insertar antes de un valor
    void insertarAntesDe(int valorBuscado, int valorNuevo) {
        if (cabeza == nullptr) return;

        // Caso especial: insertar antes de la cabeza
        if (cabeza->dato == valorBuscado) {
            insertarAlInicio(valorNuevo);
            return;
        }

        Nodo* actual = cabeza;
        while (actual->siguiente != nullptr && actual->siguiente->dato != valorBuscado) {
            actual = actual->siguiente;
        }

        if (actual->siguiente != nullptr) {
            Nodo* nuevoNodo = new Nodo(valorNuevo);
            nuevoNodo->siguiente = actual->siguiente;
            actual->siguiente = nuevoNodo;
        } else {
            cout << "Valor " << valorBuscado << " no encontrado.\n";
        }
    }

    // Eliminar un nodo por valor
    void eliminar(int valor) {
        if (cabeza == nullptr) return;

        // Caso especial: eliminar cabeza
        if (cabeza->dato == valor) {
            Nodo* temp = cabeza;
            cabeza = cabeza->siguiente;
            delete temp;
            return;
        }

        Nodo* actual = cabeza;
        while (actual->siguiente != nullptr && actual->siguiente->dato != valor) {
            actual = actual->siguiente;
        }

        if (actual->siguiente != nullptr) {
            Nodo* temp = actual->siguiente;
            actual->siguiente = temp->siguiente;
            delete temp;
        } else {
            cout << "Valor " << valor << " no encontrado.\n";
        }
    }

    // Buscar un nodo
    bool buscar(int valor) {
        Nodo* temp = cabeza;
        while (temp != nullptr) {
            if (temp->dato == valor) return true;
            temp = temp->siguiente;
        }
        return false;
    }

    // Imprimir la lista
    void imprimir() {
        Nodo* temp = cabeza;
        while (temp != nullptr) {
            cout << temp->dato << " -> ";
            temp = temp->siguiente;
        }
        cout << "NULL\n";
    }
};

// ------------------------
// Programa principal
// ------------------------
int main() {
    ListaEnlazada lista;

    lista.insertarAlFinal(10);
    lista.insertarAlFinal(20);
    lista.insertarAlFinal(30);
    lista.insertarAlFinal(40);
    lista.imprimir();

    lista.insertarAlInicio(5);
    lista.imprimir();

    lista.insertarDespuesDe(20, 25);
    lista.imprimir();

    lista.insertarAntesDe(30, 28);
    lista.imprimir();

    lista.eliminar(10);
    lista.imprimir();

    cout << "Buscar 25: " << (lista.buscar(25) ? "Encontrado" : "No encontrado") << endl;
    cout << "Buscar 100: " << (lista.buscar(100) ? "Encontrado" : "No encontrado") << endl;

    // Al salir de main(), se ejecuta el destructor y se libera la memoria
    return 0;
}
