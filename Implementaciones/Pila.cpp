#include <iostream>
using namespace std;

// Nodo para la pila
struct Node {
    int data;
    Node* next;
};

// Clase Stack (Pila)
class Stack {
private:
    Node* head;

public:
    Stack() {
        head = nullptr;
    }

    // Agrega un elemento a la cima
    void push(int newData) {
        Node* newNode = new Node();
        newNode->data = newData;
        newNode->next = head;
        head = newNode;
        cout << "Push: " << newData << endl;
    }

    // Elimina el elemento de la cima
    void pop() {
        if (head == nullptr) {
            cout << "La pila está vacía." << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        cout << "Pop: " << temp->data << endl;
        delete temp;
    }

    // Muestra el elemento de la cima
    void top() {
        if (head == nullptr) {
            cout << "La pila está vacía." << endl;
            return;
        }

        cout << "Top: " << head->data << endl;
    }

    // Muestra toda la pila
    void print() {
        if (head == nullptr) {
            cout << "La pila está vacía." << endl;
            return;
        }

        cout << "Contenido de la pila: ";
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    // Verifica si está vacía
    bool isEmpty() {
        return head == nullptr;
    }
};

// Función principal
int main() {
    Stack miPila;
    int n, valor;

    cout << "¿Cuántos elementos deseas apilar (push)? ";
    cin >> n;

    // Ingreso de elementos por el usuario
    for (int i = 0; i < n; i++) {
        cout << "Ingresa el elemento #" << i + 1 << ": ";
        cin >> valor;
        miPila.push(valor);
    }

    // Mostrar el elemento en la cima
    miPila.top();

    // Mostrar toda la pila
    miPila.print();

    // Eliminar elementos uno por uno
    char opcion;
    do {
        cout << "\n¿Deseas hacer un pop? (s/n): ";
        cin >> opcion;
        if (opcion == 's' || opcion == 'S') {
            miPila.pop();
            miPila.top();
            miPila.print();
        }
    } while ((opcion == 's' || opcion == 'S') && !miPila.isEmpty());

    cout << "\nPrograma terminado. La pila final: ";
    miPila.print();

    return 0;
}