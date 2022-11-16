#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int matrisUno[20][20];
int matrisDos[20][20];
int matrisRe[20][20];
int fila,columna;

//Nuevas variables y funciones//

void borrar(){
	system("cls"); //clear en linux//
};

//////////////Viejo///////////
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
/////////////////Nuevo///////////////////

class menu{
public:
	int uno(){
		int A = 0;	
		string primera = "Ingrese una opcion: ";
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
		return A;
	}
};

class definir{
public:
	void rend(int fila, int columna){
		for(int A = 1; A<=fila;A++){
			for(int B = 1; B<=columna;B++){
				cout<<"\t"<<matrisUno[A][B];
			}
			cout<<endl;
		}
	}
	
	void matris(int fila,int columna){
		bool orden = false;
		int aFila,aColumna;
		while(orden == false){
			for(int A = 1; A<=fila;A++){
				aFila = A;
				for(int B = 1; B<=columna;B++){
					aColumna = B;
					system("cls");
					rend(fila,columna);	
					cout<<endl<<"Ingrese el numero en la posicion "<<A<<", "<<B<<": ";
					cin>>matrisUno[A][B];		
					matrisRe[A][B] += matrisUno[A][B];
				}
			cout<<endl;
			}
			borrar();
			if(aFila == fila && aColumna == columna){
				break;
			}
		}
	}
};

class  selecciones{
public:
	void nunM(){
		definir definir;
		int fila,columna;
		borrar();
		cout<<"Ingres el numero de Filas: "; 
		cin>>fila;cout<<endl;
		cout<<"Ingres el numero de Columna: "; 
		cin>>columna;cout<<endl;
		definir.matris(fila,columna);
	}
	
	void filtroUno(int A){
		switch (A){
			case 1: nunM();
			break;
			default: cout<< A ;
			break;
		}
	}
};

int main(){
	menu menu;
	selecciones seleccion;
	int opcion = menu.uno();
	seleccion.filtroUno(opcion);
	
	/*
	matris MatrisA;
	matris MatrisB;
	resultado MatrisRe;
	MatrisA.uno();
	MatrisB.uno();
	MatrisRe.dos(); */
}