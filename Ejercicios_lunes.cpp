#include <iostream>
using namespace std;

int main() {
    char letra;
    int num;

    cout << "Ingrese una letra: ";
    cin >> letra;

    // Convertimos la letra a su código ASCII
    num = letra;

    if (num >= 65 && num <= 90) { 
        // Letras mayúsculas A-Z
        if (num == 65 || num == 69 || num == 73 || num == 79 || num == 85) {
            cout << "Es una vocal mayuscula" << endl;
        } else {
            cout << "Es una consonante mayuscula" << endl;
        }
    } 
    else if (num >= 97 && num <= 122) { 
        // Letras minúsculas a-z
        if (num == 97 || num == 101 || num == 105 || num == 111 || num == 117) {
            cout << "Es una vocal minuscula" << endl;
        } else {
            cout << "Es una consonante minuscula" << endl;
        }
    } 
    else {
        cout << "No es una letra del alfabeto" << endl;
    }

    
//    CON SWITCH

    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;

    switch (letra) {
        // --- Vocales mayúsculas ---
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Es una vocal mayuscula" << endl;
            break;

        // --- Vocales minúsculas ---
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "Es una vocal minuscula" << endl;
            break;

        // --- Consonantes mayúsculas ---
        default:
            if (letra >= 'A' && letra <= 'Z') {
                cout << "Es una consonante mayuscula" << endl;
            }
            // --- Consonantes minúsculas ---
            else if (letra >= 'a' && letra <= 'z') {
                cout << "Es una consonante minuscula" << endl;
            }
            else {
                cout << "No es una letra del alfabeto" << endl;
            }
    }

    return 0;

    return 0;
}
