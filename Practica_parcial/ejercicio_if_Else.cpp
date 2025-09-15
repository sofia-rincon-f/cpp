#include <iostream>

using namespace std;

int main(){

//Don Jose, tendero de barrio, quiere que un programa le diga si el numero de boletas vendidas es positivo o negativo.

int boletas;

    cout << "Ingrese el numero de boletas vendidas: ";
    cin >> boletas;

    if (boletas > 0) {
        cout << "El numero de boletas es positivo." << endl;
    } 
    else if (boletas < 0) {
        cout << "El numero de boletas es negativo." << endl;
    } 
    else {
        cout << "No se vendieron boletas." << endl;
    }

    

//Una señora en la registraduria pregunta la edad: ¿el cliente es mayor o menor de edad?

    int edad;

    cout<<"Ingrese la edad del cliente:"; cin >> edad;

    if (edad >= 18)
    {
        cout<<"El cliente es mayor de edad"<<endl;
    }else{
        cout<<"El cliente es menor de edad"<<endl;
    }

//En el paradero de bus, se necesita saber si la cantidad de pasajeros es par o impar.

    int cantidad;

    cout<<"Ingrese la cantidad de pasajeros hoy"; cin >> cantidad;

    if (cantidad %2 == 0)
    {
        cout<<"La cantidad de pasajeros es par"<<endl;
    }else{
        cout<<"La cantidad de pasajeros es impar"<<endl;
    }

//En una universidad de Pereira, si la nota de un examen (0–100) es menor de 60, el estudiante reprueba; de lo contrario aprueba.
    
    int nota;

    cout << "Ingrese la nota del estudiante"; cin >> nota;

    if (nota < 0 || nota > 100)
    {
        cout<<"El valor ingresado no es valido, ingrese otro"<<endl;
        cin>>nota;
    }
    else if (nota < 60)
    {
        cout<<"El estudiante reprobó la materia"<<endl;
    }else{
        cout<<"El estudiante aprobó la materia"<<endl;
    }


//Un colegio quiere un programa que indique si el numero de la fila de pupitres es multiplo de 3, de 5, de ambos o de ninguno.  

    int filas;

    cout << "Ingrese numero de filas de pupitre"; cin >>filas;

    if (filas % 3 == 0 && filas % 5 ==0)
    {
        cout << "El numero de filas es multiplo de 3 y 5"<<endl;
    }else if(filas % 3 == 0){
        cout << "El numero de filas es multiplo de 3"<<endl;
    }else if(filas % 5 == 0){
        cout << "El numero de filas es multiplo de 5"<<endl;
    }else{
        cout<<"El numero de filas no es multiplo de ninguno"<<endl;
    }
    
// En un partido de microfutbol, el  ́arbitro quiere saber quien tiene mas goles: equipo A o equipo B, o si estan empatados.

    int g_A, g_B;

    cout << "Ingrese numero de goles del equipo A"; cin >> g_A;
    cout << "Ingrese numero de goles del equipo B"; cin >> g_B;

    if (g_A == g_B)
    {
        cout << "Los equipos están empatados"<<endl;
    }else if(g_A > g_B){
        cout << "El equipo A tiene más goles"<<endl;
    }else{
        cout << "El equipo B tiene más goles"<<endl;
    }

// El hospital clasifica a los pacientes: niño (0–12), adolescente (13–17), adulto (18–64), adulto mayor (65+).

    int edad;

    cout << "Digite la edad del paciente: "; 
    cin >> edad;

    if (edad >= 0 && edad<= 12) {

        cout << "La edad corresponde a niños"<<endl;
        
    }else if (edad >=13 && edad<=17){

        cout << "La edad corresponde a adolescente"<<endl;

    }else if (edad >=18 && edad<= 64){

        cout <<"La edad corresponde a adulto"<<endl;

    }else if (edad >=65){

        cout <<"La edad corresponde a adulto mayor"<<endl;

    }else{
        cout<<"No cumple ningun rango"<<endl;
    }



// En la emisora local, quieren saber el signo zodiacal de una persona a partir de su fecha de nacimiento.


    int dia, mes;

    cout << "Ingrese el dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese el mes de nacimiento (1-12): ";
    cin >> mes;


    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
        cout << "Su signo zodiacal es Aries" << endl;
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
        cout << "Su signo zodiacal es Tauro" << endl;
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        cout << "Su signo zodiacal es Geminis" << endl;
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
        cout << "Su signo zodiacal es Cancer" << endl;
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
        cout << "Su signo zodiacal es Leo" << endl;
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        cout << "Su signo zodiacal es Virgo" << endl;
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        cout << "Su signo zodiacal es Libra" << endl;
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        cout << "Su signo zodiacal es Escorpio" << endl;
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        cout << "Su signo zodiacal es Sagitario" << endl;
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
        cout << "Su signo zodiacal es Capricornio" << endl;
    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
        cout << "Su signo zodiacal es Acuario" << endl;
    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
        cout << "Su signo zodiacal es Piscis" << endl;
    else
        signo = "Fecha invalida";

    
//En la feria de tecnologıa, tres estudiantes presentan proyectos; el jurado necesita un programa que muestre cu ́al tiene mayor puntaje.


    int p_pro1, p_pro2, p_pro3;

    cout << "Ingrese el puntaje del proyecto 1: "; cin >> p_pro1;
    cout << "Ingrese el puntaje del proyecto 2: "; cin >> p_pro2;
    cout << "Ingrese el puntaje del proyecto 3: "; cin >> p_pro3;

    if (p_pro1 == p_pro2 && p_pro2 == p_pro3) {
        cout << "Los tres proyectos estan empatados." << endl;
    }
    else if (p_pro1 >= p_pro2 && p_pro1 >= p_pro3) {
        if (p_pro1 == p_pro2) {
            cout << "El proyecto 1 y el proyecto 2 tienen el mayor puntaje." << endl;
        } else if (p_pro1 == p_pro3) {
            cout << "El proyecto 1 y el proyecto 3 tienen el mayor puntaje." << endl;
        } else {
            cout << "El proyecto 1 tiene el mayor puntaje." << endl;
        }
    }
    else if (p_pro2 >= p_pro1 && p_pro2 >= p_pro3) {
        if (p_pro2 == p_pro3) {
            cout << "El proyecto 2 y el proyecto 3 tienen el mayor puntaje." << endl;
        } else {
            cout << "El proyecto 2 tiene el mayor puntaje." << endl;
        }
    }
    else {
        cout << "El proyecto 3 tiene el mayor puntaje." << endl;
    }
    

// La alcaldıa consulta si un año es bisiesto para calcular el calendario escolar.

    int año;

    cout << "Ingrese un año: ";
    cin >> año;

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        cout << "El año es bisiesto." << endl;
    } else {
        cout << "El año no es bisiesto." << endl;
    }

    return 0;
}