#include <stdlib.h>
#include <iostream>
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


    void dibMatris(){////dibujar matris///
        va();
        for (int A=0;A<outA();A ++){
            for (int F=0;F<outB();F++){
                cout<<"\t"<<matris[A][F];
            }
            cout<<endl;
        }
    }

    void cosMatris(){//asignar valores ala matris
        int D = 0;//valor a asignar
        bool orden = false; //dar orden de terminar bucle //sin usar
        ;va();
        while(orden == false){
            for (int A{0};A<outA();A++){   
                for(int B=0;B<outB();B++){
                    dibMatris();
                    cout << "Ingrese el valor de " << A + 1 << "." << B + 1 << ": ";
                    cin>>D;
                    matris[A][B] = D;
                }
            }     
        }
    }
private:
    int AA,BB,CC;int matris[20][20] = {0};
};