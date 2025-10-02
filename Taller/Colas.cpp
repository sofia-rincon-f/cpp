#include <iostream>
#include <string>

/*Crea un programa que simule una cola de atencion al cliente. El programa debe permitir tres opciones: 
> Añadir cliente: Agrega un nuevo cliente al final de la cola. 
> Atender cliente: Elimina al primer cliente de la cola. 
> Mostrar cola: Muestra los clientes en espera. */

using namespace std;

// Nodo de la cola con string
struct NodeCola {
    string data;
    NodeCola* next;
};

// Clase Cola
class Cola {
private:
    NodeCola* front;
    NodeCola* back;

public:
    Cola() {
        front = back = nullptr;
    }

    void enqueue(string newData) {
        NodeCola* newNode = new NodeCola();
        newNode->data = newData;
        newNode->next = nullptr;

        if (back == nullptr) {
            front = back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }

        cout << " Cliente " << newData << " anadido a la cola.\n";
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "La cola esta vacia.\n";
            return;
        }

        NodeCola* temp = front;
        cout << "Atendiendo cliente " << temp->data << "...\n";
        front = front->next;

        if (front == nullptr) {
            back = nullptr;
        }

        delete temp;
    }

    void print() {
        if (front == nullptr) {
            cout << "La cola esta vacia.\n";
            return;
        }

        cout << "Clientes en espera: ";
        NodeCola* current = front;
        while (current != nullptr) {
            cout << current->data << " <- ";
            current = current->next;
        }
        cout << "NULL\n";
    }

    bool isEmpty() {
        return front == nullptr;
    }
};

// =========================
// Programa principal
// =========================
int main() {
    Cola cola;
    int opc;
    string nombre;

    do {
        cout << "\n===== MENU COLA =====\n";
        cout << "1. Anadir cliente\n";
        cout << "2. Atender cliente\n";
        cout << "3. Mostrar cola\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion : ";
        cin >> opc;

        switch (opc) {
        case 1:
            cout << "12 Ingrese el nombre del cliente : ";
            cin >> nombre;
            cola.enqueue(nombre);
            break;

        case 2:
            cola.dequeue();
            break;

        case 3:
            cola.print();
            break;

        case 4:
            cout << "Saliendo...\n";
            break;

        default:
            cout << "Opcion invalida.\n";
        }
    } while (opc != 4);

    return 0;
}
