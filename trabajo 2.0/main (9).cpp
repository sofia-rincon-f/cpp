

// Programa: Diccionario simple con múltiples valores por clave y menú interactivo
// Autor: [Tu Nombre]
// Descripción: Permite agregar, buscar, mostrar, eliminar y actualizar valores asociados a claves, usando un arreglo de estructuras.

#include <iostream>   // Para entrada/salida estándar
#include <string>     // Para usar std::string
#include <vector>     // Para usar std::vector
using namespace std;

// Estructura para almacenar un par clave-lista de valores
// Cada clave tiene un vector de valores asociados
struct ParClaveValor {
    string clave;              // Clave del elemento
    vector<string> valores;    // Lista de valores asociados a la clave
};

// Función que implementa el menú interactivo del diccionario
void diccionarioSimple() {
    const int MAX_ELEMENTOS = 100; // Capacidad máxima del diccionario
    ParClaveValor diccionario[MAX_ELEMENTOS]; // Arreglo de pares clave-lista de valores
    int cantidad = 0; // Número actual de elementos en el diccionario
    int opcion; // Opción seleccionada por el usuario

    // Bucle principal del menú
    do {
        // Mostrar menú de opciones
        cout << "\n=== MENU DICCIONARIO ===" << endl;
        cout << "1. Agregar valor a una clave" << endl;
        cout << "2. Buscar valores por clave" << endl;
        cout << "3. Mostrar todo" << endl;
        cout << "4. Eliminar clave" << endl;
        cout << "5. Actualizar un valor de una clave" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // Limpiar salto de línea pendiente

        // Opción 1: Agregar valor a una clave
        if (opcion == 1) {
            // Verificar si hay espacio disponible
            if (cantidad >= MAX_ELEMENTOS) {
                cout << "El diccionario está lleno." << endl;
                continue;
            }
            string clave, valor;
            cout << "Ingrese clave: ";
            getline(cin, clave);
            // Buscar si la clave ya existe
            int pos = -1;
            for (int i = 0; i < cantidad; i++) {
                if (diccionario[i].clave == clave) {
                    pos = i;
                    break;
                }
            }
            cout << "Ingrese valor: ";
            getline(cin, valor);
            if (pos != -1) {
                // Si la clave existe, agregar el valor al vector
                diccionario[pos].valores.push_back(valor);
                cout << "Valor agregado a la clave existente." << endl;
            } else {
                // Si la clave no existe, crear nueva entrada
                diccionario[cantidad].clave = clave;
                diccionario[cantidad].valores.push_back(valor);
                cantidad++;
                cout << "Clave y valor agregados." << endl;
            }

        // Opción 2: Buscar valores por clave
        } else if (opcion == 2) {
            string clave;
            cout << "Ingrese clave a buscar: ";
            getline(cin, clave);
            bool encontrado = false;
            // Buscar la clave en el diccionario
            for (int i = 0; i < cantidad; i++) {
                if (diccionario[i].clave == clave) {
                    cout << "Valores asociados: ";
                    for (size_t j = 0; j < diccionario[i].valores.size(); j++) {
                        cout << (j > 0 ? ", " : "") << diccionario[i].valores[j];
                    }
                    cout << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) cout << "Clave no encontrada." << endl;

        // Opción 3: Mostrar todo el diccionario
        } else if (opcion == 3) {
            cout << "\nContenido del diccionario:" << endl;
            // Recorrer y mostrar todas las claves y sus valores
            for (int i = 0; i < cantidad; i++) {
                cout << i+1 << ". " << diccionario[i].clave << " = [";
                for (size_t j = 0; j < diccionario[i].valores.size(); j++) {
                    cout << diccionario[i].valores[j];
                    if (j + 1 < diccionario[i].valores.size()) cout << ", ";
                }
                cout << "]" << endl;
            }
            if (cantidad == 0) cout << "(Vacío)" << endl;

        // Opción 4: Eliminar clave
        } else if (opcion == 4) {
            string clave;
            cout << "Ingrese clave a eliminar: ";
            getline(cin, clave);
            bool eliminado = false;
            // Buscar la clave y eliminarla si existe
            for (int i = 0; i < cantidad; i++) {
                if (diccionario[i].clave == clave) {
                    // Mover el último elemento a la posición eliminada para mantener compacto el arreglo
                    diccionario[i] = diccionario[cantidad-1];
                    cantidad--;
                    eliminado = true;
                    cout << "Clave eliminada." << endl;
                    break;
                }
            }
            if (!eliminado) cout << "Clave no encontrada." << endl;

        // Opción 5: Actualizar un valor de una clave existente
        } else if (opcion == 5) {
            string clave;
            cout << "Ingrese clave a actualizar: ";
            getline(cin, clave);
            bool encontrado = false;
            // Buscar la clave
            for (int i = 0; i < cantidad; i++) {
                if (diccionario[i].clave == clave) {
                    if (diccionario[i].valores.empty()) {
                        cout << "No hay valores para actualizar en esta clave." << endl;
                        encontrado = true;
                        break;
                    }
                    // Mostrar valores actuales
                    cout << "Valores actuales:" << endl;
                    for (size_t j = 0; j < diccionario[i].valores.size(); j++) {
                        cout << j+1 << ". " << diccionario[i].valores[j] << endl;
                    }
                    int idx;
                    cout << "Ingrese el número del valor a actualizar: ";
                    cin >> idx;
                    cin.ignore();
                    if (idx < 1 || (size_t)idx > diccionario[i].valores.size()) {
                        cout << "Índice inválido." << endl;
                    } else {
                        string nuevoValor;
                        cout << "Ingrese el nuevo valor: ";
                        getline(cin, nuevoValor);
                        diccionario[i].valores[idx-1] = nuevoValor;
                        cout << "Valor actualizado." << endl;
                    }
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) cout << "Clave no encontrada." << endl;

        // Opción 0: Salir del programa
        } else if (opcion == 0) {
            cout << "Saliendo..." << endl;

        // Opción inválida
        } else {
            cout << "Opción inválida." << endl;
        }
    } while (opcion != 0);
}

// Función principal que ejecuta el programa
int main() {
    diccionarioSimple(); // Llama al menú del diccionario
    return 0;
}