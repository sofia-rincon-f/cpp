#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//Video 55 Estructuras 

    //En las estructuras podemos tener distintos datos

    struct coleccionCD
    {
        char titulo[30];
        char artista[25];
        int numCanciones;
        float precio;
        char fecha_compra[20];
    }; CD1, CD2, CD3; /*forma 1 declarar variables, 
    las cuales contienen los campos de la estructura*/ 


int main(){

    struct coleccionCD CD1, CD2, CD3; // forma 2 declarar variables
    

    return 0;
}


// Video 56  Estructura basica ----------------------------

struct Persona
{
    char nombre[20];
    int edad;
}

persona1={"Alejandro",20};
persona2={"Ruperto",15};
    
int main(){
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;

    cout<<"Nombre2: "<<persona2.nombre<<endl;
    cout<<"Edad2: "<<persona2.edad<<endl;

    getch();
}

// Si no conozco los datos de la persona
struct Personas
{
    char nombre[20];
    int edad;
}persona1;

int main(){
    cout<<"Nombre: ";
    cin.getline(persona1.nombre,20,'\n');
    cout<<"Edad: "; cin>>persona1.edad;
}


// Video 57 y 58 Estructuras anidadas

    /*Es una estructura dentro de esta*/

struct  info_direccion{
    char direccion[30];
    char ciudad [20];
    char provincia [20];
}

struct empleado
{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
    
};

int main(){

    for(int i=0; i<2;i++){

        fflush(stdin); //Vaciar el buffer y permitir digitar los valores

        cout<<"Digite su nombre: ";
        cin.getline(empleado[i].nombre, 20, '\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
        cout<<"Ciudad: ";
        cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
        cout<<"Provincia: ";
        cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
        cout<<"Salario: ";
        cin>>empleado[i].salario;
        cout<<"\n";
        
    }

    //Imprimir datos

    for (int i = 0; i < 2; i++)
    {
        cout<<"Nombre: "<<empleado[i].nombre<<endl;
        cout<<"Direccion: "<<empleado[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleado[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleado[i].salario<<endl;
        cout<<"\n";
    }

    getch();
    return;
}


// video 59 estructura llamada corredor, pedir datos, asignar a una categoria

struct Corredor{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}c1;

int main(){

    char categoria[20];

    cout<<"Nombre: ";
    cin.getline(c1.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>c1.edad;
    cout<<"Sexo: ";
    cin.getline(c1.sexo, 10, '\n');
    cout<<"Club: ";
    cin.getline(c1.club,20,'\n');

    if ()

    getch();
}

// video 60

// video 61 

// video 62

// video 63

