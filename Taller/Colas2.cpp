#include <iostream>
#include <string>

/*
Implementa un sistema de cola de impresi ́on. El programa debe permitir agregar
documentos a la cola, imprimir el primer documento de la cola y ver el estado de la cola.
> Agregar documento
> Imprimir
> Ver cola de impresion

*/

using namespace std;

struct Documento {

    string nombre;
    Documento* next;
};


class Cola {
private:
    Documento* front, * back;

public:

    Cola(){
        front = back = nullptr;
    }

    //Agregar a la cola 

    void agregarDocumento(string nombreDoc){
        Documento* nuevo = new Documento();
        nuevo -> nombre = nombreDoc;
        nuevo -> next = nullptr;

        if(back == nullptr){
            front = back = nuevo;
        } else {
            back -> next = nuevo;
            back = nuevo;
        }

        cout << "Documento \"" <<nombreDoc << "\" agregado a la cola \n";
    }

    // Imprimir documento (sacar de la cola)

    void imprimirDocumento(){
        if (front == nullptr){
            cout << "La cola de impresión esta vacia. \n";
            return;
        }
        
        Documento* temp = front;
        cout << "Imprimiendo documento: \"" << temp -> nombre << "\"...\n";
        front = front -> next;

        if (front == nullptr){
            back = nullptr;
        }
        
        delete temp;
    }

    // Ver estado de la cola 

    void verCola(){
        if (front == nullptr)
        {
            cout << "La cola de impresion esta vacia. \n";
            return;
        }

        cout << "Documentos en cola: ";
        Documento* actual = front; 
        while (actual != nullptr)
        {
            cout << actual -> nombre << " <- ";
            actual = actual -> next;
        }
        cout << "NULL\n";  
    }

    // Verificar si está vacía
    bool estaVacia(){
        return front == nullptr;
    }


}; 

// =========================
// Programa principal
// =========================
int main() {
    Cola cola;
    int opc;
    string nombreDoc;

    do {
        cout << "\n===== SISTEMA DE COLA DE IMPRESION =====\n";
        cout << "1. Agregar documento\n";
        cout << "2. Imprimir documento\n";
        cout << "3. Ver cola de impresion\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opc;

        switch (opc) {
        case 1:
            cout << "Ingrese nombre del documento: ";
            cin >> nombreDoc;
            cola.agregarDocumento(nombreDoc);
            break;

        case 2:
            cola.imprimirDocumento();
            break;

        case 3:
            cola.verCola();
            break;

        case 4:
            cout << "Saliendo del sistema...\n";
            break;

        default:
            cout << "Opcion invalida.\n";
        }
    } while (opc != 4);

    return 0;
}
