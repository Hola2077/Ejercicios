/// Operaciones con matrices basicas////
#include <iostream>
#include <stdlib.h>
using namespace std;
class Inprimir
{
public:
    void va(){system("clear");} //"cls" en windows
    int uno()
    {
        int A = 0;
        cout << "1 = Suma" << endl;
        cout << "Que operacion va a realisar: ";
        cin >> A;va();
        return A;
    }
    int fila()
    {
        int A = 0;
        cout << "Ingrese numero el numero de filas(1 ~ 20): ";
        cin >> A;
        return A;
    }
    int columna()
    {
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
    int sele = 0, fila = 0, columna = 0;
    sele = inprimir.uno();
    if (sele == 1){
        fila = inprimir.fila();
        columna = inprimir.columna();
    }else{cout << "Seleccion no valida";}
    }


private: 
    int SE,FI,CO;
};

int main()
{
    Matris matris;
    matris.forma();
    

}
