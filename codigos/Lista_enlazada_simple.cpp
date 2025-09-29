#include <iostream>
using namespace std;

// Nodo
struct Node {
    int data;
    Node* next;
};

// Lista enlazada simple
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

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
            cout << "�ndice fuera de rango para inserci�n." << endl;
            delete newNode;
            return;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void delete_at(int index) {
        if (head == nullptr) {
            cout << "Lista vac�a. No se puede eliminar." << endl;
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
            cout << "�ndice fuera de rango para eliminaci�n." << endl;
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    void print() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    void get_at(int index) {
        Node* current = head;
        int i = 0;
        while (current != nullptr) {
            if (i == index) {
                cout << "El elemento en la posici�n " << index + 1 << " es: " << current->data << endl;
                return;
            }
            current = current->next;
            i++;
        }
        cout << "No existe el elemento en la posici�n " << index + 1 << "." << endl;
    }
};

// ? Esta es la funci�n que se llamar� desde el men�
void ejecutarLista() {
    LinkedList lista;
    int tam, valor;

    cout << "Indique la cantidad de elementos: ";
    cin >> tam;

    for (int i = 0; i < tam; i++) {
        cout << "Elemento " << i << ": ";
        cin >> valor;
        lista.push_back(valor);
    }

    lista.get_at(2);  // Mostrar el tercer elemento si existe

    int valorInsertar, posInsertar;
    cout << "Indique el valor a insertar: ";
    cin >> valorInsertar;
    cout << "Indique la posici�n donde insertar (0 a " << tam << "): ";
    cin >> posInsertar;
    lista.insert_at(posInsertar, valorInsertar);

    tam++; // Aumenta tama�o l�gico

    int posEliminar;
    cout << "Indique la posici�n a eliminar (0 a " << tam - 1 << "): ";
    cin >> posEliminar;
    lista.delete_at(posEliminar);

    cout << "Lista final: ";
    lista.print();
}

