/*
En una empresa local de comercialización de artículo stecnológicos solicitan crear
un módulo de clientes para la generación de una lista de compras y un cálculo de venta 
por unidad, respectivamente.

2.El módulo de clientes debe preguntar al usuario cuántos productos desea agregar a la 
lista de compra y posteriormente, de acuerdo con su respuesta, debe solicitar por 
pantalla el ingreso de cada uno de los nombres de dichos productos; 
una vez el cliente haya ingresado la totalidad de estos, el sistema debe comportarse así:

Mostrar en pantalla la lista de productos ingresados por elcliente.
Preguntar al cliente si se encuentra satisfecho con la lista realizada o 
si desea unanueva.
En caso de que el cliente indique que se encuentra satisfecho, 
emitir un mensaje dedespedida.?En caso de que la respuesta del cliente sea que desea 
generar una nueva lista, se debe preguntar cuántos productos agregar y repetir el 
proceso antesmencionado.
*/

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
