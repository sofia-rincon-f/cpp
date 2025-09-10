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


// Video 32 Mostrar los numeros de un vector y sus indices


        int numeros[100], n;

        cout<<"Digite el numero de elementos que va a tener el arreglo: ";
        cin>>n;

        for (int i=0;i<n;i++){
            cout<<"Digite un numero: ";
            cin>>numero[i];
        }

        //Ahora mostrar los elementos con sus indices asociados

        for (int i = 0; i < n; i++)
        {
            cout<<i<<" - > "<< numeros[i]<<endl; 
        }

// Video 33 Programa que lea un vector de enteros y determine el mayor elemento del vector


        int enteros[100], n,mayor=0;

        cout<<"Digire el numero de elementos del arreglo: ";
        cin>>n;


        for (int i = 0; i < n; i++)
        {
            cout<<i+1<<". Digite un numero: "; // 1. Digite un numero
            cin>>numeros[i];

            // supongamos que el usuario digito  1 2 4 10 5 

            if(numeros[i] > mayor){ // 1>mayor=0, 2>mayor=1; 4>mayor=2..
                mayor= numeros[i]; // hasta que mayor sea 5>mayor=10? No, entonces mayor 10

            }
        }

        cout<<"\n El mayor elemento del vector es: "<<mayor<<endl;
        
        getch();


/*Video 34 Dos vectores de caracteres y luego almanecar el
 contenido de ambos en un solo vector, ubicando en primer 
 lugar los elementos del primer vector seguido del otro. 
 Mostrar el contenido del nuevo vector */ 

        char letras1[]={'a','b','c','d','e'};
        char letras2[]={'f','g','h','i','j'};
        char letras3[10];


        // letras1 a letras3
        for (int i = 0; i < 5; i++)
        {
        letras3[i]=letras1[i];
        }

        // letras2 a letras3
        for (int i = 0; i < 10; i++)
        {
        letras3[i]=letras2[i-5];
        }

        //Mostrar el nuevo vector
        for (i = 0; i < 10; i++)
        {
            cout<<letras3[i]<<endl;
        }

        getch();

    return 0;
}