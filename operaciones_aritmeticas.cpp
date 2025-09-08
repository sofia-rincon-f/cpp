#include <iostream>

using namespace std;

int main(){

    // 1 Operaciones aritmeticas
    
    int n1, n2, suma = 0, resta = 0, multiplicacion=0, division=0;

    cout << "Digite el primer numero: "; cin>>n1;
    cout << "Digite el segundo numero "; cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    cout << "\n La suma es: "<<suma<<endl;
    cout << "\n La resta es: "<<resta<<endl;
    cout << "\n La multiplicacion es: "<<multiplicacion<<endl;
    cout << "\n La division es: "<<division<<endl;

    return 0;
}