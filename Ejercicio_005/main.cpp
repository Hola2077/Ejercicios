#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int matrisUno[20][20];
int matrisDos[20][20];
int matrisRe[20][20];
int fila,columna;

//Nuevas variables//

void borrar(){
	system("cls"); //clear en linux//
};

class matris{
public:
	void tres(){
		bool orden = false;
		int AA,BB;
		while(orden == false){
			for(int A = 1; A<=fila;A++){
				AA = A;
				for(int B = 1; B<=columna;B++){
					BB = B;
					system("cls");
					dos();	
					cout<<endl<<"Ingrese el numero en la posicion "<<A<<", "<<B<<": ";
					cin>>matrisUno[A][B];		
					matrisRe[A][B] += matrisUno[A][B];
				}
			cout<<endl;
			}
			system("cls");
			if(AA == fila && BB == columna){
				break;
			}
		}
	}
	
	void dos(){
		for(int A = 1; A<=fila;A++){
			for(int B = 1; B<=columna;B++){
				cout<<"\t"<<matrisUno[A][B];
			}
			cout<<endl;
		}
	}
	
	void uno(){
		cout<<"Ingres el numero de Filas: "; 
		cin>>fila;cout<<endl;
		cout<<"Ingres el numero de Columna: "; 
		cin>>columna;cout<<endl;
		tres();
	}
};

class resultado{
public:
	void dos(){
		for(int A = 1; A<=fila;A++){
			for(int B = 1; B<=columna;B++){
				cout<<"\t"<<matrisRe[A][B];
			}
			cout<<endl;
		}
	}
};

class menu{
public:
	void uno(){
		int A = 0;	
		string primera = "Ingrese una obsion: ";
		bool orden = false;
		while(orden != true){
			borrar();
			cout<<"--------Menu-------"<<endl;
			cout<<"1 Definir Matris A"<<endl;
			cout<<"2 Definir Matris B"<<endl;
			cout<<"3 Ver Matris R (Resultado)"<<endl;
			cout<<"4 Sumar"<<endl;
			cout<<"5 Restar"<<endl;
			cout<<"6 Salir"<<endl;
			cout<<primera;cin>>A;
			if(A>0 && A<=6){
				orden = true;
			}else{primera = "Valor no valido intente de nuevo: ";}
		}
	}
};

int main(){
	
	menu menu;
	
	menu.uno();
	
	/*
	matris MatrisA;
	matris MatrisB;
	resultado MatrisRe;
	MatrisA.uno();
	MatrisB.uno();
	MatrisRe.dos(); */
}