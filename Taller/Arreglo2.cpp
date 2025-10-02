#include <iostream>

using namespace std;

int main(){

    /*
    Desarrolla un programa que, dada una matriz (arreglo bidimensional) de M x N,
    si encuentra un elemento que es 0, toda su fila y columna se conviertan en 0.
    */


    int filas, columnas;


    cout << "Ingrese numero de filas: "; cin >> filas;

    cout << "Ingrese numero de columnas: "; cin >> columnas;

    int matriz[filas][columnas]; 

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz ingresada:\n";

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    int matrizCeros [filas][columnas];

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            matrizCeros[i][j] = matriz[i][j];
        }
    }
    

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            if(matriz[i][j] == 0){
                for (int i = 0; i < filas; i++)
                {
                    matrizCeros[i][j] = 0;
                }
                for (int j = 0; j < columnas; j++)
                {
                    matrizCeros[i][j] = 0;
                }
            }
        }
    }

    cout << "\n Matriz modificada con ceros: " <<endl;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout <<matrizCeros[i][j] << " ";
        }cout <<endl;
    }
    

    return 0;
}