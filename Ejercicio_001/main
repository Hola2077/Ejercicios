#include <iostream>
#include <stdlib.h> 
using namespace std;

class Sueldo{
public:
    void inicio(){
        ingresar();
    }
private: 
    void ingresar(){
        cout<<"Ingrese su sueldo: ";cin>>su;
        system("clear");
        cout<<"-Categorias-"<<"\n"<<"1 - 15%"<<"\n"<<"2 - 10%"<<"\n"<<"3 - 8%"<<"\n"<<"4 - 7%"<<"\n"<<"Ingrese una categoria(default 1): ";
        cin>>ce;cout<<endl;system("clear");
        filtroUno();
    }
    void filtroUno(){
        switch(ce){
            case 1:inprimir();break;
            case 2:inprimir();break;
            case 3:inprimir();break;
            case 4:inprimir();break;
            default:cout<<"Puso un numero fuera del rango "<<endl;break;}
    }
    void inprimir(){
        cout<<"Antiguo sueldo: "<<su<<"\n";
        cout<<"Nuevo sueldo: "<<calcular()<< endl;
    }
    long calcular(){
        float A;
        switch(ce){
            case 1:A = (su*15)/100;break;
            case 2:A = (su*10)/100;break;
            case 3:A = (su*8)/100;break;
            case 4:A = (su*7)/100;break;}
        return A+su;
    }
    
    int su,ce;
};

int main(){
    Sueldo sueldo;
    sueldo.inicio();
}
