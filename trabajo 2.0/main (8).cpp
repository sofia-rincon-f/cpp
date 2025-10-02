#include <iostream>
#include <string>
#include <vector>

using namespace std;


/**
 * @brief Estructura para almacenar una entrada en la tabla hash.
 * Contiene un nombre (clave), un número (valor) y un indicador de ocupación.
 */
struct EntradaHash {
    string nombre;   ///< Clave: nombre asociado al número
    int numero;      ///< Valor: número asociado al nombre
    bool ocupada;    ///< Indica si la posición está ocupada (manejo de colisiones)

    // Constructor por defecto
    EntradaHash() : nombre(""), numero(0), ocupada(false) {}
};


/**
 * @brief Clase que implementa una tabla hash con manejo de colisiones por double hashing.
 * Permite insertar, buscar, eliminar y mostrar elementos, así como obtener estadísticas.
 */
class TablaHash {
private:
    vector<EntradaHash> tabla; ///< Vector que almacena las entradas de la tabla hash
    int tamaño;                ///< Tamaño de la tabla hash
    int cantidadElementos;     ///< Número de elementos almacenados

    /**
     * @brief Función hash principal (suma de códigos ASCII de los caracteres).
     * @param clave Clave a hashear (nombre)
     * @return Índice hash calculado
     */
    int funcionHash(const string& clave) {
        int hash = 0;
        for (char c : clave) {
            hash += c;
        }
        return hash % tamaño;
    }

    /**
     * @brief Segunda función hash para double hashing (manejo de colisiones).
     * @param clave Clave a hashear
     * @return Valor hash secundario (debe ser coprimo con el tamaño)
     */
    int funcionHash2(const string& clave) {
        int hash = 0;
        for (char c : clave) {
            hash = (hash * 31 + c) % tamaño;
        }
        return (hash % 97) + 1; // Debe ser coprimo con el tamaño
    }

public:
    /**
     * @brief Constructor de la tabla hash.
     * @param tam Tamaño de la tabla hash
     */
    TablaHash(int tam) : tamaño(tam), cantidadElementos(0) {
        tabla.resize(tamaño);
    }

    /**
     * @brief Inserta un elemento (nombre, número) en la tabla hash.
     * Si la clave ya existe, actualiza el valor.
     * @param nombre Clave a insertar
     * @param numero Valor asociado
     * @return true si se insertó o actualizó, false si la tabla está llena
     */
    bool insertar(const string& nombre, int numero) {
        if (cantidadElementos >= tamaño) {
            cout << "Tabla hash llena!" << endl;
            return false;
        }

        int indice = funcionHash(nombre);
        int intento = 0;
        int hash2 = funcionHash2(nombre);

        // Manejo de colisiones con double hashing
        while (tabla[indice].ocupada && tabla[indice].nombre != nombre) {
            intento++;
            indice = (funcionHash(nombre) + intento * hash2) % tamaño;

            if (intento >= tamaño) {
                cout << "No se pudo insertar: tabla demasiado llena" << endl;
                return false;
            }
        }

        // Si la clave ya existe, actualizamos el valor
        if (tabla[indice].ocupada && tabla[indice].nombre == nombre) {
            tabla[indice].numero = numero;
            cout << "Actualizado: " << nombre << " -> " << numero << endl;
        } else {
            // Insertamos nuevo elemento
            tabla[indice].nombre = nombre;
            tabla[indice].numero = numero;
            tabla[indice].ocupada = true;
            cantidadElementos++;
            cout << "Insertado: " << nombre << " -> " << numero << endl;
        }

        return true;
    }

    /**
     * @brief Busca un elemento por nombre en la tabla hash.
     * @param nombre Clave a buscar
     * @return Puntero al número si se encuentra, nullptr si no existe
     */
    int* buscar(const string& nombre) {
        int indice = funcionHash(nombre);
        int intento = 0;
        int hash2 = funcionHash2(nombre);

        while (intento < tamaño) {
            if (!tabla[indice].ocupada) {
                break; // Espacio vacío encontrado, elemento no existe
            }

            if (tabla[indice].ocupada && tabla[indice].nombre == nombre) {
                return &tabla[indice].numero;
            }

            intento++;
            indice = (funcionHash(nombre) + intento * hash2) % tamaño;
        }

        return nullptr; // Elemento no encontrado
    }

    /**
     * @brief Elimina un elemento de la tabla hash por nombre.
     * @param nombre Clave a eliminar
     * @return true si se eliminó, false si no se encontró
     */
    bool eliminar(const string& nombre) {
        int indice = funcionHash(nombre);
        int intento = 0;
        int hash2 = funcionHash2(nombre);

        while (intento < tamaño) {
            if (!tabla[indice].ocupada) {
                break;
            }

            if (tabla[indice].ocupada && tabla[indice].nombre == nombre) {
                tabla[indice].ocupada = false;
                cantidadElementos--;
                cout << "Eliminado: " << nombre << endl;
                return true;
            }

            intento++;
            indice = (funcionHash(nombre) + intento * hash2) % tamaño;
        }

        cout << "No se encontró: " << nombre << endl;
        return false;
    }

    /**
     * @brief Muestra el contenido completo de la tabla hash.
     */
    void mostrar() {
        cout << "\n=== TABLA HASH ===" << endl;
        cout << "Tamaño: " << tamaño << endl;
        cout << "Elementos: " << cantidadElementos << endl;
        cout << "Factor de carga: " << (double)cantidadElementos/tamaño << endl;
        cout << "\nContenido:" << endl;

        for (int i = 0; i < tamaño; i++) {
            if (tabla[i].ocupada) {
                cout << "Posición " << i << ": " << tabla[i].nombre << " -> " << tabla[i].numero << endl;
            } else {
                cout << "Posición " << i << ": VACÍA" << endl;
            }
        }
        cout << "==================\n" << endl;
    }

    /**
     * @brief Muestra estadísticas de la tabla hash: tamaño, elementos, factor de carga y colisiones.
     */
    void estadisticas() {
        int colisiones = 0;
        for (int i = 0; i < tamaño; i++) {
            if (tabla[i].ocupada) {
                int hashOriginal = funcionHash(tabla[i].nombre);
                if (hashOriginal != i) {
                    colisiones++;
                }
            }
        }

        cout << "\n=== ESTADÍSTICAS ===" << endl;
        cout << "Tamaño de tabla: " << tamaño << endl;
        cout << "Elementos almacenados: " << cantidadElementos << endl;
        cout << "Factor de carga: " << (double)cantidadElementos/tamaño << endl;
        cout << "Colisiones detectadas: " << colisiones << endl;
        cout << "====================\n" << endl;
    }
};


/**
 * @brief Función principal. Permite al usuario interactuar con la tabla hash mediante un menú.
 * Opciones: definir tamaño, insertar, eliminar, actualizar, mostrar, estadísticas y buscar.
 */
int main() {
    TablaHash* tabla = nullptr;
    int opcion;

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Definir tamaño de la tabla" << endl;
        cout << "2. Insertar dato" << endl;
        cout << "3. Eliminar dato" << endl;
        cout << "4. Actualizar dato" << endl;
        cout << "5. Mostrar tabla" << endl;
        cout << "6. Mostrar estadísticas" << endl;
        cout << "7. Buscar dato" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore(); // Limpiar salto de línea

        switch (opcion) {
            case 1: {
                int tam;
                cout << "Ingrese el tamaño de la tabla hash: ";
                while (!(cin >> tam) || tam <= 0) {
                    cout << "Tamaño inválido. Intente de nuevo: ";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
                cin.ignore();
                delete tabla;
                tabla = new TablaHash(tam);
                break;
            }
            case 2: {
                if (!tabla) { cout << "Primero defina el tamaño de la tabla.\n"; break; }
                string nombre;
                int numero;
                cout << "Ingrese nombre: ";
                getline(cin, nombre);
                cout << "Ingrese número: ";
                while (!(cin >> numero)) {
                    cout << "Número inválido. Intente de nuevo: ";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
                cin.ignore();
                tabla->insertar(nombre, numero);
                break;
            }
            case 3: {
                if (!tabla) { cout << "Primero defina el tamaño de la tabla.\n"; break; }
                string nombre;
                cout << "Ingrese el nombre a eliminar: ";
                getline(cin, nombre);
                tabla->eliminar(nombre);
                break;
            }
            case 4: {
                if (!tabla) { cout << "Primero defina el tamaño de la tabla.\n"; break; }
                string nombre;
                int numero;
                cout << "Ingrese el nombre a actualizar: ";
                getline(cin, nombre);
                cout << "Ingrese el nuevo número: ";
                while (!(cin >> numero)) {
                    cout << "Número inválido. Intente de nuevo: ";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
                cin.ignore();
                tabla->insertar(nombre, numero);
                break;
            }
            case 5: {
                if (!tabla) { cout << "Primero defina el tamaño de la tabla.\n"; break; }
                tabla->mostrar();
                break;
            }
            case 6: {
                if (!tabla) { cout << "Primero defina el tamaño de la tabla.\n"; break; }
                tabla->estadisticas();
                break;
            }
            case 7: {
                if (!tabla) { cout << "Primero defina el tamaño de la tabla.\n"; break; }
                string nombre;
                cout << "Ingrese el nombre a buscar: ";
                getline(cin, nombre);
                int* resultado = tabla->buscar(nombre);
                if (resultado) {
                    cout << "Encontrado: " << nombre << " -> " << *resultado << endl;
                } else {
                    cout << nombre << " no encontrado" << endl;
                }
                break;
            }
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida." << endl;
        }
    } while (opcion != 0);

    delete tabla;
    return 0;
}

