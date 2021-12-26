
#include <iostream>
using namespace std;
int main(){
	int cantidadProductos = 0;
	int i=0;
	int e=0;
	
	string producto;
	string listaProductos [0];
	
	
	do{
		cout<<"Ingrese la cantidad de productos: ";
		cin>>cantidadProductos;
		
		string listaProductos [cantidadProductos];
		
		while(i<cantidadProductos){
		cout<<"Ingrese el producto: "<<endl;
		cin>>producto;
		listaProductos[i]= producto;
		i++;
		}
		
		cout<<endl<<endl;
		
		cout<<"****************************"<<endl;
		cout<<"*Su listado de productos es*"<<endl;
		cout<<"****************************"<<endl;
		
		cout<<endl;
		
		for(i=0; i<cantidadProductos; i++){;
		cout<<listaProductos[i]<<endl;
		cout<<"****************************"<<endl;
		}
		
		cout<<"Si no esta satisfecho con su lista y desea realizarla de nuevo, presione 0"<<endl;
		cout<<"Si esta satisfecho con su lista y desea finalizar, presione cualquier otro numero"<<endl;
		cin>>e;
			
	}while(e==0);
	
	cout<<endl<<endl<<endl;
	
	cout<<"Muchas gracias por usar el programa :)";
	
	return 0;
}
