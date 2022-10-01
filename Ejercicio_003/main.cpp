///Conjetura de Collatz///
#include <iostream>
#include <stdlib.h> 
using namespace std;
class Inprimir{
public:
    void inP(long long int A){cout << "Numero: "<<A<<endl;}
    void inPAS(long long int A){cout << "Pasos: "<<A<<endl;}};
class Calcular{
public:
    long long int reN(){return S;}
    void obtenerN(long A){S = A;}
    void cal(){
        Inprimir inP;
        PA = S%2;
        while(FI != 4){
            PA = S%2;           
            inP.inP(S);
            if(S == 1){inP.inPAS(PAS); break;}
            if(PA != 0){S = (S*3)+1; }
            else if(PA == 0){S = S/2;}
            PAS ++;}}
private:
    long long int S,PAS = 0,PA,FI;};
int main(){
    long long int S;
    Calcular oN;
    cout << "ingrese un numero: ";
    cin >> S;oN.obtenerN(S);
    oN.cal();}
