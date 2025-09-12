# include <iostream>

class Nodo {
public :
    int dato ;
    Nodo * siguiente ;

    Nodo ( int valor ) {
        dato = valor ;
        siguiente = nullptr ;
    }
};

class ListaEnlazada {
public :
    Nodo * cabeza ;

    ListaEnlazada () {
        cabeza = nullptr ;
    }

    void insertarAlFinal (int valor ) {
        Nodo * nuevoNodo = new Nodo ( valor ) ;
        if ( cabeza == nullptr ) {
            cabeza = nuevoNodo ;
            return ;
        }
        Nodo * temp = cabeza ;
        while ( temp - > siguiente != nullptr ) {
            temp = temp - > siguiente ;
        }
        temp - > siguiente = nuevoNodo ;
    }

    void eliminar (int valor ) {
        if ( cabeza == nullptr ) return ;

        if ( cabeza - > dato == valor ) {
            Nodo * temp = cabeza ;
            cabeza = cabeza - > siguiente ;
            delete temp ;
            return ;
        }

        Nodo * actual = cabeza ;
        while ( actual - > siguiente != nullptr && actual - > siguiente - > dato != valor ) {
        actual = actual - > siguiente ;
        }

        if ( actual - > siguiente == nullptr ) return ;

        Nodo * temp = actual - > siguiente ;
        actual - > siguiente = temp - > siguiente ;
        delete temp ;
    }


    void imprimir () {
        Nodo * temp = cabeza ;
        while ( temp != nullptr ) {
            std :: cout << temp - > dato << " -> ";
            temp = temp - > siguiente ;
        }
        std :: cout << " NULL " << std :: endl ;
    }
};


//------------------------------------------

Nodo* temp = cabeza;                 // O(1) asignación simple
while (temp->siguiente != nullptr) { // la condición se evalúa hasta n veces
    temp = temp->siguiente;          // dentro del bucle: O(1), pero repetido n veces → O(n)
}
temp->siguiente = nuevoNodo;         // O(1) asignación simple


Nodo* temp = cabeza;                 // O(1) asignación simple
while (temp->siguiente != nullptr) { // la condición se evalúa hasta n veces
    temp = temp->siguiente;          // dentro del bucle: O(1), pero repetido n veces → O(n)
}
6 temp->siguiente = nuevoNodo;         // O(1) asignación simple






//-----------------------------------------------------------


#include <iostream>                // Incluye la librería estándar para entrada/salida (std::cout, std::endl).

class Nodo {                      // Declaración de la clase/estructura Nodo: representa un nodo de la lista.
public:                           // Miembros públicos (accesibles desde fuera de la clase).
    int dato;                      // Campo que guarda el valor entero del nodo.
    Nodo* siguiente;               // Puntero al siguiente nodo en la lista (nullptr si es el último).

    Nodo(int valor) {              // Constructor de Nodo que recibe un entero.
        dato = valor;              // Inicializa el campo 'dato' con el valor recibido.
        siguiente = nullptr;       // Inicializa 'siguiente' a nullptr (no apunta a ningún nodo todavía).
    }                              // Fin del constructor.
};                                 // Fin de la clase Nodo.

class ListaEnlazada {              // Declaración de la clase ListaEnlazada: gestiona la lista simple.
public:                           // Miembros públicos de la lista.
    Nodo* cabeza;                  // Puntero al primer nodo de la lista (head). nullptr si la lista está vacía.

    ListaEnlazada() {              // Constructor de ListaEnlazada.
        cabeza = nullptr;          // Al crear la lista, no hay nodos: cabeza apunta a nullptr.
    }                              // Fin del constructor.

    ~ListaEnlazada() {             // Destructor: se ejecuta al destruir la lista (libera memoria).
        while (cabeza != nullptr) {            // Recorre la lista mientras haya nodos.
            Nodo* temp = cabeza;               // Guarda el nodo actual en temp.
            cabeza = cabeza->siguiente;        // Avanza la cabeza al siguiente nodo.
            delete temp;                       // Libera memoria del nodo previamente apuntado.
        }                                      // Repite hasta que cabeza sea nullptr.
    }                                          // Fin del destructor (evita fugas de memoria).

    void insertarAlFinal(int valor) {          // Método para insertar un nuevo nodo al final de la lista.
        Nodo* nuevoNodo = new Nodo(valor);     // Crea dinámicamente un nuevo nodo con el valor dado.
        if (cabeza == nullptr) {               // Si la lista está vacía (no hay cabeza)...
            cabeza = nuevoNodo;                // ...el nuevo nodo pasa a ser la cabeza.
            return;                            // Terminamos la función.
        }
        Nodo* temp = cabeza;                   // Si no está vacía, usamos temp para recorrer la lista desde la cabeza.
        while (temp->siguiente != nullptr) {   // Avanzamos hasta encontrar el último nodo (siguiente == nullptr).
            temp = temp->siguiente;            // Mueve temp al siguiente nodo.
        }
        temp->siguiente = nuevoNodo;           // Una vez en el último, enlazamos el nuevo nodo como siguiente.
    }                                          // Fin de insertarAlFinal.

    void eliminar(int valor) {                 // Método para eliminar la primera ocurrencia de 'valor'.
        if (cabeza == nullptr) return;         // Si la lista está vacía, no hay nada que eliminar.

        if (cabeza->dato == valor) {           // Caso especial: el valor está en la cabeza.
            Nodo* temp = cabeza;               // Guardamos puntero a la cabeza para borrarlo.
            cabeza = cabeza->siguiente;        // Actualizamos la cabeza al siguiente nodo.
            delete temp;                       // Liberamos memoria del nodo eliminado.
            return;                            // Salimos: ya eliminamos.
        }

        Nodo* actual = cabeza;                 // Si no era la cabeza, empezamos a buscar desde la cabeza.
        while (actual->siguiente != nullptr && actual->siguiente->dato != valor) {
            actual = actual->siguiente;        // Avanzamos hasta que el siguiente sea null o tenga el dato buscado.
        }

        if (actual->siguiente == nullptr) return; // Si llegamos al final sin encontrar el valor, salimos.

        Nodo* temp = actual->siguiente;        // 'temp' apunta al nodo que vamos a eliminar (siguiente del 'actual').
        actual->siguiente = temp->siguiente;   // Saltamos el nodo a eliminar, enlazando con el siguiente.
        delete temp;                           // Liberamos memoria del nodo eliminado.
    }                                         // Fin de eliminar.

    void imprimir() {                         // Método para imprimir la lista por consola.
        Nodo* temp = cabeza;                  // Empezamos desde la cabeza.
        while (temp != nullptr) {             // Recorremos hasta que temp sea nullptr (fin de la lista).
            std::cout << temp->dato << " -> "; // Imprime el dato del nodo y una flecha indicadora.
            temp = temp->siguiente;           // Avanzamos al siguiente nodo.
        }
        std::cout << "NULL" << std::endl;     // Al final imprimimos "NULL" y salto de línea (marca el fin).
    }                                         // Fin de imprimir.
};                                            // Fin de la clase ListaEnlazada.