/// Operaciones con matrices basicas////
#include <iostream>
#include <stdlib.h>
using namespace std;
class Inprimir
{
public:
    void va(){system("clear");} //"cls" en windows
    int uno(){
        int A = 0;
        cout << "1 = Suma" << endl;
        cout << "Que operacion va a realisar: ";
        cin >> A;va();
        return A;
    }
    int fila(){
        int A = 0;
        cout << "Ingrese numero el numero de filas(1 ~ 20): ";
        cin >> A;
        return A;
    }
    int columna(){
        int A = 0;
        cout << "Ingrese numero el numero de columnas(1 ~ 20): ";
        cin >> A;
        return A;
    }
};
    

class Matris
{
public:

    void forma(){
    Inprimir inprimir;
    inSele(inprimir.uno());
    if (outSele() == 1){
        inFila(inprimir.fila());
        inColumna(inprimir.columna());
        inprimir.va();
        if(outFila() == 0 && outColumna() == 0){cout << "No puede tener 0 filas o 0 columnas"<< endl;}
    }else{cout << "Seleccion no valida"<<endl;}
    }

    int outSele(){return sele;}
    int outFila(){return fila;}
    int outColumna(){return columna;}

    void inSele(int A){sele = A;}
    void inFila(int A){fila = A;}
    void inColumna(int A){columna = A;}


private: 
    int SE,FI,CO,sele = 0, fila = 0, columna = 0;
};

int main()
{
    Matris matris;
    matris.forma();
    

}
