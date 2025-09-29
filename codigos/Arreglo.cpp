#include <iostream>
using namespace std;

// ----- Pila -----
struct NodeStack {
    int data;
    NodeStack* next;
};

class Stack {
private:
    NodeStack* head;
public:
    Stack() : head(nullptr) {}
    void push(int val) {
        NodeStack* newNode = new NodeStack{val, head};
        head = newNode;
        cout << "Push: " << val << endl;
    }
    void pop() {
        if (!head) {
            cout << "Pila vacía.\n";
            return;
        }
        NodeStack* temp = head;
        cout << "Pop: " << head->data << endl;
        head = head->next;
        delete temp;
    }
    void print() {
        if (!head) {
            cout << "Pila vacía.\n";
            return;
        }
        cout << "Pila: ";
        for (NodeStack* cur = head; cur; cur = cur->next) {
            cout << cur->data << " ";
        }
        cout << endl;
    }
    bool isEmpty() {
        return head == nullptr;
    }
};

void ejecutarPila() {
    Stack s;
    int n, val;
    cout << "¿Cuántos elementos deseas apilar? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Elemento #" << i + 1 << ": ";
        cin >> val;
        s.push(val);
    }
    s.print();

    char c;
    do {
        cout << "¿Pop? (s/n): ";
        cin >> c;
        if (c == 's' || c == 'S') {
            s.pop();
            s.print();
        }
    } while ((c == 's' || c == 'S') && !s.isEmpty());
}

// ----- Cola -----
struct NodeQueue {
    int data;
    NodeQueue* next;
};

class Queue {
private:
    NodeQueue* front;
    NodeQueue* back;
public:
    Queue() : front(nullptr), back(nullptr) {}
    void enqueue(int val) {
        NodeQueue* newNode = new NodeQueue{val, nullptr};
        if (!back) front = back = newNode;
        else {
            back->next = newNode;
            back = newNode;
        }
        cout << "Enqueue: " << val << endl;
    }
    void dequeue() {
        if (!front) {
            cout << "Cola vacía.\n";
            return;
        }
        NodeQueue* temp = front;
        cout << "Dequeue: " << front->data << endl;
        front = front->next;
        if (!front) back = nullptr;
        delete temp;
    }
    void print() {
        if (!front) {
            cout << "Cola vacía.\n";
            return;
        }
        cout << "Cola: ";
        for (NodeQueue* cur = front; cur; cur = cur->next) {
            cout << cur->data << " ";
        }
        cout << endl;
    }
    bool isEmpty() {
        return front == nullptr;
    }
};

void ejecutarCola() {
    Queue q;
    int n, val;
    cout << "¿Cuántos elementos deseas encolar? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Elemento #" << i + 1 << ": ";
        cin >> val;
        q.enqueue(val);
    }
    q.print();

    char c;
    do {
        cout << "¿Dequeue? (s/n): ";
        cin >> c;
        if (c == 's' || c == 'S') {
            q.dequeue();
            q.print();
        }
    } while ((c == 's' || c == 'S') && !q.isEmpty());
}

// ----- Lista enlazada simple -----
struct NodeList {
    int data;
    NodeList* next;
};

class LinkedList {
private:
    NodeList* head;
public:
    LinkedList() : head(nullptr) {}
    void push_back(int val) {
        NodeList* newNode = new NodeList{val, nullptr};
        if (!head) head = newNode;
        else {
            NodeList* cur = head;
            while (cur->next) cur = cur->next;
            cur->next = newNode;
        }
        cout << "Insertado: " << val << endl;
    }
    void print() {
        if (!head) {
            cout << "Lista vacía.\n";
            return;
        }
        cout << "Lista: ";
        for (NodeList* cur = head; cur; cur = cur->next) {
            cout << cur->data << " ";
        }
        cout << endl;
    }
    bool isEmpty() {
        return head == nullptr;
    }
    void insert_at(int index, int val) {
        if (index < 0) {
            cout << "Índice inválido.\n";
            return;
        }
        NodeList* newNode = new NodeList{val, nullptr};
        if (index == 0) {
            newNode->next = head;
            head = newNode;
            cout << "Insertado " << val << " en posición " << index << endl;
            return;
        }
        NodeList* cur = head;
        for (int i = 0; i < index - 1 && cur != nullptr; i++) {
            cur = cur->next;
        }
        if (!cur) {
            cout << "Índice fuera de rango.\n";
            delete newNode;
            return;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        cout << "Insertado " << val << " en posición " << index << endl;
    }
    void delete_at(int index) {
        if (index < 0 || !head) {
            cout << "Índice inválido o lista vacía.\n";
            return;
        }
        if (index == 0) {
            NodeList* temp = head;
            head = head->next;
            cout << "Eliminado elemento en posición 0: " << temp->data << endl;
            delete temp;
            return;
        }
        NodeList* cur = head;
        for (int i = 0; i < index - 1 && cur != nullptr; i++) {
            cur = cur->next;
        }
        if (!cur || !cur->next) {
            cout << "Índice fuera de rango.\n";
            return;
        }
        NodeList* temp = cur->next;
        cur->next = temp->next;
        cout << "Eliminado elemento en posición " << index << ": " << temp->data << endl;
        delete temp;
    }
};

void ejecutarLista() {
    LinkedList lista;
    int n, val;

    cout << "¿Cuántos elementos deseas agregar a la lista? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Elemento #" << i + 1 << ": ";
        cin >> val;
        lista.push_back(val);
    }
    lista.print();

    char opcion;
    cout << "¿Quieres insertar un elemento? (s/n): ";
    cin >> opcion;
    if (opcion == 's' || opcion == 'S') {
        int pos, valorInsertar;
        cout << "Posición para insertar: ";
        cin >> pos;
        cout << "Valor a insertar: ";
        cin >> valorInsertar;
        lista.insert_at(pos, valorInsertar);
        lista.print();
    }

    cout << "¿Quieres eliminar un elemento? (s/n): ";
    cin >> opcion;
    if (opcion == 's' || opcion == 'S') {
        int posEliminar;
        cout << "Posición para eliminar: ";
        cin >> posEliminar;
        lista.delete_at(posEliminar);
        lista.print();
    }
}

// ----- Arreglo -----
void ejecutarArreglo() {
    const int MAX = 100;
    int arr[MAX];
    int n;

    cout << "Cantidad de elementos del arreglo: ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Tamaño inválido.\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Arreglo actual: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    char opcion;
    cout << "¿Quieres insertar un elemento? (s/n): ";
    cin >> opcion;
    if (opcion == 's' || opcion == 'S') {
        int pos, val;
        cout << "Posición para insertar (0 a " << n << "): ";
        cin >> pos;
        cout << "Valor a insertar: ";
        cin >> val;

        if (pos < 0 || pos > n || n >= MAX) {
            cout << "Posición inválida o arreglo lleno.\n";
        } else {
            for (int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = val;
            n++;
        }
    }

    cout << "¿Quieres eliminar un elemento? (s/n): ";
    cin >> opcion;
    if (opcion == 's' || opcion == 'S') {
        int pos;
        cout << "Posición para eliminar (0 a " << n-1 << "): ";
        cin >> pos;
        if (pos < 0 || pos >= n) {
            cout << "Posición inválida.\n";
        } else {
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        }
    }

    cout << "Arreglo final: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int opcion;
    do {
        cout << "\n=== Menú Estructuras de Datos ===\n";
        cout << "1. Pila (Stack)\n";
        cout << "2. Cola (Queue)\n";
        cout << "3. Lista enlazada simple\n";
        cout << "4. Arreglo\n";
        cout << "0. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: ejecutarPila(); break;
            case 2: ejecutarCola(); break;
            case 3: ejecutarLista(); break;
            case 4: ejecutarArreglo(); break;
            case 0: cout << "Saliendo...\n"; break;
            default: cout << "Opción inválida.\n"; break;
        }
    } while (opcion != 0);

    return 0;
}