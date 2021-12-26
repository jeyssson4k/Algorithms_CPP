//realice un programa que solicite al usuario la cantidad de notas que desea digitar
//pedir la cantidad de notas ingresadas
//debe mostrar en pantalla el promedio
//solicitar si desea continuar presionar 1=si 0=no

#include <iostream>
using namespace std;

int main(){
	
	int i=0, j=0, h=1;
	float n=0,no=0, x=0;
	
	cout<<"Bienvenido al programa :D"<<endl<<endl;
	
	while(h==1){
		cout<<"Digite la cantidad de notas: "<<endl;
		cin>>i;
		
		while(j<i){
		
		cout<<"Digite su nota: "<<endl;
		cin>>no;
		
		n=n+no;
		j++;
		}
	
		x=n/i;
	
		cout<<"Su promedio es: "<<x<<endl<<endl;
		
		i=0;
		n=0;
		no=0;
		x=0;
		j=0;
		
		cout<<"Si desea continuar, presione 1, de lo contrario presione 0"<<endl;
		cin>>h;	
		while(h!=0 && h!=1){
			cout<<"Por favor, para continuar presione 1 o para salir, presione 0..."<<endl;
			cin>>h;
		}
	}
	
	
	return 0;
}

