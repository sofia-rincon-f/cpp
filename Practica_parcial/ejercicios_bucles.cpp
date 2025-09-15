#include <iostream>
using namespace std;

int main() {
    // Imprimir con for los n ́umeros del 1 al 10 para el control de asientos en el bus escolar.
    cout << "Asientos del bus (1-10):\n";
    for (int i = 1; i <= 10; i++) cout << i << " ";
    cout << "\n\n";

    // Imprimir con while los n ́umeros del 10 al 1 para simular una cuenta regresiva de fuegos pirot ́ecnicos.
    cout << "Cuenta regresiva de fuegos:\n";
    int j = 10;
    while (j >= 1) { cout << j << " "; j--; }
    cout << "\n\n";

    // Mostrar con for la tabla de multiplicar de un n ́umero, como si fuera la caja registradora de la tienda.
    int num;
    cout << "Tabla de multiplicar (ingrese numero): ";
    cin >> num;
    for (int i = 1; i <= 10; i++) cout << num << " x " << i << " = " << num*i << endl;
    cout << "\n";

    // Calcular con for la suma de 1 a 100 como ejercicio de matem ́aticas en clase.
    int suma = 0;
    for (int i = 1; i <= 100; i++) suma += i;
    cout << "Suma de 1 a 100 = " << suma << "\n\n";

    // Leer n ́umeros y sumarlos hasta ingresar 0 con while, como si fueran compras acumuladas en una factura.
    int x, total = 0;
    cout << "Compras acumuladas (0 para terminar):\n";
    cin >> x;
    while (x != 0) { total += x; cin >> x; }
    cout << "Total compras = " << total << "\n\n";

    // Calcular promedio de notas con do while hasta que se ingrese una nota negativa, como en el sistema acad ́emico.
    double nota, sumaNotas = 0; int cont = 0;
    do {
        cout << "Ingrese nota (negativa para salir): ";
        cin >> nota;
        if (nota >= 0) { sumaNotas += nota; cont++; }
    } while (nota >= 0);
    if (cont > 0) cout << "Promedio = " << sumaNotas/cont << "\n\n";

    // Imprimir con for todos los n ́umeros pares entre 1 y 50, para repartir sillas en un evento.
    cout << "Numeros pares (1-50):\n";
    for (int i = 2; i <= 50; i+=2) cout << i << " ";
    cout << "\n\n";

    // Calcular factorial de un n ́umero con while, como simulaci ́on de combinaciones en laboratorio.
    int n, fact = 1;
    cout << "Ingrese numero para factorial: ";
    cin >> n;
    int k = 1;
    while (k <= n) { fact *= k; k++; }
    cout << "Factorial = " << fact << "\n\n";

    // Contar cu ́antos d ́ıgitos tiene un n ́umero con do while, como si fuera la longitud de un c ́odigo de barras.
    int numCod, digitos = 0;
    cout << "Ingrese numero (codigo de barras): ";
    cin >> numCod;
    do { numCod /= 10; digitos++; } while (numCod > 0);
    cout << "Cantidad de digitos = " << digitos << "\n\n";

    // Leer N n ́umeros y mostrar el mayor con while, como si fueran puntajes en un concurso.
    int cant, valor, mayor;
    cout << "Cuantos puntajes ingresara?: ";
    cin >> cant;
    cin >> mayor;
    int c = 1;
    while (c < cant) { cin >> valor; if (valor > mayor) mayor = valor; c++; }
    cout << "Mayor puntaje = " << mayor << "\n\n";

    
    //Imprimir primeros N t ́erminos de Fibonacci con for, para un experimento de biologıa.
    int N, a=0, b=1;
    cout << "Ingrese N para Fibonacci: ";
    cin >> N;
    cout << "Fibonacci: ";
    for (int i=1; i<=N; i++) {
        cout << a << " ";
        int aux = a+b; a=b; b=aux;
    }
    cout << "\n\n";

    // Verificar si un n ́umero es primo con while, para pruebas en criptograf ́ıa.
    int p, div=2; bool esPrimo=true;
    cout << "Ingrese numero para verificar primo: ";
    cin >> p;
    while (div <= p/2 && esPrimo) {
        if (p % div == 0) esPrimo=false;
        div++;
    }
    if (p <= 1) esPrimo=false;
    cout << (esPrimo ? "Es primo\n\n" : "No es primo\n\n");

    // Invertir un n ́umero con do while (ejemplo 123 → 321), como si fuera un n ́umero de serie le ́ıdo al rev ́es.
    int numInv, invertido=0;
    cout << "Ingrese numero para invertir: ";
    cin >> numInv;
    do {
        invertido = invertido*10 + numInv%10;
        numInv /= 10;
    } while (numInv > 0);
    cout << "Numero invertido = " << invertido << "\n\n";

    // Dibujar pir ́amide de asteriscos con for, como simulaci ́on de escaleras en arquitectura.
    int filas;
    cout << "Ingrese altura de piramide: ";
    cin >> filas;
    for (int i=1; i<=filas; i++) {
        for (int e=1; e<=filas-i; e++) cout << " ";
        for (int a=1; a<=2*i-1; a++) cout << "*";
        cout << "\n";
    }
    cout << "\n";

    // Construir un men ́u interactivo con do while (sumar, restar, multiplicar, salir), simulando una calculadora de mostrador.
    int op; double n1, n2;
    do {
        cout << "CALCULADORA\n1. Sumar\n2. Restar\n3. Multiplicar\n4. Salir\nElija: ";
        cin >> op;
        if (op>=1 && op<=3) {
            cout << "Ingrese dos numeros: "; cin >> n1 >> n2;
            if (op==1) cout << "Resultado = " << n1+n2 << endl;
            else if (op==2) cout << "Resultado = " << n1-n2 << endl;
            else if (op==3) cout << "Resultado = " << n1*n2 << endl;
        }
    } while (op != 4);

    return 0;
}