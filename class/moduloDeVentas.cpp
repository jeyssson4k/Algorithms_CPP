// *********** Módulo Ventas usando POO ***********
// Cada Venta esta definida por la nombreVendedor, ventasMes1, ventasMes2, ventasMes3, ventasMes4.
#include <iostream>
using namespace std;

/*
Creación de una clase abstracta...

Modificaciones:
Creación de un arreglo double ventas de tamaño 12 para registrar como máximo las ventas de un año
Eliminación de métodos repetitivos
El resultado se muestra por trimestres (debido al aumento en la cantidad de meses máxima es difícil mostrar todo en una sola tabla)
Se realiza un cálculo extra: la venta promedio por vendedor por mes*
*/

class Venta {
	private:
		string nombreVendedor;
	public:
		Venta();
		double ventaMes[12];
		void setVenta(string, double mes[12]);
		
		string getnombreVendedor();

};

// 2 Implementa metodos de la clase

// constructor con valor inicial
Venta::Venta() {
	nombreVendedor="";
	for (int i = 0;i < 12;i++){
		ventaMes[i]=0;
	}
}

// constructor con valor recibido como parametro
void Venta::setVenta(string nombre, double mes[12]) {
	nombreVendedor=nombre;
	for (int i = 0;i < 12;i++){
		ventaMes[i]= mes[i];
	}
}

// Regresa nombre del vendedor
string Venta::getnombreVendedor() {
	return nombreVendedor;
}

// variables globales
Venta lista[30];	// arreglo de objetos de la clase Venta, llamado lista
int totalVendedores;
int totalMeses;
string vendedor;
double meses[12];
double promedio;

// agregar ventas a la lista
void nuevaLista() {
	int i;
	
// preguntar al usuario la cantidad de vendedores
	cout<<endl<<"Ingrese la cantidad de vendedores a registrar: ";
	cin>>totalVendedores;
	cout<<endl<<endl;

//Preguntar al usuario la cantidad de meses a registrar teniendo como límite 12 meses
	cout<<"Ingrese la cantidad de meses a registrar (max.12): ";
	cin>>totalMeses;
	cout<<endl<<endl;
	
// ingresar los datos de ventas de cada vendedor
	for (i = 0; i < totalVendedores; i++){
		
		cout<<"Ingrese el nombre del vendedor "<<i+1<<" :";
		cin>>vendedor;
		for(int j = 0;j < totalMeses;j++){
			cout<<"Ingrese la cantidad vendida en el mes "<<j+1<<" :";
			cin>>meses[j];
		}
		
		lista[i].setVenta(vendedor, meses);
	}
	cout<<endl<<endl;
}

// ver informe
void verLista() {
	int i;
	double promedioVentas=0;
	
	//primer trimestre
	cout<<endl<<endl<<"Informe de ventas del primer trimestre"<<endl<<endl;
	cout<<"Nombre"<<"\t"<<"Mes 1"<<"\t"<<"Mes 2"<<"\t"<<"Mes 3"<<"Promedio ventas"<<endl;
	
	// Muestra informe de ventas por empleado, con promedio de ventas
	for (i = 0; i < totalVendedores; i++) {
		vendedor=lista[i].getnombreVendedor();
		promedio = (lista[i].ventaMes[0]+lista[i].ventaMes[1]+lista[i].ventaMes[2])/3;
		promedioVentas = promedioVentas + promedio;
		cout<<vendedor<<"\t $"<<lista[i].ventaMes[0]<<"\t $"<<lista[i].ventaMes[1]<<"\t $"<<lista[i].ventaMes[2]<<"\t $"<<"\t $"<<promedio<<endl;
	}
	
	// Muestra promedio de ventas de todos los vendedores en los 3 meses
	cout<<endl<<"El promedio de ventas del primer trimestre (por vendedor/meses): "<<"\t $ "<< promedioVentas <<endl;
	cout<<endl<<"El promedio de ventas del primer trimestre (por vendedor/mes): "<<"\t $ "<< promedioVentas/totalVendedores <<endl;
	cout<<endl<<endl;
	
	//segundo trimestre
	if(totalMeses > 3 && totalMeses < 7){
		promedio = 0; 
		promedioVentas = 0;
		
		cout<<endl<<endl<<"Informe de ventas del segundo trimestre"<<endl<<endl;
		cout<<"Nombre"<<"\t"<<"Mes 1"<<"\t"<<"Mes 2"<<"\t"<<"Mes 3"<<"Promedio ventas"<<endl;
	
		// Muestra informe de ventas por empleado, con promedio de ventas
		for (i = 0; i < totalVendedores; i++) {
		vendedor=lista[i].getnombreVendedor();
		promedio = (lista[i].ventaMes[3]+lista[i].ventaMes[4]+lista[i].ventaMes[5])/3;
		promedioVentas = promedioVentas + promedio;
		cout<<vendedor<<"\t $"<<lista[i].ventaMes[3]<<"\t $"<<lista[i].ventaMes[4]<<"\t $"<<lista[i].ventaMes[5]<<"\t $"<<"\t $"<<promedio<<endl;
		}
	
		// Muestra promedio de ventas de todos los vendedores en los 3 meses
		cout<<endl<<"El promedio de ventas del segundo trimestre (por vendedor/meses): "<<"\t $ "<< promedioVentas <<endl;
		cout<<endl<<"El promedio de ventas del segundo trimestre (por vendedor/mes): "<<"\t $ "<< promedioVentas/totalVendedores <<endl;
		cout<<endl<<endl;
	}
	
	//tercer trimestre
	if(totalMeses > 6 && totalMeses < 10){
		promedio = 0; 
		promedioVentas = 0;
		
		cout<<endl<<endl<<"Informe de ventas del tercer trimestre"<<endl<<endl;
		cout<<"Nombre"<<"\t"<<"Mes 1"<<"\t"<<"Mes 2"<<"\t"<<"Mes 3"<<"Promedio ventas"<<endl;
	
		// Muestra informe de ventas por empleado, con promedio de ventas
		for (i = 0; i < totalVendedores; i++) {
		vendedor=lista[i].getnombreVendedor();
		promedio = (lista[i].ventaMes[6]+lista[i].ventaMes[7]+lista[i].ventaMes[8])/3;
		promedioVentas = promedioVentas + promedio;
		cout<<vendedor<<"\t $"<<lista[i].ventaMes[6]<<"\t $"<<lista[i].ventaMes[7]<<"\t $"<<lista[i].ventaMes[8]<<"\t $"<<"\t $"<<promedio<<endl;
		}
	
		// Muestra promedio de ventas de todos los vendedores en los 3 meses
		cout<<endl<<"El promedio de ventas del tercer trimestre (por vendedor/meses): "<<"\t $ "<< promedioVentas <<endl;
		cout<<endl<<"El promedio de ventas del tercer trimestre (por vendedor/mes): "<<"\t $ "<< promedioVentas/totalVendedores <<endl;
		cout<<endl<<endl;
	}
	
	//cuarto trimestre
	if(totalMeses > 9 && totalMeses < 13){
		promedio = 0; 
		promedioVentas = 0;
		
		cout<<endl<<endl<<"Informe de ventas del cuarto trimestre"<<endl<<endl;
		cout<<"Nombre"<<"\t"<<"Mes 1"<<"\t"<<"Mes 2"<<"\t"<<"Mes 3"<<"Promedio ventas"<<endl;
	
		// Muestra informe de ventas por empleado, con promedio de ventas
		for (i = 0; i < totalVendedores; i++) {
		vendedor=lista[i].getnombreVendedor();
		promedio = (lista[i].ventaMes[9]+lista[i].ventaMes[10]+lista[i].ventaMes[11])/3;
		promedioVentas = promedioVentas + promedio;
		cout<<vendedor<<"\t $"<<lista[i].ventaMes[9]<<"\t $"<<lista[i].ventaMes[10]<<"\t $"<<lista[i].ventaMes[11]<<"\t $"<<"\t $"<<promedio<<endl;
		}
	
		// Muestra promedio de ventas de todos los vendedores en los 3 meses
		cout<<endl<<"El promedio de ventas del cuarto trimestre (por vendedor/meses): "<<"\t $ "<< promedioVentas <<endl;
		cout<<endl<<"El promedio de ventas del cuarto trimestre (por vendedor/mes): "<<"\t $ "<< promedioVentas/totalVendedores <<endl;
		cout<<endl<<endl;
	}
}

// Programa Principal
int main() {
	nuevaLista(); // agregar productos a la lista de compra
	//system("pause");
	//system("cls");
	verLista();	// ver lista de compra

	return 0;
}
