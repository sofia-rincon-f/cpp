#include <iostream>
using namespace std;

// Estructura del nodo
struct Node {
    int data;
    Node* next;
};

// Clase Queue (Cola)
class Queue {
private:
    Node* front, * back; // Punteros al inicio y al final

public:
    Queue() {
        front = back = nullptr;
    }

    // Agrega un elemento al final
    void enqueue(int newData) {
        Node* newNode = new Node();
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

        Node* temp = front;
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
        Node* current = front;
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
};

// Función principal
int main() {
    Queue miCola;
    int n, valor;
    char opcion;

    // Encolar elementos ingresados por el usuario
    cout << "¿Cuántos elementos deseas encolar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingresa el elemento #" << i + 1 << ": ";
        cin >> valor;
        miCola.enqueue(valor);
    }

    // Mostrar la cola
    miCola.print();

    // Preguntar si quiere hacer dequeue
    do {
        cout << "\n¿Deseas hacer un dequeue (eliminar del frente)? (s/n): ";
        cin >> opcion;

        if (opcion == 's' || opcion == 'S') {
            miCola.dequeue();
            miCola.print();
        }

    } while ((opcion == 's' || opcion == 'S') && !miCola.isEmpty());

    cout << "\nPrograma terminado. Estado final de la cola:" << endl;
    miCola.print();

    return 0;
}