#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class repetir{
public:
	int pre(){
	int sueldo,categoria;	
	int dif = 0;
	int sueldoF = 0;
	system("cls");
	cout<<"Ingrese el sueldo: ";cin>>sueldo;cout<<endl;
	system("cls");
	cout<<"Categorias"<<endl;cout<<"1 == $ 30"<<endl<<"2 == $ 38"<<endl<<"3 == $ 50"<<endl<<"4 == $ 70"<<endl<<endl;
	cout<<"Ingrese la caterigoria: ";cin>>categoria;cout<<endl;system("cls");
	cout<<"Horas Extras: ";cin>>dif;
	switch(categoria){
	case 1: sueldoF = dif*30;
	break;
	case 2: sueldoF = dif*38;
	break;
	case 3: sueldoF = dif*50;
	break;
	case 4: sueldoF = dif*70;
	break;
	}
	cout<<"Total sueldo: "<<sueldoF+sueldo<<endl;
	//system("pause");
	return sueldoF+sueldo;
	}
};


int main(){
	repetir pree;
	int nomina = 0;
	string terminar = "si";
	
	while(terminar != "no"){
		nomina += pree.pre();
		cout<<"Desea continuar si o no: ";cin>>terminar;
	}
	system("cls");
	cout<<"Nomina:"<<nomina;	
}