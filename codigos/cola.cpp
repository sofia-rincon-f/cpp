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
    Node* front;
    Node* back;
public:
    Queue() {
        front = back = nullptr;
    }

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

    bool isEmpty() {
        return front == nullptr;
    }
};

void ejecutarCola() {
    Queue miCola;
    int n, valor;
    char opcion;

    cout << "¿Cuántos elementos deseas encolar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingresa el elemento #" << i + 1 << ": ";
        cin >> valor;
        miCola.enqueue(valor);
    }

    miCola.print();

    do {
        cout << "\n¿Deseas hacer un dequeue (eliminar del frente)? (s/n): ";
        cin >> opcion;

        if (opcion == 's' || opcion == 'S') {
            miCola.dequeue();
            miCola.print();
        }

    } while ((opcion == 's' || opcion == 'S') && !miCola.isEmpty());

    cout << "\nPrograma terminado. Estado final de la cola:\n";
    miCola.print();
}

int main() {
    ejecutarCola();
    return 0;
}

