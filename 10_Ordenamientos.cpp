#include <iostream>
#include<conio.h>

using namespace std;

int main(){

// Video 50 Método de ordenamiento burbuja

    /*Funciona revisando cada elemento de la lista que será 
    ordenada con el siguiente elemento, intercambiandolos 
    de posicion si están en el orden equivocado

    Hace que los números menores se ordenen primero

    Swap
    */

    int numeros[] = {4,1,2,3,6,7};
    int i,j,aux;


    //Algoritmo metodo burbuja
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (numeros[j] > numeros[j+1]){

                aux = numeros[j]; // 4
                numeros[j] = numeros[j+1]; // n[j] = 1
                numeros[j+1] = aux; // n[j+1] = 4 (que es aux)
            }
        }
        
    }

    cout << "Orden Ascendente: ";
    for (i = 0; i < 6; i++) {
        cout << numeros[i] << " ";
    }

    getch();


//Video 51 Metodo Ordenamiento por inserción 

    /*Es una forma más humana de ordenar.
    Se usa especialmente para ordenar un mazo de cartar
    numeradas de forma arbitraria.
    
    Requiere O(n**2)
    */

    int numeros[]= {4,2,3,1,5};
    int i,pos,aux;

    for(i=0;i<5;i++){
        pos = i; 
        aux = numeros[i]

        while ((pos>0) && (numeros[pos-1] > aux)) // numeroIzq > numeroActual
        {
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }

    cout<<"Orden Ascendente: ";
    for(i=0;i<5;i++){
        cout<<numeros[i]<<" ";
    }

    cout<<"\nOrden Descesdente: ";
    for(i=4;i>=0;i--){
        cout<<numeros[i]<<" ";
    }

    getch();


// Video 52 Metodo de ordenamiento por selección

    /*1. Busca el minimo elemento de la lista
    2. Intercambia con el primer elemento
    3. Busca el minimo del resto de la lista
    4. Intercambia con el segundo 
    Así sucesivamente
    
    Requiere O(n**2)
    */

    int numeros[] = {8,2,4,5,7};
    int i, j, aux, min;


    //Algoritmo del ordenamiento por selección
    for (i = 0; i < 5; i++)
    {
        min = i; // 8
        for(j=i+1;j<5;j++){ // j=i+1 = 2
            if(numeros[j] < numeros[min]){ // Si 2 < 8
                min = j; // el nuevo min será 2
            }
         }   
        aux = numeros[i]; // 8
        numeros[i]= numeros[min]; // numeros[i]=2
        numeros[min]=aux; // 8 
    }

    cout<<"Orden Ascendente: ";
    for(i=0;i<5;i++){
        cout<<numeros[i]<<" ";
    }

    cout<<"\nOrden Descesdente: ";
    for(i=4;i>=0;i--){
        cout<<numeros[i]<<" ";
    }


    return 0;

}