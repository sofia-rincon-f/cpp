#include <iostream>
#include <map>  // ¡Esta es la librería!
#include <string>
using namespace std;

int main() {
    // Crear un diccionario (map)
    map<string, string> diccionario;
    
    // Agregar elementos
    diccionario["nombre"] = "María";
    diccionario["edad"] = "30";
    diccionario["ciudad"] = "Barcelona";
    
    // Acceder a elementos
    cout << "Nombre: " << diccionario["nombre"] << endl;
    
    return 0;
}