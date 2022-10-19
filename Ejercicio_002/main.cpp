/// Operaciones con matrices basicas////
#include <iostream>
#include <stdlib.h>
#include "inprimir.cpp"
using namespace std;
class Matris
{
public:
    int outSele(){return sele;}//salidas
    int outFila(){return fila;}
    int outColumna(){return columna;}
    
    void inSele(int A){sele = A;}//entradas
    void inFila(int A){fila = A;}
    void inColumna(int A){columna = A;}
    
    void inS(bool A){YY = A;}//entrada //sin usar
    bool inS(){return YY;}//salida //sin usar

    void forma(){//Etc
        Inprimir inprimir;
        inSele(inprimir.uno());
        if (outSele() == 1){
            inFila(inprimir.fila());
            inColumna(inprimir.columna());
            inprimir.va();
            inprimir.cosMatris();
            if(outFila() == 0 && outColumna() == 0){cout << "No puede tener 0 filas o 0 columnas"<< endl;}
        }else{cout << "Seleccion no valida"<<endl;}
    }

private: 
    int sele = 0, fila = 0, columna = 0;
    bool YY;
};

int main()
{
    Matris matris;
    matris.forma();
}