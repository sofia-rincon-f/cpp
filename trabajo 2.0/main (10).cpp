
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

// Menú interactivo para manipular un diccionario usando std::map con múltiples valores por clave
int main() {
    // Diccionario: clave -> lista de valores
    map<string, vector<string>> diccionario;
    int opcion;
    do {
        // Mostrar menú de opciones
        cout << "\n=== MENU MAP ===" << endl;
        cout << "1. Agregar valor a una clave" << endl;
        cout << "2. Buscar valores por clave" << endl;
        cout << "3. Mostrar todo" << endl;
        cout << "4. Eliminar clave" << endl;
        cout << "5. Actualizar un valor de una clave" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore();

        // Opción 1: Agregar valor a una clave (si la clave existe, agrega a la lista; si no, la crea)
        if (opcion == 1) {
            string clave, valor;
            cout << "Ingrese clave: ";
            getline(cin, clave);
            cout << "Ingrese valor: ";
            getline(cin, valor);
            diccionario[clave].push_back(valor);
            cout << "Valor agregado a la clave." << endl;

        // Opción 2: Buscar y mostrar todos los valores de una clave
        } else if (opcion == 2) {
            string clave;
            cout << "Ingrese clave a buscar: ";
            getline(cin, clave);
            auto it = diccionario.find(clave);
            if (it != diccionario.end()) {
                cout << "Valores asociados: ";
                for (size_t i = 0; i < it->second.size(); i++) {
                    cout << (i > 0 ? ", " : "") << it->second[i];
                }
                cout << endl;
            } else {
                cout << "Clave no encontrada." << endl;
            }

        // Opción 3: Mostrar todo el diccionario con todas las listas de valores
        } else if (opcion == 3) {
            cout << "\nContenido del diccionario:" << endl;
            int i = 1;
            for (const auto& par : diccionario) {
                cout << i++ << ". " << par.first << " = [";
                for (size_t j = 0; j < par.second.size(); j++) {
                    cout << par.second[j];
                    if (j + 1 < par.second.size()) cout << ", ";
                }
                cout << "]" << endl;
            }
            if (diccionario.empty()) cout << "(Vacío)" << endl;

        // Opción 4: Eliminar una clave y todos sus valores
        } else if (opcion == 4) {
            string clave;
            cout << "Ingrese clave a eliminar: ";
            getline(cin, clave);
            if (diccionario.erase(clave)) {
                cout << "Clave eliminada." << endl;
            } else {
                cout << "Clave no encontrada." << endl;
            }

        // Opción 5: Actualizar un valor específico de la lista de una clave
        } else if (opcion == 5) {
            string clave;
            cout << "Ingrese clave a actualizar: ";
            getline(cin, clave);
            auto it = diccionario.find(clave);
            if (it != diccionario.end() && !it->second.empty()) {
                cout << "Valores actuales:" << endl;
                for (size_t j = 0; j < it->second.size(); j++) {
                    cout << j+1 << ". " << it->second[j] << endl;
                }
                int idx;
                cout << "Ingrese el número del valor a actualizar: ";
                cin >> idx;
                cin.ignore();
                if (idx < 1 || (size_t)idx > it->second.size()) {
                    cout << "Índice inválido." << endl;
                } else {
                    string nuevoValor;
                    cout << "Ingrese el nuevo valor: ";
                    getline(cin, nuevoValor);
                    it->second[idx-1] = nuevoValor;
                    cout << "Valor actualizado." << endl;
                }
            } else {
                cout << "Clave no encontrada o sin valores." << endl;
            }

        // Opción 0: Salir del programa
        } else if (opcion == 0) {
            cout << "Saliendo..." << endl;

        // Opción inválida
        } else {
            cout << "Opción inválida." << endl;
        }
    } while (opcion != 0);
    return 0;
}