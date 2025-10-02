    #include <iostream>
    #include <unordered_map>  // Para usar unordered_map (hash table)
    #include <string>
    using namespace std;

    // Programa interactivo para manipular un diccionario de edades usando unordered_map
    int main() {
        unordered_map<string, int> edades; // Diccionario: nombre -> edad
        int opcion;
        do {
            // Menú de opciones
            cout << "\n=== MENU ===" << endl;
            cout << "1. Agregar persona" << endl;
            cout << "2. Buscar edad por nombre" << endl;
            cout << "3. Mostrar todas las personas" << endl;
            cout << "4. Eliminar persona" << endl;
            cout << "5. Actualizar edad de una persona" << endl;
            cout << "0. Salir" << endl;
            cout << "Seleccione una opción: ";
            cin >> opcion;
            cin.ignore();

            // Opción 1: Agregar persona
            if (opcion == 1) {
                string nombre;
                int edad;
                cout << "Ingrese nombre: ";
                getline(cin, nombre);
                if (edades.find(nombre) != edades.end()) {
                    cout << "La persona ya existe. Use la opción de actualizar si desea cambiar la edad." << endl;
                } else {
                    cout << "Ingrese edad: ";
                    cin >> edad;
                    cin.ignore();
                    edades[nombre] = edad;
                    cout << "Persona agregada." << endl;
                }

            // Opción 2: Buscar edad por nombre
            } else if (opcion == 2) {
                string nombre;
                cout << "Ingrese nombre a buscar: ";
                getline(cin, nombre);
                auto it = edades.find(nombre);
                if (it != edades.end()) {
                    cout << "Edad de " << nombre << ": " << it->second << endl;
                } else {
                    cout << "Persona no encontrada." << endl;
                }

            // Opción 3: Mostrar todas las personas
            } else if (opcion == 3) {
                cout << "\nListado de personas y edades:" << endl;
                int i = 1;
                for (const auto& par : edades) {
                    cout << i++ << ". " << par.first << " = " << par.second << endl;
                }
                if (edades.empty()) cout << "(Vacío)" << endl;

            // Opción 4: Eliminar persona
            } else if (opcion == 4) {
                string nombre;
                cout << "Ingrese nombre a eliminar: ";
                getline(cin, nombre);
                if (edades.erase(nombre)) {
                    cout << "Persona eliminada." << endl;
                } else {
                    cout << "Persona no encontrada." << endl;
                }

            // Opción 5: Actualizar edad de una persona
            } else if (opcion == 5) {
                string nombre;
                int edad;
                cout << "Ingrese nombre a actualizar: ";
                getline(cin, nombre);
                auto it = edades.find(nombre);
                if (it != edades.end()) {
                    cout << "Ingrese la nueva edad: ";
                    cin >> edad;
                    cin.ignore();
                    it->second = edad;
                    cout << "Edad actualizada." << endl;
                } else {
                    cout << "Persona no encontrada." << endl;
                }

            // Opción 0: Salir
            } else if (opcion == 0) {
                cout << "Saliendo..." << endl;

            // Opción inválida
            } else {
                cout << "Opción inválida." << endl;
            }
        } while (opcion != 0);
        return 0;
    }