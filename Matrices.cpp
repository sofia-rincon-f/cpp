#include <iostream>
#include <conio.h>

using namespace std;

int main (){


/*Video 35 Matriz o tabla: Es un vector (arreglo) bidimensional*/

    int matriz[2][3];
    //nombre[nfilas][ncolumnas]
    return 0; 

    //Agregar elementos

    int enteros[2][3]={1,2,3 , 4,5,6};

    cout << enteros[1][2]; //imprime 6

    //Otras formas

    int forma1[2][3]={{1,2,3},{4,5,6}};

    int forma2[2][3]={1,2,3

                    4,5,6}


// Video 36 Rellenar una matriz pidiendo # filas y columnas

        int numeros [100][100], filas, columnas;

        cout<<"Digite numero de filas: "; cin >> filas;
        cout<<"Digite numero de columnas: "; cin>>columnas;

        //Almacenando elementos en la matriz
        for (int i = 0; i < count; i++)
        {
            for (int j=0;j<columnas;j++){
                cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
                cin>>numeros[i][j];
            }
        }
        

        //Mostrando la matriz 

        for(int i=0;i<filas;i++){
            for (int j = 0; j < columnas; j++)
            {
                cout<<numeros[i][j];
            }
            cout<<"\n"; // salto de lina organiza la impresión
            
        }

    getch();


// Video 37 Matriz tipo entera de 2*2 y copiar su contenido hacia otra matriz

        int num[2][2] = {{1,2},{3,4}}
        int matriz2[2][2];


        //Pasando el contenido de num a matriz2
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                matriz[i][j]= num[i][j];
            }  
        }

        //imprimir 
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout<<matriz2[i][j];
            }  
            cout<<"\n";
        }

    getch();

/* Video 38 Realice un programa que lea una matriz de 3x3 
y cree una matriz traspuesta. La matriz traspuesta es aquella
en la que la columna i era la fila i de la matriz


        |123|   -->  |147|
        |456|        |258|
        |789|        |369|
*/


        int numbers[3][3];

        for(int i=0; i<3;i++){
            for(int j=0; j<3;j++){

                cout<<"Digite un numero: ["<<i<<"]["<<j<<"] ";
                cin >> numbers[i][j];
            }
            cout<<"\n";
        }

        cout<<"Matriz original\n";

        for (int i = 0; i <3; i++)
        {
            for (size_t j = 0; j <3; j++)
            {
                cout<<numbers[i][j]<<" ";
            }
            cout<<"\n";
        }

        cout<<"\nMatriz transpuesta\n";

        for (int i = 0; i <3; i++)
        {
            for (size_t j = 0; j <3; j++)
            {
                cout<<numbers[j][i]<<" "; //Detalle del cambio
            }
            cout<<"\n";
        }


/*Video 39 Determine si una matriz es simetrica o no. 
Una matriz simetrica es cuadrada e igual a su matriz transpuesta*/ 


        int matriz[100][100], filas, columnas;
        char band=false;

        cout<<"Digite numero de filas: "; cin >> filas;
        cout<<"Digite numero de columnas: "; cin>>columnas;

        for (int i = 0; i <filas; i++)
        {
            for (size_t j = 0; j <columnas; j++)
            {
                cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
                cin>>matriz[i][j];
            }
        }

        if(filas==columnas){
            for (int i = 0; i <filas; i++)
            {
                for (size_t j = 0; j <columnas; j++)
                {
                   if(matriz[i][j]==matriz[j][i]){
                        band='V';
                   }
                }
            }
        }

        if (band == 'V')
        {
            cout<<"La matriz es simetrica";
        }else{
            cout<<"La matriz no es simetrica";
        }
        

    return 0;

}