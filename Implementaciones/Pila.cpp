#include <iostream>
using namespace std;

// Nodo para la pila
struct NodePila {
    int data;
    NodePila* next;
};

// Clase Stack (Pila)
class Pila {
private:
    NodePila* head;

public:
    Stack() {
        head = nullptr;
    }

    // Agrega un elemento a la cima
    void push(int newData) {
        NodePila* newNode = new NodePila();
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

        NodePila* temp = head;
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
        NodePila* current = head;
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

    // === Método menu para integrarlo al programa principal ===
    void menu() {
        int n, valor;

        cout << "=== MODULO PILA ===" << endl;
        cout << "¿Cuántos elementos deseas apilar (push)? ";
        cin >> n;

        // Ingreso de elementos por el usuario
        for (int i = 0; i < n; i++) {
            cout << "Ingresa el elemento #" << i + 1 << ": ";
            cin >> valor;
            push(valor);
        }

        // Mostrar el elemento en la cima
        top();

        // Mostrar toda la pila
        print();

        // Eliminar elementos uno por uno
        char opcion;
        do {
            cout << "\n¿Deseas hacer un pop? (s/n): ";
            cin >> opcion;
            if (opcion == 's' || opcion == 'S') {
                pop();
                top();
                print();
            }
        } while ((opcion == 's' || opcion == 'S') && !isEmpty());

        cout << "\nPrograma terminado. La pila final: ";
        print();
    }
};
