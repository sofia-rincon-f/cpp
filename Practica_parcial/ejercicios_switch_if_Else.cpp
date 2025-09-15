#include <iostream>

using namespace std;

int main(){

//En el colegio, un niño ingresa un numero del 1 al 7 para saber que dıa de la semana le toca educacion fısica. Si no es valido, mostrar mensaje.
    int dia;

    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;

    switch (dia) {
        case 1: cout << "Lunes: Educacion Fisica" << endl; break;
        case 2: cout << "Martes: Educacion Fisica" << endl; break;
        case 3: cout << "Miercoles: Educacion Fisica" << endl; break;
        case 4: cout << "Jueves: Educacion Fisica" << endl; break;
        case 5: cout << "Viernes: Educacion Fisica" << endl; break;
        case 6: cout << "Sabado: Educacion Fisica" << endl; break;
        case 7: cout << "Domingo: Educacion Fisica" << endl; break;
        default: cout << "Numero invalido. Debe estar entre 1 y 7." << endl;
    }

//En el cafe internet, los clientes pueden elegir: (1) sumar, (2) restar, (3) multiplicar, (4) dividir. Validar que no se divida entre cero.


    int opcion, n, m, resultado;

    cout << "MENU\n1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n";
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    cout << "Ingrese el primer numero: "; cin >> n;
    cout << "Ingrese el segundo numero: "; cin >> m;

    switch (opcion) {
        case 1: resultado = n + m; cout << "Resultado: " << resultado << endl; break;
        case 2: resultado = n - m; cout << "Resultado: " << resultado << endl; break;
        case 3: resultado = n * m; cout << "Resultado: " << resultado << endl; break;
        case 4: 
            if (m != 0) cout << "Resultado: " << n / m << endl;
            else cout << "Error: no se puede dividir entre cero." << endl;
            break;
        default: cout << "Opcion invalida." << endl;
    }

    //El profesor pide un menu para calificaciones: (1) escala 100, (2) escala 5.0, (3) letras. Dentro de cada opcion, con if se clasifica la nota.


    int opcion;

    cout << "TIPOS DE CALIFICACION\n";
    cout << "1. Escala 100\n2. Escala 5.0\n3. Letras\n";
    cout << "Elija una opcion: ";
    cin >> opcion;

    switch (opcion) {
    case 1: { 
        int nota;
        cout << "Ingrese nota (0-100): ";
        cin >> nota;
        if (nota >= 90) cout << "Excelente\n";
        else if (nota >= 70) cout << "Aprobado\n";
        else cout << "Reprobado\n";
        break;
    }
    case 2: {
        double nota;
        cout << "Ingrese nota (0-5.0): ";
        cin >> nota;
        if (nota >= 4.5) cout << "Excelente\n";
        else if (nota >= 3.0) cout << "Aprobado\n";
        else cout << "Reprobado\n";
        break;
    }
    case 3: { 
        char nota;
        cout << "Ingrese nota (A, B, C, D, F): ";
        cin >> nota;
        if (nota == 'A') cout << "Excelente\n";
        else if (nota == 'B' || nota == 'C') cout << "Aprobado\n";
        else cout << "Reprobado\n";
        break;
    }
    default:
        cout << "Opcion invalida\n";
    }

// En la tienda, los clientes eligen conversi ́on: (1) cm a m, (2) kg a g, (3) °C a °F. Validar que el valor no sea negativo.

    int opcion;
    double valor;

    cout << "CONVERSIONES\n1. cm -> m\n2. kg -> g\n3. °C -> °F\nElija: ";
    cin >> opcion;

    cout << "Ingrese valor: ";
    cin >> valor;

    if (valor < 0) { cout << "Valor invalido\n"; return 0; }

    switch (opcion) {
        case 1: cout << valor/100 << " m\n"; break;
        case 2: cout << valor*1000 << " g\n"; break;
        case 3: cout << (valor*9/5)+32 << " °F\n"; break;
        default: cout << "Opcion invalida\n";
    }

//En una empresa de transportes: (1) bus, (2) taxi, (3) metro. Seg ́un la opci ́on, usar if--else para decidir tarifa por distancia.

    int opcion, km;
    cout << "TRANSPORTE\n1. Bus\n2. Taxi\n3. Metro\nElija: ";
    cin >> opcion;
    cout << "Ingrese distancia (km): ";
    cin >> km;

    if (km <= 0) { cout << "Distancia invalida\n"; return 0; }

    if (opcion == 1) cout << "Tarifa: " << km*500 << " pesos\n";
    else if (opcion == 2) cout << "Tarifa: " << km*1000 << " pesos\n";
    else if (opcion == 3) cout << "Tarifa: " << km*700 << " pesos\n";
    else cout << "Opcion invalida\n";
    
//Un colegio pide calcular el  ́area de figuras: (1) cuadrado, (2) rect ́angulo, (3) tri ́angulo. Validar que los datos sean positivos.

    int opcion; double a, b;
    cout << "AREAS\n1. Cuadrado\n2. Rectangulo\n3. Triangulo\nElija: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Lado: "; cin >> a;
        if (a > 0) cout << "Area = " << a*a << endl;
        else cout << "Dato invalido\n";
    }
    else if (opcion == 2) {
        cout << "Base y altura: "; cin >> a >> b;
        if (a > 0 && b > 0) cout << "Area = " << a*b << endl;
        else cout << "Datos invalidos\n";
    }
    else if (opcion == 3) {
        cout << "Base y altura: "; cin >> a >> b;
        if (a > 0 && b > 0) cout << "Area = " << (a*b)/2 << endl;
        else cout << "Datos invalidos\n";
    }
    else cout << "Opcion invalida\n";



//En un cajero autom ́atico: (1) retirar, (2) depositar, (3) consultar saldo. Validar con if--else que haya saldo suficiente.

    int opcion; double saldo = 1000, monto;
    cout << "CAJERO\n1. Retirar\n2. Depositar\n3. Consultar saldo\nElija: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Monto a retirar: "; cin >> monto;
        if (monto <= saldo && monto > 0) { saldo -= monto; cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl; }
        else cout << "Saldo insuficiente o monto invalido\n";
    }
    else if (opcion == 2) {
        cout << "Monto a depositar: "; cin >> monto;
        if (monto > 0) { saldo += monto; cout << "Deposito exitoso. Nuevo saldo: " << saldo << endl; }
        else cout << "Monto invalido\n";
    }
    else if (opcion == 3) cout << "Saldo actual: " << saldo << endl;
    else cout << "Opcion invalida\n";

//En un restaurante: (1) comida r ́apida, (2) italiana, (3) vegetariana. Segun el presupuesto ingresado, sugerir plato con if--else.

    int opcion; double presupuesto;
    cout << "MENU\n1. Comida rapida\n2. Italiana\n3. Vegetariana\nElija: ";
    cin >> opcion;
    cout << "Ingrese su presupuesto: ";
    cin >> presupuesto;

    if (opcion == 1) {
        if (presupuesto >= 15000) cout << "Hamburguesa\n";
        else cout << "Perro caliente\n";
    }
    else if (opcion == 2) {
        if (presupuesto >= 20000) cout << "Pasta carbonara\n";
        else cout << "Pizza margarita\n";
    }
    else if (opcion == 3) {
        if (presupuesto >= 12000) cout << "Ensalada gourmet\n";
        else cout << "Wrap vegetariano\n";
    }
    else cout << "Opcion invalida\n";


//En el laboratorio de ciencias: (1) potencia, (2) ra ́ız cuadrada, (3) logaritmo. Validar condiciones matem ́aticas con if--else.

    int opcion; double x;
    cout << "OPERACIONES\n1. Potencia (x^2)\n2. Raiz cuadrada\n3. Logaritmo\nElija: ";
    cin >> opcion;
    cout << "Ingrese numero: ";
    cin >> x;

    if (opcion == 1) cout << pow(x,2) << endl;
    else if (opcion == 2) {
        if (x >= 0) cout << sqrt(x) << endl;
        else cout << "No existe raiz de negativo\n";
    }
    else if (opcion == 3) {
        if (x > 0) cout << log(x) << endl;
        else cout << "Logaritmo no definido\n";
    }
    else cout << "Opcion invalida\n";


//En la universidad, un profesor pide un simulador: materias (1) Matem ́aticas, (2) Programaci ́on, (3) F ́ısica). Clasificar la nota con rangos de if--else.

    int opcion, nota;
    cout << "MATERIAS\n1. Matematicas\n2. Programacion\n3. Fisica\nElija: ";
    cin >> opcion;
    cout << "Ingrese nota (0-100): ";
    cin >> nota;

    if (nota < 0 || nota > 100) { cout << "Nota invalida\n"; return 0; }

    if (nota >= 90) cout << "Excelente\n";
    else if (nota >= 70) cout << "Aprobado\n";
    else cout << "Reprobado\n";

    return 0;

}