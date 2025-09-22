#include <iostream>
using namespace std;

typedef int TipoDeDato; // tipo de los elementos de la pila
const int TAMPILA = 49;

class PilaLineal
{
private:
    int cima;
    TipoDeDato listaPila[TAMPILA];

public:
    PilaLineal()
    {
        cima = -1; // condición de pila vacía
    }

    // operaciones que modifican la pila
    void insertar(TipoDeDato elemento);
    TipoDeDato quitar();
    void limpiarPila();

    // operación de acceso a la pila
    TipoDeDato cimaPila();

    // verificación estado de la pila
    bool pilaVacia();
    bool pilaLlena();
};

void PilaLineal::insertar(TipoDeDato elemento)
{
    if (pilaLlena())
    {
        throw "Desbordamiento pila";
    }
    // incrementar puntero cima y copiar elemento
    cima++;
    listaPila[cima] = elemento;
}

TipoDeDato PilaLineal::quitar()
{
    TipoDeDato aux;
    if (pilaVacia())
    {
        throw "Pila vacía, no se puede extraer";
    }
    // guarda elemento de la cima
    aux = listaPila[cima];
    // decrementar cima y devolver elemento
    cima--;
    return aux;
}

// Implementaciones faltantes
void PilaLineal::limpiarPila()
{
    cima = -1;
}

TipoDeDato PilaLineal::cimaPila()
{
    if (pilaVacia())
    {
        throw "Pila vacía";
    }
    return listaPila[cima];
}

bool PilaLineal::pilaVacia()
{
    return cima == -1;
}

bool PilaLineal::pilaLlena()
{
    return cima == TAMPILA - 1;
}
