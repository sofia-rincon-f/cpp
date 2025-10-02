#include <iostream>


using namespace std;


int main(){

    /*
    Escribe un programa que rote los elementos de un arreglo hacia la derecha un 
    numero determinado de veces. Por ejemplo, si el arreglo es [1, 2, 3, 4, 5] y se rota 2 veces, el
    resultado debe ser [4, 5, 1, 2, 3].
    */

    int n;

    cout<<"Digite el numero de elementos que va a tener el arreglo: ";
    cin>>n;

    int arreglo[n];

    for (int i=0; i<n ; i++){
        cout<<"Digite un numero: ";
        cin>>arreglo[i];
    }

    int rotacion;
    cout << "Ingrese numero de rotaciones: ";
    cin >> rotacion;

    rotacion = rotacion % n;

    for (int r = 0; r < rotacion; r++) {
        int aux = arreglo[n - 1];

        for (int i = n - 1; i > 0; i--) {
            arreglo[i] = arreglo[i - 1];
        }
        
        arreglo[0] = aux;
    }

    cout << "Arreglo rotado: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    
    
    return 0;


}

