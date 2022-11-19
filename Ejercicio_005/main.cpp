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

void borrar(){system("clear");}; // "cls" en windows // "clear" en linux ////

void pausa(){system("read -rsp $'Presione una tecla retroseder...\n'");}; // "pause" en windows // "read -rsp $'#####\n'" en linux ////

class menu{ /// Clase dedicada a mostrar menus,etc ///
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
			cout<<"8 Multiplicasion"<<endl<<endl;
			cout<<primera;cin>>A;
			if(A>0 && A<=8){ ///Actualisar cada que se agrege una obsion///
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
		cout<<"Y con cual?: ";cin>>dosSeleMove;
		borrar();
	}
};

class definir{ ///clase dedicada a asignar valores ///
public:
	void asignar(int Fila,int Columna ,int Valor ,int Seleccion){///asigna valores ala matris///
		switch(Seleccion){
			case 1: matrisUno[Fila][Columna] = Valor;longMatrisUno[0] = Fila;longMatrisUno[1] = Columna;break;
			case 2: matrisDos[Fila][Columna] = Valor;longMatrisDos[0] = Fila;longMatrisDos[1] = Columna;break;
			case 3: matrisTres[Fila][Columna] = Valor;longMatrisTres[0] = Fila;longMatrisTres[1] = Columna;break;
			case 4: matrisCuatro[Fila][Columna] = Valor;longMatrisCuatro[0] = Fila;longMatrisCuatro[1] = Columna;break;
			case 5: matrisA[Fila][Columna] = Valor;longMatrisA[0] = Fila;longMatrisA[1] = Columna;break;
			case 6: matrisB[Fila][Columna] = Valor;longMatrisB[0] = Fila;longMatrisB[1] = Columna;break;
		}
	}

	int leer(int Fila,int Columna ,int Seleccion){///Leer valores de matris////
        int A = 0;
		switch(Seleccion){
			case 1: A = matrisUno[Fila][Columna];break;
			case 2: A = matrisDos[Fila][Columna];break;
			case 3: A = matrisTres[Fila][Columna];break;
			case 4: A = matrisCuatro[Fila][Columna];break;
			case 5: A = matrisA[Fila][Columna];break;
			case 6: A = matrisB[Fila][Columna];break;
            case 7: A = matrisRe[Fila][Columna];break;
		}
        return A;
	}
	
	int longg(int seleccion,int valor){ /// Leer longitud de las matrise///
        int A = 0;
		switch(seleccion){ //// 0 = Fila / 1 = Columna//////
			case 1: A = longMatrisUno[valor];break;
			case 2: A = longMatrisDos[valor];break;
			case 3: A = longMatrisTres[valor];break;
			case 4: A = longMatrisCuatro[valor];break;
			case 5: A = longMatrisA[valor];break;
			case 6: A = longMatrisB[valor];break;
			case 7: A = longMatrisRe[valor];break;
		}
        return A;
	}
	
	void Alongg(int seleccion,int casilla,int valor){ ////Asignar valores alas matrises/////
		switch(seleccion){ //// 0 = Fila / 1 = Columna//////
			case 1: longMatrisUno[casilla] = valor;break;
			case 2: longMatrisDos[casilla] = valor;break;
			case 3: longMatrisTres[casilla] = valor;break;
			case 4: longMatrisCuatro[casilla] = valor;break;
			case 5: longMatrisA[casilla] = valor;break;
			case 6: longMatrisB[casilla] = valor;break;
			case 7: longMatrisRe[casilla] = valor;break;
		}
	}
	
	void rend(int fila, int columna,int seleccion){ /////Mostar matris///
		for(int A = 1; A<=fila;A++){
			for(int B = 1; B<=columna;B++){
				cout<<"\t"<<leer(A,B,seleccion);
			}
			cout<<endl;
		}
	}
	
	void matris(int fila,int columna,int seleccion){ ///Asignar valores en la matris///
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
			if(aFila == fila && aColumna == columna){ /// Para cuando filas y columnas ya esten completadas ///
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

class mover{ ///Dedicado a aser Movimientos entre Matrises /// $$$$$Revisar$$$$$
public:
	void moverLogi(int seleccionUno,int dondeUno,int seleccionDos,int dondeDos){ ////Mover Logica/////
		definir definir;
		for(int fila = 1;fila<=definir.longg(seleccionUno,0);fila++){  /// 0 para fila///
			for(int columna = 1;columna<=definir.longg(seleccionDos,1);columna++){ /// 1 para columna///
				definir.asignar(fila,columna,definir.leer(fila,columna,seleccionUno),dondeUno);
				definir.asignar(fila,columna,definir.leer(fila,columna,seleccionDos),dondeDos);
				///////////Mover longitudes///////////////
				definir.Alongg(5,0,definir.longg(seleccionUno,0));definir.Alongg(5,1,definir.longg(seleccionUno,1));
				definir.Alongg(6,0,definir.longg(seleccionDos,0));definir.Alongg(6,1,definir.longg(seleccionDos,1));
			}
		}
    }
	
	void moverS_R(){ ///Mover Suma, Resta, Multicasion/// int unoSeleMove = 1 - 4"Matris que se va a mover" int dosSeleMove = 1 - 4"Matris que se va a mover" ///
		menu menu;
		menu.mover();
		moverLogi(unoSeleMove,5,dosSeleMove,6); /// moverLogi(L-Matris a Mover,L2-En donde se va a Mover,L-..,L2-...)
	}	
};

class operaciones{ ///clase dedicada para logica: sumar,resta,multiplicasion,etc///
public:
	void suma(){ ///Logica para sumar///
		mover mover;
		definir definir;
		mover.moverS_R();
		if(definir.longg(5,0) == definir.longg(6,0) && definir.longg(5,1) == definir.longg(6,1)){
			for(int fila = 1; fila<=longMatrisA[0];fila++){
				for(int columna = 1; columna<=longMatrisA[1];columna++){
					matrisRe[fila][columna] = matrisA[fila][columna] + matrisB[fila][columna];
					definir.Alongg(7,0,definir.longg(5,0));definir.Alongg(7,1,definir.longg(5,1));
				}
			}
			definir.rend(longMatrisRe[0],longMatrisRe[1],7);pausa();
		}else{cout<<"Las Matrises no tienen las mismas dimenciones"<<endl;pausa();}
	}
	void resta(){ ///Logica para Restar///
		mover mover;
		definir definir;
		mover.moverS_R();
		if(definir.longg(5,0) == definir.longg(6,0) && definir.longg(5,1) == definir.longg(6,1)){
			for(int fila = 1; fila<=longMatrisA[0];fila++){
				for(int columna = 1; columna<=longMatrisA[1];columna++){
					matrisRe[fila][columna] = matrisA[fila][columna] - matrisB[fila][columna];
					definir.Alongg(7,0,definir.longg(5,0));definir.Alongg(7,1,definir.longg(5,1));
				}
			}
			definir.rend(longMatrisRe[0],longMatrisRe[1],7);pausa();
		}else{cout<<"Las Matrises no tienen las mismas dimenciones"<<endl;pausa();}
	}

	void multiplicasion(){
		mover mover;
		definir definir;
		mover.moverS_R();
		if(definir.longg(5,1) == definir.longg(6,0)){		
			for(int A = 1; A<=longMatrisB[1];A++){
				cout<<"OK";
				for(int B = 1; B<=longMatrisA[0];B++){
					
					for(int C = 1; C<=longMatrisB[0];C++){
						
						matrisRe[B][A] += (matrisA[A][C] * matrisB[C][A]);
						definir.Alongg(7,0,definir.longg(5,0));definir.Alongg(7,1,definir.longg(6,1));
					}				
				}
			}definir.rend(longMatrisRe[0],longMatrisRe[1],7);pausa();
		}else{cout<<"NO";}
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
        definir definir;
		switch (A){
			case 1: nunM(1);break; //para matris A	//OK
			case 2: nunM(2);break; //para matris B	//OK
			case 3: nunM(3);break; //...            //OK
			case 4: nunM(4);break; //...            //OK
			case 5: borrar();definir.rend(longMatrisRe[0],longMatrisRe[1],7);pausa();break;  //OK
			case 6: operaciones.suma();borrar();break;  //OK
			case 7: operaciones.resta();borrar();break; //OK
			case 8: operaciones.multiplicasion();borrar();break; //OK
			default: cout<< "????" ;
			break;
		}
	}
};

int main(){
	menu menu;
	selecciones seleccion;	
	while(true){
		int opcion = menu.uno();
		seleccion.filtroUno(opcion);
	}
}