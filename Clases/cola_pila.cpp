#include <iostream> 

using namespace std;


// Para una pila debo tener ciertas consideraciones 

// Si tiene array es estatica
// Si tiene listas es dinamica

int main(){

    int x[10]={0};
    for(int i = 0; i<=7;i++){
        cout << "arreglo " << x[i] <<endl;

    }
    return 0;
}

//Cuando digo local se refiere local a la clase

//La cima = montaña
//la sima = profundidad, abismo del mar