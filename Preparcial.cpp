# include < iostream >

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