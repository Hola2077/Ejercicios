/// Operaciones con matrices basicas////
#include <iostream>
#include <stdlib.h>
using namespace std;
class Inprimir
{
public:
    void va(){system("clear");} //"cls" en windows
    void inA(int A){AA = A;};int outA(){return AA;}; //fila 
    void inB(int B){BB = B;};int outB(){return BB;}; //columna
    void inC(int C){CC = C;};int outC(){return CC;}; //Operacion 
    int uno(){
        int A = 0;
        cout << "1 = Suma" << endl;
        cout << "Que operacion va a realisar: ";
        cin >> A;inC(A);va();return A;}
    int fila(){
        int A = 0;
        cout << "Ingrese numero el numero de filas(1 ~ 20): ";
        cin >> A;inA(A);return A;}
    int columna(){
        int A = 0;
        cout << "Ingrese numero el numero de columnas(1 ~ 20): ";
        cin >> A;inB(A);return A;}
 
    void cosMatris(){
        int F = 0;int C = 0;int D = 0; //filas, columnas y valor a asignar
        bool orden = false; //terminar bucle
        int matris[20][20] = {0};va();
        while(orden == false){
            va();
            for (int A=0;A<outA();A ++){
                for (int F=0;F<outB();F++){
                    cout<<" "<<matris[A][F];
                }
                cout<<endl;
            }
            cout << "Ingrese el valor de "<<F+1<<"."<<C+1<<": ";
            cin>>D;
            matris[F][C] = D;
            if(F != outA()){F ++;};if(C != outA()){C ++;};
        }
        

    }
private:
    int AA,BB,CC;
};

class Matris
{
public:
    int outSele(){return sele;}//salida
    int outFila(){return fila;}
    int outColumna(){return columna;}
    
    void inSele(int A){sele = A;}//entrada
    void inFila(int A){fila = A;}
    void inColumna(int A){columna = A;}
    
    void inS(bool A){YY = A;}//entrada
    bool inS(){return YY;}//salida

    void forma(){
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
