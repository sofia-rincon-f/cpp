#include <iostream>
#include <conio.h> // Es para que el ejecutable no se cierra automaticamente
#include <stdlib.h> // Similar al anterior


using namespace std;

int main(){


// Video 19 Sentencia while (primero piensa, luego actua)

    int i, j;

    i=1;


    while (i<=10)
    {
        cout << i << endl;
        i++; //Aumenta el iterador
    }


    j=10;

    while (j>=1)
    {
        cout << j << endl;
        j--; // Decrementa el iterador
    }


// Video 20 do while (primero actua, luego piensa)
    

    int k;

    k=1;

    do {
        cout<<i<<endl;
        i++
    }while(i<=10);


    system("pause"); //Libreria stdlib.h


// Video 21 sentencia for 

    //Permite inicializar la variable dentro

    for (int e = 1; e <=10; e++)
    {
        cout<<e<<endl;
    }

    getch(); // getch de libreria conio.h no cierra el ejecutable
    

// Video 22 Ejercicio 1 Tabla multiplicar 

    int n;

    do
    {
        cout<<"Digite un numero del 1 al 10: "; cin>>numero;
    } while ((n<1) || (numero>10));

    for (int i =1;i<=20;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }

// Video 23 Suma de los primeros 10 cuadrados 

    int suma = 0, cuadrado;

    for (int i = 0; i<=10;i++){
        cuadrado = i * i;
        suma += cuadrado; 
    }

    cout<<"El resultado de la suma es: "<<suma<<endl;

    getch();

// Video 24 Suma de los numeros mayores a 0 introducidos, en un determinado rango y distinto a 0


    int nums, suma=0;

    do
    {
        cout<<"Digite un numero: "; cin >> numero;

        if(numero>0){
            suma += numero;
        }

    } while ((numero<20) || (numero>30) && (numero !=0));
    

    cout << "\n la suma es: "<<suma<<endl;


// Video 25 Sumatoria de n numeros 

    int n, suma;

    cout<<"Digite un numero: "; cin>>n;

    for (i=1; i<=n; i++){
        suma += i; //1+2 3+4
    }


    cout<<"La suma resultante es: "<<suma<<endl;

    getch(); 

// Video 26 Factorial 


    int nm, factorial=1;

    cout<<"Digite un numero: "; cin>>nm;


    for (i = 1; i <= nm; i++)
    {
        factorial = factorial * i;
    }
    

// Video 27 

// Video 28

// Video 29
    

    

    return 0;
}