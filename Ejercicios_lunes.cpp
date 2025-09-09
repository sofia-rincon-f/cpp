#include <iostream>


using namespace std;

int main(){

    int num;
    char letra;


    cbegin <<"Ingrese una letra"<<endl;

    if (num>=65 && num <= 90){
        cout<<"Es una mayuscula";

    }else if(num <=97 && num<=122){
        cout<<"Es una minuscula";
    } else if (num == 65 || num == 69 || num == 73 || num == 79 || num == 85){
        cout<<"Es una vocal mayuscula";

    }else if(num == 97 || num == 101 || num == 105 || num == 111 || num == 117){
        cout<<"Es una vocal minuscula";
    }else{
        cout<<"No es una vocal\n";
    }

    return 0;


}