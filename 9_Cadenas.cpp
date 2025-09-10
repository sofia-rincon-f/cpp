#include <iostream>
#include <conio.h>
#include <string.h> // Libreria para caracteres
#include <stdlib.h> // convertir cadena a numero

using namespace std;

int main(){

// Video 40 La cadena de caracteres es un arreglo de caracteres

    char palara[] = "Alejandro";
    char palabra2[] = {'A','l','e','j','a','n','d','r','o'};

    cout<<palara<<endl;
    cout<<palabra2<<endl;

    char nombre[20];

    cout<<"Digite su nombre: "; 
    cin.getline(nombre,20,'\n')
    //          matriz, espacio, salto de linea (para terminar)


// Video 41 Longitud de una cadena con Funcion strlen()

    char cadena[] = "hola";
    int longitud = 0;

    longitud = strlen(cadena);

    cout<<"El numero de elementos de la cadena es: "<<longitud<<endl;


// Video 42 Copiar el contenido de una cadena a otra - Funcion strcpy()

    char nombre[] = "Alejandro";
    char nombre2[20];

    strcpy(nombre2,nombre);
    //(cadena vacia, cadena con contenido)

    cout<<nombre2<<endl;

// Video 43 Comparar cadenas - Funcion strcmp()


    char comparacion[] = "Hola";
    char comparacion2[] = "hola";

    if(strcmp(comparacion,comparacion2)==0){
        cout<<"Ambas cadenas son iguales";
    }else{
        cout<<"No son iguales";
    }

    // No solo compara si son iguales, tambien compara el orden alfabetico


// Video 44  añadir o concatenar - Funcion strcat()

    char cad1[] = "Esto es ";
    char cad2[] = "brasil";
    char cad3[30];

    strcpy(cad3, cad1); // cad3 = "Esto es "

    strcat(cad3,cad2); // cad3 = "Esto es brasil"

    cout<<cad3<<endl;


// Video 45 Invertir una cadena - Funcion strrev

    char invertir[] = "señor";

    strrev(invertir);

    cout<<cad<<endl;

// Video 46 Pasar una palabra a Mayuscula - Funcion strupr()

    char palabra[] = "convertir a mayuscula";

    strupr(palabra);

    cout<<palabra<<endl;

// Video 47 Pasar una palabra a minuscula - Funcion strlwr()

    char palabra[] = "convertir a minuscula";

    strlwr(palabra);

    cout<<palabra<<endl;

    
/* Video 48 Transformar una cadena a numeros - libreria stdlib.h
Funciones atoi() y atof()

"123" -> 123 (atoi enteros y atof flotantes)

*/
    char cadena[] = "28";
    int numero;

    numero = atoi(cadena);

    cout<<numero<<endl;



/* Video 49 Realice un programa que lea una cadena y muestre
 cuantas ocurrencias de vocal exiten en la cadena*/ 

    char frase[30];
    int vocal_a=0, vocal_e=0, vocal_i=0,vocal_o=0,vocal_u=0;

    cout<<"Digite una frase: ";
    cin.getline(frase, 30,'\n');

    for(int i=0;i<30;i++){
        switch (frase[i])
        {
        case 'a': vocal_a++; break;
        case 'e': vocal_e++; break;
        case 'i': vocal_i++; break;
        case 'o': vocal_o++; break;
        case 'u': vocal_u++; break;
        }
    }

    cout<<"Vocal a: "<<vocal_a<<endl;
    cout<<"Vocal e: "<<vocal_e<<endl;
    cout<<"Vocal i: "<<vocal_i<<endl;
    cout<<"Vocal o: "<<vocal_o<<endl;
    cout<<"Vocal u: "<<vocal_u<<endl;

    getch();

    return 0;
}