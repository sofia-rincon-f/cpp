#include <iostream>
using namespace std;

// Nodo
struct Node {
    int data;
    Node* next;
};

// Lista enlazada simple4
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Agregar al final (para mantener orden del usuario)
    void push_back(int newData) {
        Node* newNode = new Node();
        newNode->data = newData;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Insertar en una posición específica
    void insert_at(int index, int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (index == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        for (int i = 0; current != nullptr && i < index - 1; i++) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Índice fuera de rango para inserción." << endl;
            delete newNode;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    // Eliminar en una posición específica
    void delete_at(int index) {
        if (head == nullptr) {
            cout << "Lista vacía. No se puede eliminar." << endl;
            return;
        }

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        for (int i = 0; current != nullptr && i < index - 1; i++) {
            current = current->next;
        }

        if (current == nullptr || current->next == nullptr) {
            cout << "Índice fuera de rango para eliminación." << endl;
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    // Mostrar la lista
    void print() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    // Obtener el valor en un índice específico (para mostrar "el tercer elemento")
    void get_at(int index) {
        Node* current = head;
        int i = 0;
        while (current != nullptr) {
            if (i == index) {
                cout << "El elemento en la posición " << index + 1 << " es: " << current->data << endl;
                return;
            }
            current = current->next;
            i++;
        }
        cout << "No existe el elemento en la posición " << index + 1 << "." << endl;
    }
};

// Función principal
int main() {
    LinkedList lista;
    int tam, valor;

    // Ingreso de tamaño
    cout << "Indique la cantidad de elementos: ";
    cin >> tam;

    // Ingreso de elementos
    for (int i = 0; i < tam; i++) {
        cout << "Elemento " << i << ": ";
        cin >> valor;
        lista.push_back(valor);
    }

    // Mostrar el tercer elemento si existe (posición 2)
    lista.get_at(2);

    // Inserción
    int valorInsertar, posInsertar;
    cout << "Indique el valor a insertar: ";
    cin >> valorInsertar;
    cout << "Indique la posición donde insertar (0 a " << tam << "): ";
    cin >> posInsertar;
    lista.insert_at(posInsertar, valorInsertar);

    // Actualizar tamaño lógico
    tam++;

    // Eliminación
    int posEliminar;
    cout << "Indique la posición a eliminar (0 a " << tam - 1 << "): ";
    cin >> posEliminar;
    lista.delete_at(posEliminar);

    // Mostrar lista final
    cout << "Lista final: ";
    lista.print();

    return 0;
}