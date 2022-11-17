#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;
int matrisUno[50][50];int longMatrisUno[1];
int matrisDos[50][50];int longMatrisDos[1];
int matrisTres[50][50];int longMatrisTres[1];
int matrisCuatro[50][50];int longMatrisCuatro[1];
int matrisRe[50][50];int longMatrisRe[1];
////////Sele Mover/////
int unoSeleMove = 0;
int dosSeleMove = 0;
/////////Valores Movidos///////
int matrisA[50][50];int longMatrisA[1];
int matrisB[50][50];int longMatrisB[1];

void borrar(){
	system("cls"); //clear en linux//
};

class menu{
public:
	int uno(){
		int A = 0;	
		string primera = "Ingrese una opcion: ";
		bool orden = false;
		while(orden != true){
			borrar();
			cout<<"--------Menu-------"<<endl;
			cout<<"1 Definir Matris (A)"<<endl;
			cout<<"2 Definir Matris (B)"<<endl;
			cout<<"3 Definir Matris (C)"<<endl;
			cout<<"4 Definir Matris (D)"<<endl;
			cout<<"5 Ver Matris R (Resultado)"<<endl;
			cout<<"6 Sumar"<<endl;
			cout<<"7 Restar"<<endl;
			cout<<"8 Salir"<<endl<<endl;
			cout<<primera;cin>>A;
			if(A>0 && A<=6){
				orden = true;
			}else{primera = "Valor no valido intente de nuevo: ";}
		}
		return A;
	}
	void mover(){
		borrar();
		cout<<"1 Matris (A)"<<endl;
		cout<<"2 Matris (B)"<<endl;
		cout<<"3 Matris (C)"<<endl;
		cout<<"4 Matris (D)"<<endl<<endl;
		cout<<"Que matris desea operar?: ";cin>>unoSeleMove;
		cout<<"Y con cual?: ";cin>>unoSeleMove;
		borrar();
	}
};

class definir{
public:
	void asignar(int Fila,int Columna ,int Valor ,int Seleccion){
		switch(Seleccion){
			case 1: matrisUno[Fila][Columna] = Valor;longMatrisUno[0] = Fila;longMatrisUno[1] = Columna;break;
			case 2: matrisDos[Fila][Columna] = Valor;longMatrisDos[0] = Fila;longMatrisDos[1] = Columna;break;
			case 3: matrisTres[Fila][Columna] = Valor;longMatrisTres[0] = Fila;longMatrisTres[1] = Columna;break;
			case 4: matrisCuatro[Fila][Columna] = Valor;longMatrisCuatro[0] = Fila;longMatrisCuatro[1] = Columna;break;
			case 5: matrisA[Fila][Columna] = Valor;longMatrisA[0] = Fila;longMatrisA[1] = Columna;break;
			case 6: matrisB[Fila][Columna] = Valor;longMatrisB[0] = Fila;longMatrisB[1] = Columna;break;
		}
	}
	int leer(int Fila,int Columna ,int Seleccion){
		switch(Seleccion){
			case 1: return matrisUno[Fila][Columna];break;
			case 2: return matrisDos[Fila][Columna];break;
			case 3: return matrisTres[Fila][Columna];break;
			case 4: return matrisCuatro[Fila][Columna];break;
			case 5: return matrisA[Fila][Columna];break;
			case 6: return matrisB[Fila][Columna];break;
		}
	}
	
	int longg(int seleccion,int valor){
		switch(seleccion){ //// 0 = Fila / 1 = Columna//////
			case 1: return longMatrisUno[valor];break;
			case 2: return longMatrisDos[valor];break;
			case 3: return longMatrisTres[valor];break;
			case 4: return longMatrisCuatro[valor];break;
			case 5: return longMatrisA[valor];break;
			case 6: return longMatrisB[valor];break;
		}
	}
	
	int Alongg(int seleccion,int casilla,int valor){
		switch(seleccion){ //// 0 = Fila / 1 = Columna//////
			case 1: longMatrisUno[casilla] = valor;break;
			case 2: longMatrisDos[casilla] = valor;break;
			case 3: longMatrisTres[casilla] = valor;break;
			case 4: longMatrisCuatro[casilla] = valor;break;
			case 5: longMatrisA[casilla] = valor;break;
			case 6: longMatrisB[casilla] = valor;break;
		}
	}
	
	void rend(int fila, int columna,int seleccion){
		for(int A = 1; A<=fila;A++){
			for(int B = 1; B<=columna;B++){
				cout<<"\t"<<leer(A,B,seleccion);
			}
			cout<<endl;
		}
	}
	
	void matris(int fila,int columna,int seleccion){
		bool orden = false;
		int aFila,aColumna,valor;
		while(orden == false){
			for(int A = 1; A<=fila;A++){
				aFila = A;
				for(int B = 1; B<=columna;B++){
					aColumna = B;
					borrar();
					rend(fila,columna,seleccion);	
					cout<<endl<<"Ingrese el numero en la posicion "<<A<<", "<<B<<": ";
					cin>>valor;
					asignar(A,B,valor,seleccion);		
				}
			cout<<endl;
			}
			borrar();
			if(aFila == fila && aColumna == columna){
				string Si_No = "No";
				rend(fila,columna,seleccion);	
				cout<<endl<<"Desea Corregir Si o No?: ";cin>>Si_No;
				if(Si_No == "N" || Si_No == "No" || Si_No == "NO" || Si_No == "no" || Si_No == "n" || Si_No == "oN"){
					break;
				}
				
			}
		}
	}
};

class mover{
public:
	void moverLogi(int seleccion,int donde){ ////Mover Logica/////
		definir definir;
		
		for(int fila = 1;fila<=definir.longg(seleccion,0);fila++){
			for(int columna = 1;columna<=definir.longg(seleccion,1);columna++){
				int valor = definir.leer(fila,columna,seleccion);
				definir.asignar(fila,columna,valor,donde);
				////
				definir.Alongg(donde,0,definir.longg(seleccion,0));
				definir.Alongg(donde,1,definir.longg(seleccion,1));
			}
		}
	}
	
	void moverUniv(int donde,int hacia){/////Mover Universal//// moverLogi(donde,hacia donde) /// 5 es A /// 6 es B///
		switch(donde){
			case 1: moverLogi(1,hacia);break;
			case 2: moverLogi(2,hacia);break;
			case 3: moverLogi(3,hacia);break;
			case 4: moverLogi(4,hacia);break;
		}
	}
	
	void moverS_R(){ ///Mover Resta y Suma/// int unoSeleMove = 1 - 4; int dosSeleMove = 1 - 4; ///
		menu menu;
		menu.mover();
		moverUniv(unoSeleMove,5);
		moverUniv(dosSeleMove,6);
	}
	
};

class operaciones{
public:
	bool conpararSuma(){
		bool A = false;
		if(longMatrisA[0] == longMatrisB[0] && longMatrisA[1] == longMatrisB[1]){
			A = true;
		}
		
		return A;
	}
	
	void suma(){
		mover mover;
		mover.moverS_R();
		if(conpararSuma() == true){
			for(int fila = 1; fila<=longMatrisA[0];fila++){
				for(int columna = 1; columna<=longMatrisA[1];columna++){
					matrisRe[fila][columna] = matrisA[fila][columna] + matrisB[fila][columna];
				}
			}
		}else{cout<<"Las Matrises no tienen las mismas dimenciones"<<endl;system("pause");}
	}
};



class  selecciones{
public:
	void nunM(int A){
		definir definir;
		int fila,columna;
		borrar();
		cout<<"Ingres el numero de Filas: "; 
		cin>>fila;cout<<endl;
		cout<<"Ingres el numero de Columna: "; 
		cin>>columna;cout<<endl;
		definir.matris(fila,columna,A);
	}
	
	void filtroUno(int A){
		operaciones operaciones;
		switch (A){
			case 1: nunM(1);break; //para matris A	
			case 2: nunM(2);break; //para matris B	
			case 3: nunM(3);break;  //...
			case 4: nunM(4);break;  //...
		
			case 5: 
			break; 
			case 6: operaciones.suma();
			break; 
			case 7:
			break; 
			default: cout<< "????" ;
			break;
		}
	}
};

int main(){
	menu menu;
	selecciones seleccion;	while(true){
		int opcion = menu.uno();
		seleccion.filtroUno(opcion);
		
	}

}