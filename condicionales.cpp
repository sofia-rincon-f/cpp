#include <iostream>


using namespace std;

int main(){

// CONDICIONAL SIMPLE Y DOBLE if

    int numero, dato = 5;

    cout << "Digite un numero: ";
    cin>>numero;

    if(numero ==dato){ // != diferente  == igual
        cout << "El numero es 5";
    }
    else{
        cout << "El numero es diferente de 5";
    }


//CONDICIONALES MULTIPLES Switch

    int numero;

    cout << "Digite un numero entre 1-5";
    cin>>numero;

    switch (numero)
    {
    case 1: cout << "Es el numero 1"; break;
    case 2: cout << "Es el numero 2"; break;
    case 3: cout << "Es el numero 3"; break;
    case 4: cout << "Es el numero 4"; break;
    case 5: cout << "Es el numero 5"; break;

    default: cout<< "No esta en el rango de numeros";break; //el break sale del switch 


        break;
    }
    

// Ejercicio 1

    int numero1, numero2;

    cout<<"Digite dos numeros"; 
    cin>>numero1>>numero2; // Reducir espacio

    if (numero1==numero2){
        cout<< "Ambos numeros son iguales";
    } else if (numero1>numero2){
            cout << "El mayor es el numero "<<numero1;
        }else{
            cout << "El mayor es el numero "<<numero2;
        }


// Ejercicio 2


    int n;

    cout<<"Digite un numero"; cin>>n;


    if (n==0){
        cout<<"El numero es cero"
    } else if (n%2==0){
        cout<<"Es un numero par";

    } else {
        cout<<"Es un numero impar";
    }

    
    




return 0;

}