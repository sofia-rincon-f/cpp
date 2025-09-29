#include <iostream>
using namespace std;

// Estructura del nodo para la cola
struct NodeCola {
    int data;
    NodeCola* next;
};

// Clase Queue (Cola)
class Cola {
private:
    NodeCola* front, * back; // Punteros al inicio y al final

public:
    Queue() {
        front = back = nullptr;
    }

    // Agrega un elemento al final
    void enqueue(int newData) {
        NodeCola* newNode = new NodeCola();
        newNode->data = newData;
        newNode->next = nullptr;

        if (back == nullptr) {
            front = back = newNode;
        } else {
            back->next = newNode;
            back = newNode;
        }

        cout << "Enqueue: " << newData << endl;
    }

    // Elimina el elemento del frente
    void dequeue() {
        if (front == nullptr) {
            cout << "La cola está vacía." << endl;
            return;
        }

        NodeCola* temp = front;
        front = front->next;

        if (front == nullptr) {
            back = nullptr;
        }

        cout << "Dequeue: " << temp->data << endl;
        delete temp;
    }

    // Muestra la cola
    void print() {
        if (front == nullptr) {
            cout << "La cola está vacía." << endl;
            return;
        }

        cout << "Cola: ";
        NodeCola* current = front;
        while (current != nullptr) {
            cout << current->data << " <- ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }

    // Verifica si está vacía
    bool isEmpty() {
        return front == nullptr;
    }

    // === Método menu para integrarlo al programa principal ===
    void menu() {
        int n, valor;
        char opcion;

        // Encolar elementos ingresados por el usuario
        cout << "=== MODULO COLA ===" << endl;
        cout << "¿Cuántos elementos deseas encolar? ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "Ingresa el elemento #" << i + 1 << ": ";
            cin >> valor;
            enqueue(valor);
        }

        // Mostrar la cola
        print();

        // Preguntar si quiere hacer dequeue
        do {
            cout << "\n¿Deseas hacer un dequeue (eliminar del frente)? (s/n): ";
            cin >> opcion;

            if (opcion == 's' || opcion == 'S') {
                dequeue();
                print();
            }

        } while ((opcion == 's' || opcion == 'S') && !isEmpty());

        cout << "\nEstado final de la cola: ";
        print();
    }
};
