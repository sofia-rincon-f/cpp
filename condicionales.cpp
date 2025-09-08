<<<<<<< HEAD
#include <iostream>


using namespace std;

int main(){

// Video 11 CONDICIONAL SIMPLE Y DOBLE if

    int numero, dato = 5;

    cout << "Digite un numero: ";
    cin>>numero;

    if(numero ==dato){ // != diferente  == igual
        cout << "El numero es 5";
    }
    else{
        cout << "El numero es diferente de 5";
    }


// Video 12 CONDICIONALES MULTIPLES Switch

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
    

// Video 13 Ejercicio 1

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


// Video 14 Ejercicio 2

    int n;

    cout<<"Digite un numero"; cin>>n;


    if (n==0){
        cout<<"El numero es cero"
    } else if (n%2==0){
        cout<<"Es un numero par";

    } else {
        cout<<"Es un numero impar";
    }


// Video 15 Ejercicio 3

    char letra;

    cout << "Digite un caracter; ";
    cin >> letra;


    switch (letra)
    {
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': cout << "Es una vocal minuscula"; // Sin break el comprobara las cinco vocales
        break;
    default: cout << "No es una vocal minuscula";
        break;
    }


// Video 16 Ejercicio 4

    int edad;

    cout<<"Digite su edad: ";
    cin>>edad;

    //Rango 18 a 25

    if ((edad>=18) && (edad<=25)){
        cout<<"Su edad está en el rango de 18 a 25"
    } else {
        cout<<"Su edad no está en dicho rango"
    }

// Video 17 Ejercicio 5 Numero a romanos

    int num, unidades, decenas, centenas, millar;

    cout << "Digite un numero: ";
    cin>>num; 

    // Dividir numero=2152 ->2000+100+50+2

    unidades = num%10; num /= 10; // unidades = 2, numero 215
    decenas = num%10; numero /=10; //decenas=5, numero 21
    centenas = num%10; numero /= 10;
    millar = numero%10; numero /10;


    switch (millar)
    {
    case 1: cout << "M"; break;
    case 2: cout << "MM"; break;
    case 3: cout << "MMM"; break;
    }

    switch (centenas)
    {
    case 1: cout << "C"; break;
    case 2: cout << "CC"; break;
    case 3: cout << "CCC"; break;
    case 4: cout << "CD"; break;
    case 5: cout << "D"; break;
    case 6: cout << "DC"; break;
    case 7: cout << "DCC"; break;
    case 8: cout << "DCCC"; break;
    case 9: cout << "CM"; break;
    }

    switch (decenas)
    {
    case 1: cout << "X"; break;
    case 2: cout << "XX"; break;
    case 3: cout << "XXX"; break;
    case 4: cout << "XL"; break;
    case 5: cout << "L"; break;
    case 6: cout << "LX"; break;
    case 7: cout << "LXX"; break;
    case 8: cout << "LXXX"; break;
    case 9: cout << "XC"; break;
    }

    
    switch (unidades)
    {
    case 1: cout << "I"; break;
    case 2: cout << "II"; break;
    case 3: cout << "III"; break;
    case 4: cout << "IV"; break;
    case 5: cout << "V"; break;
    case 6: cout << "VI"; break;
    case 7: cout << "VII"; break;
    case 8: cout << "VIII"; break;
    case 9: cout << "IX"; break;
    }



// Video 18 Ejercicio 6

// Video 11 CONDICIONAL SIMPLE Y DOBLE if

    int numero, dato = 5;

    cout << "Digite un numero: ";
    cin>>numero;

    if(numero ==dato){ // != diferente  == igual
        cout << "El numero es 5";
    }
    else{
        cout << "El numero es diferente de 5";
    }


// Video 12 CONDICIONALES MULTIPLES Switch

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
    

// Video 13 Ejercicio 1

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


// Video 14 Ejercicio 2

    int n;

    cout<<"Digite un numero"; cin>>n;


    if (n==0){
        cout<<"El numero es cero"
    } else if (n%2==0){
        cout<<"Es un numero par";

    } else {
        cout<<"Es un numero impar";
    }


// Video 15 Ejercicio 3

    char letra;

    cout << "Digite un caracter; ";
    cin >> letra;


    switch (letra)
    {
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u': cout << "Es una vocal minuscula"; // Sin break el comprobara las cinco vocales
        break;
    default: cout << "No es una vocal minuscula";
        break;
    }


// Video 16 Ejercicio 4

    int edad;
	
	cout<<"Digite su edad: "; 
	cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		cout<<"Su edad esta en el rango de [18-25]";
	}
	else{
		cout<<"Su edad esta fuera de rango";
	}

// Video 17 Ejercicio 5

    int numero,unidades,decenas,centenas,millar; 
	
	cout<<"Digite un numero: "; 
	cin>>numero; 
	//2152
	unidades = numero%10; numero /= 10; //unidades = 2 , numero = 215
	decenas = numero%10; numero /= 10; //decenas = 5 , numero = 21
	centenas = numero % 10; numero /= 10; //centenas = 1 , numero = 2
	millar = numero % 10 ; numero /= 10; //millar = 2 , numero = 0
	//2000+100+50+2 = 2152
	
	switch(millar){
		case 1: cout<<"M";break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM";break;
	}
	
	switch(centenas){
		case 1: cout<<"C";break;
		case 2: cout<<"CC";break;
		case 3: cout<<"CCC";break;
		case 4: cout<<"CD";break;
		case 5: cout<<"D";break;
		case 6: cout<<"DC";break;
		case 7: cout<<"DCC";break;
		case 8: cout<<"DCCC";break;
		case 9: cout<<"CM";break;
	}
	
	switch(decenas){
		case 1: cout<<"X";break;
		case 2: cout<<"XX";break;
		case 3: cout<<"XXX";break;
		case 4: cout<<"XL";break;
		case 5: cout<<"L";break;
		case 6: cout<<"LX";break;
		case 7: cout<<"LXX";break;
		case 8: cout<<"LXXX";break;
		case 9: cout<<"XC";break;
	}
	
	switch(unidades){
		case 1: cout<<"I";break;
		case 2: cout<<"II";break;
		case 3: cout<<"III";break;
		case 4: cout<<"IV";break;
		case 5: cout<<"V";break;
		case 6: cout<<"VI";break;
		case 7: cout<<"VII";break;
		case 8: cout<<"VIII";break;
		case 9: cout<<"IX";break;
	}

// Video 18 Ejercicio 6


    int saldo_inicial=1000,opc;
    float extra, saldo=0, retiro;

    cout<<"\tBienvenido a su Cajero Virtual"<<endl;
    cout<<"1. Ingresar dinero en cuenta";<<endl;
    cout<<"2. Retirar dinero de la cuenta";<<endl;
    cout<<"3. Salir";<<endl;
    cout<<"Opción: ";
    cin>>opc;


    switch (opc)
    {
    case 1: 
        cout<<"Digite la cantidad de dinero a ingresar";
        cin>>extra;
        saldo = saldo_inicial + extra;
        cout<<"Dinero en cuenta: " <<saldo; break;
    case 2:
        cout<<"Digite la cantidad de dinero que va a retirar: ";
        cin >> retiro;

        if (retiro > saldo_inicial){
            cout << "No tiene esa cantidad";
        }else{
            saldo= saldo_inicial - retiro;
            cout <<"Dinero en Cuenta: "<<saldo;
        }
    case 3: break;
        break;
    default:
        break;
    }

return 0;

}