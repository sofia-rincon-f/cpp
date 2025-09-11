#include <iostream>

using namespace std;


int main(){


    int edad;

    cout << "Digite una edad: "; 
    cin >> edad;

    if (edad >= 5 && edad<= 18) {

        cout << "La edad corresponde a niños";
        
    }else if (edad >=19 && edad<=50){

        cout << "La edad corresponde a adulto";

    }else if (edad >=51 && edad<= 75){

        cout <<"La edad corresponde a adulto mayor";

    }else if (edad >=76 && edad<= 96 ){

        cout <<"La edad corresponde a anciano";

    }else{
        cout<<"No cumple ningun rango";
    }

//------------------------------------------------------------------------
    
int opc, num, adivinar=45;

    cout<< "  MENU  "<<endl;
    cout<< "adivine un numero de 1 a 100\n"<<endl;
    cout<<"     tiene 2 oportunidades "<<endl;


    cout << "Ingrese un numero: "; cin >> num; 


    if(num > 0 && num < 101){
        if (num == adivinar)
        {
            cout << "Adivinó el numero";
        }else if (adivinar > 0 && adivinar < 50){
            cout << "El numero esta entre 0 y 50, ingrese otro numero: "; cin >> num;
            if (num == adivinar){
                cout << "Adivino el numero";
            }else if(adivinar > 0 && adivinar < 26){
                cout << "El numero esta entre 0 y 26, ingrese otro numero: "; cin >> num;
                if (num == adivinar){
                    cout << "Adivino el numero";
                }else{
                    cout << "PERDISTE";
                }
            }else if(adivinar > 27 && adivinar < 50){
                cout << "El numero esta entre 27 y 50, ingrese otro numero: "; cin >> num;
                if (num == adivinar){
                    cout << "Adivino el numero";
                }else{
                    cout << "PERDISTE";
                }
            }
        }else if (adivinar > 51 && adivinar < 101){
            cout << "El numero esta entre 50 y 100, ingrese otro numero:"; cin >> num;
            if (num == adivinar){
                cout << "Adivino el numero";
            }else if(adivinar > 75 && adivinar < 100){
                cout << "El numero esta entre 75 y 100, ingrese otro numero: "; cin >> num;
                if (num == adivinar){
                    cout << "Adivino el numero";
                }else{
                    cout << "PERDISTE";
                }
            }else if(adivinar > 50 && adivinar < 75){
                cout << "El numero esta entre 27 y 50, ingrese otro numero: "; cin >> num;
                if (num == adivinar){
                    cout << "Adivino el numero";
                }else{
                    cout << "PERDISTE";
                }
            }
        }

    }else{
        cout << "Fuera del rango";
    }
    


    return 0;

}


 
   