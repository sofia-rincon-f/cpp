#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    //Video 30

    /*
    Posiciones contiguas de memoria que pueden ser llamadas por sus subindices 
    n-1 primera posición 
    Todos deben ser del mismo dato
    
    Definir un vector:
    */

    char letras[5];
    
    int numero[] = {1,2,6,7,3};
    // Posición     0,1,2,3,4


    // Video 31 Suma de un vector
      
    int numeros[5] = {1,2,3,4,5};
    int suma = 0;

    for (int i=0; i<5; i++){ // en vector siempre inicializa en 0
        suma = suma + numeros[i];
    }

    cout<<"La suma de los elementos del vector es"<<suma<<endl;

    return 0;
}