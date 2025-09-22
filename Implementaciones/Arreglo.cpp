#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int numeros[MAX];
    int tam;
5
    // Paso 1: Tamaño inicial del arreglo
    cout << "Indique la cantidad de elementos iniciales del arreglo: ";
    cin >> tam;

    if (tam <= 0 || tam > MAX) {
        cout << "Tamaño inválido." << endl;
        return 1;
    }

    // Paso 2: Ingresar los elementos
    for (int i = 0; i < tam; i++) {
        cout << "Elemento " << i << ": ";
        cin >> numeros[i];
    }

    // Paso 3: Mostrar un elemento específico (ej. el tercero)
    if (tam >= 3) {
        cout << "El tercer elemento es: " << numeros[2] << endl;
    } else {
        cout << "No hay suficientes elementos para mostrar el tercero." << endl;
    }

    // Paso 4: Inserción
    int valorInsertar, posInsertar;
    cout << "Indique el valor a insertar: ";
    cin >> valorInsertar;
    cout << "Indique la posición donde insertar (0 a " << tam << "): ";
    cin >> posInsertar;

    if (posInsertar < 0 || posInsertar > tam || tam >= MAX) {
        cout << "Posición inválida para inserción." << endl;
        return 1;
    }

    // Desplazar elementos a la derecha
    for (int i = tam; i > posInsertar; i--) {
        numeros[i] = numeros[i - 1];
    }
    numeros[posInsertar] = valorInsertar;
    tam++; // Aumentar cantidad de elementos

    // Paso 5: Eliminación
    int posEliminar;
    cout << "Indique la posición a eliminar (0 a " << tam - 1 << "): ";
    cin >> posEliminar;

    if (posEliminar < 0 || posEliminar >= tam) {
        cout << "Posición inválida para eliminación." << endl;
        return 1;
    }

    // Desplazar elementos a la izquierda
    for (int i = posEliminar; i < tam - 1; i++) {
        numeros[i] = numeros[i + 1];
    }
    tam--; // Disminuir cantidad de elementos

    // Paso 6: Mostrar arreglo final
    cout << "Arreglo final: ";
    for (int i = 0; i < tam; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}