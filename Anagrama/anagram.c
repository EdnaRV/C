#include<stdio.h>
#include<stdlib.h>

class Pila{
    public:
        int dato;
        class Pila *ptrSig;
};
typedef Pila nodoPila;
typedef nodoPila *ptrnodoPila;
int sacar(ptrnodoPila *ptrCima);

int sacar(ptrnodoPila *ptrCima){
    ptrNodoPila ptrTem;
    int ElimV;

    ptrTem = *ptrCima;
    ElimV = (*ptrCima) -> dato;
    *ptrCima = (*ptr) -> ptrSig;
    free(ptrTemp);

    return ElimV;
}

int main(){

    char s[] = {'a','m','o','r'};
    char t[] = {'m','o','r','a'};
    char saux[] = {'0'};
    char taux[] = {'0'};
    char aux;
    int aux1;
    ptrnodoPila ptrNuevo;
    ptrNuevo = malloc(100, sizeof(nodoPila));
    ptrnodoPila ptrPila;
    ptrnodoPila ptrActual;

    for(int k = 0; k< sizeof(s); k ++){
        ptrNuevo -> dato = s[i];
        ptrNuevo -> ptrSig = *ptrCima;
        *ptrCima = ptrNuevo;
        for(int j = 0; j < sizeof(s); j++){
            s[i] = aux;
                if(sacar(ptrPila){
                    aux1++;
                }
            }


        }
    }


encontrada}