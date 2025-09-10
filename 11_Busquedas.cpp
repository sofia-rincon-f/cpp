#include <iostream>

using namespace std;


int main(){


// Video 53 Busqueda Secuencial 

    //Busca secuencialmente un dato que yo quiera saber si está

    int a[] = {3,4,2,1,5};
    int b[] = {'a','e','i','o','u'};
    int i, dato;
    char band = 'F';

    //Busqueda
    dato='o'; // dato=4 
    i=0;

    while ((band=='F') && (i<5))
    {
        if (a[i] == dato) // a sub 0 es igual al dato?
        {
            band = 'V'; // No
        }
        i++; // Aumenta uno más y así sucesivamente 
    }

    if(band == 'F'){
        cout<<"El numero a buscar no existe en el arreglo";
    }else if(band == 'V'){
        cout<<"El numero a sido encontrado en la pisición: "<<i-1<<endl;
    }
    



// Videp 54 Busqueda Binaria 

    return 0;
}