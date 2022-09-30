///Operaciones con matrices basicas////
#include <iostream>
#include <stdlib.h>  
using namespace std;

class Operaciones{
public: 
	void seleccion(int A){
		switch (A){
			case 1: suma();
			break;
			default:system("cls"); cout << "Opcion no valida";
			break;
		}
	}
	void suma(){
		
	}
	int Ssuma(int A){return A;}
private:
	
};
class Inprimir{
	Operaciones op;
public:
	int iSuma(){
		cout << "1 = 2x2";
		cout << "2 = 3x3";
		cout << "3 = 4x4";
		cout << "ingrese el formato dela matriz";int A;
		cin >> A;op.Ssuma(A);
	}
	int seleccion(){
		return O;
	}
	void uno(){
		cout << "1 = Suma" <<"\n";
		cout << "Ingrese la operacion: ";
		cin >> O;
		switch (O){
			case 1: op.suma();
			break;
			default:system("cls"); cout << "Opcion no valida";
			break;
		}
	}
private: 
	int O;
};

int main(){
	Inprimir inprimir;
	Operaciones op;
	inprimir.uno();
	op.seleccion(inprimir.seleccion());
	
	
}