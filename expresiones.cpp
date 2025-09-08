<<<<<<< HEAD
#include <iostream>
#include<math.h>

using namespace std;

int main(){

    // Video 6 Ejercicio 1

    float a, b, resultado=0;

    cout<<"Digite el valor de a: "; cin >>a;
    cout<<"Digite el valor de b: "; cin >>b;

    resultado = (a / b) + 1; 

    cout.precision(2); // Para que los decimales se reduzcan

    cout<< "El resultado es: "<<resultado<<endl; 

    // Video 7 Ejercicio 2

    float d, e, f, g, h, i, resultado2=0;

    cout<<"d: "; cin >> d;
    cout<<"e: "; cin >> e;
    cout<<"f: "; cin >> f;
    cout<<"g: "; cin >> g;
    cout<<"h: "; cin >> h;
    cout<<"i: "; cin >> i;

    resultado2 = (d+(e/f))/(g+(h/i));

    cout << "El resultado es: " << resultado2<< endl;

    // Video 8 Ejercicio 3

    int x, y, aux;

    cout << "Digite el valor de x: "; cin >> x;
    cout << "Digite el valor de y: "; cin >> y;

    aux = x; 
    x = y; 
    y = aux;

    cout << "El nuevo valor de x es: " << x<<endl;
    cout << "El nuevo valor de y es: " << y << endl;

    // Video 9 Ejercicio 4 

    float practica, teorica, participacion, nota_final=0;


    cout << "Ingrese la nota de practica: "; cin >> practica; 
    cout << "Ingrese la nota de teorica: "; cin >> teorica;
    cout << "Ingrese la nota de participacion: "; cin >> participacion;
    
    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10; 

    nota_final = practica + teorica + participacion;

    cout << "La nota final es :" << nota_final << endl;

    // Video 10 Ejercicio 5

    float x, y, resultado=0;

    cout << "Ingrese un valor de x: "; cin >> x;
    cout << "Ingrese un valor de y: "; cin >> y;

    resultado = (sqrt(x))/(pow(y,2)-1);

    cout << "El resultado es: " << resultado <<endl;
    
    return 0;
=======
#include <iostream>
#include<math.h>

using namespace std;

int main(){

    // Video 6 Ejercicio 1

    float a, b, resultado=0;

    cout<<"Digite el valor de a: "; cin >>a;
    cout<<"Digite el valor de b: "; cin >>b;

    resultado = (a / b) + 1; 

    cout.precision(2); // Para que los decimales se reduzcan

    cout<< "El resultado es: "<<resultado<<endl; 

    // Video 7 Ejercicio 2

    float d, e, f, g, h, i, resultado2=0;

    cout<<"d: "; cin >> d;
    cout<<"e: "; cin >> e;
    cout<<"f: "; cin >> f;
    cout<<"g: "; cin >> g;
    cout<<"h: "; cin >> h;
    cout<<"i: "; cin >> i;

    resultado2 = (d+(e/f))/(g+(h/i));

    cout << "El resultado es: " << resultado2<< endl;

    // Video 8 Ejercicio 3

    int x, y, aux;

    cout << "Digite el valor de x: "; cin >> x;
    cout << "Digite el valor de y: "; cin >> y;

    aux = x; 
    x = y; 
    y = aux;

    cout << "El nuevo valor de x es: " << x<<endl;
    cout << "El nuevo valor de y es: " << y << endl;

    // Video 9 Ejercicio 4 

    float practica, teorica, participacion, nota_final=0;


    cout << "Ingrese la nota de practica: "; cin >> practica; 
    cout << "Ingrese la nota de teorica: "; cin >> teorica;
    cout << "Ingrese la nota de participacion: "; cin >> participacion;
    
    practica *= 0.30;
    teorica *= 0.60;
    participacion *= 0.10; 

    nota_final = practica + teorica + participacion;

    cout << "La nota final es :" << nota_final << endl;

    // Video 10 Ejercicio 5

    float x, y, resultado=0;

    cout << "Ingrese un valor de x: "; cin >> x;
    cout << "Ingrese un valor de y: "; cin >> y;

    resultado = (sqrt(x))/(pow(y,2)-1);

    cout << "El resultado es: " << resultado <<endl;
    
    return 0;
>>>>>>> 64c44174f032b5cd7961a7b1e50ec52c6405e6f8
}