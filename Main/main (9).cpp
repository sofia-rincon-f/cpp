#include <iostream>
#include <string>  // Incluir para usar string
using namespace std;

// Estructura simple para pares clave-valor
struct ParClaveValor {
    string clave;
    string valor;
};

// Función para crear y usar un diccionario básico
void diccionarioSimple() {
    const int MAX_ELEMENTOS = 100;
    ParClaveValor diccionario[MAX_ELEMENTOS];
    int cantidad = 0;
    
    // Función interna para agregar elementos
    auto agregar = [&](const string& clave, const string& valor) {
        for (int i = 0; i < cantidad; i++) {
            if (diccionario[i].clave == clave) {
                diccionario[i].valor = valor;
                return;
            }
        }
        if (cantidad < MAX_ELEMENTOS) {
            diccionario[cantidad].clave = clave;
            diccionario[cantidad].valor = valor;
            cantidad++;
        }
    };
    
    // Función interna para obtener valores
    auto obtener = [&](const string& clave) -> string {
        for (int i = 0; i < cantidad; i++) {
            if (diccionario[i].clave == clave) {
                return diccionario[i].valor;
            }
        }
        return "NO_ENCONTRADO";
    };
    
    // Función interna para mostrar todo
    /*auto mostrar = [&]() {
        cout << "Contenido del diccionario:" << endl;
        for (int i = 0; i < cantidad; i++) {
            cout << i+1 << ". " << diccionario[i].clave << " = " << diccionario[i].valor << endl;
        }
    };*/
   
    // Ejemplo de uso
    agregar("animal", "perro");
    agregar("color", "azul");
    agregar("numero", "42");
    agregar("pais", "colombia"); // Actualiza el valor
    
    cout << "Animal: " << obtener("animal") << endl;
    cout << "Color: " << obtener("color") << endl;
    cout << "Pais: " << obtener("pais") << endl; // No existe
    cout << "Numero: " << obtener("numero") << endl;    
    
    //mostrar();
}

// Función main para ejecutar el programa
int main() {
    diccionarioSimple();
    return 0;
}