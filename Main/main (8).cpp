#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estructura para almacenar los datos (nombre y número)
struct EntradaHash {
    string nombre;
    int numero;
    bool ocupada; // Para manejar colisiones
    
    EntradaHash() : nombre(""), numero(0), ocupada(false) {}
};

class TablaHash {
private:
    vector<EntradaHash> tabla;
    int tamaño;
    int cantidadElementos;
    
    // Función hash simple (suma de códigos ASCII)
    int funcionHash(const string& clave) {
        int hash = 0;
        for (char c : clave) {
            hash += c;
        }
        return hash % tamaño;
    }
    
    // Función hash alternativa para manejar colisiones (double hashing)
    int funcionHash2(const string& clave) {
        int hash = 0;
        for (char c : clave) {
            hash = (hash * 31 + c) % tamaño;
        }
        return (hash % 97) + 1; // Debe ser coprimo con el tamaño
    }

public:
    // Constructor
    TablaHash(int tam) : tamaño(tam), cantidadElementos(0) {
        tabla.resize(tamaño);
    }
    
    // Insertar un elemento en la tabla hash
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
    
    // Buscar un elemento por nombre
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
    
    // Eliminar un elemento
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
    
    // Mostrar toda la tabla hash
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
    
    // Obtener estadísticas
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

// Función principal de ejemplo
int main() {
    // Crear tabla hash con tamaño 10
    TablaHash tabla(10);
    
    // Insertar algunos elementos
    tabla.insertar("Juan", 25);
    tabla.insertar("Maria", 30);
    tabla.insertar("Pedro", 35);
    tabla.insertar("Ana", 28);
    tabla.insertar("Luis", 40);
    
    // Mostrar la tabla
    tabla.mostrar();
    
    // Buscar elementos
    cout << "=== BÚSQUEDAS ===" << endl;
    int* resultado = tabla.buscar("Maria");
    if (resultado != nullptr) {
        cout << "Encontrado: Maria -> " << *resultado << endl;
    } else {
        cout << "Maria no encontrado" << endl;
    }
    
    resultado = tabla.buscar("Carlos");
    if (resultado != nullptr) {
        cout << "Encontrado: Carlos -> " << *resultado << endl;
    } else {
        cout << "Carlos no encontrado" << endl;
    }
    
    // Actualizar un elemento existente
    cout << "\n=== ACTUALIZACIÓN ===" << endl;
    tabla.insertar("Juan", 26); // Actualizar edad de Juan
    
    // Eliminar un elemento
    cout << "\n=== ELIMINACIÓN ===" << endl;
    tabla.eliminar("Pedro");
    
    // Mostrar tabla actualizada
    tabla.mostrar();
    
    // Mostrar estadísticas
    tabla.estadisticas();
    
    // Probar con más elementos para ver colisiones
    cout << "=== MÁS INSERCIONES ===" << endl;
    tabla.insertar("Sofia", 22);
    tabla.insertar("Miguel", 33);
    tabla.insertar("Elena", 29);
    tabla.insertar("David", 31);
    
    tabla.mostrar();
    tabla.estadisticas();
    
    return 0;
}