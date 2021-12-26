//programa para venta de zapatos....

#include<iostream>
using namespace std;

int main(){
	
	int ref,size,unid,price,pricet,sale,salet,utility,utilityt;
	float percent;
	char desc [30], aval [1];
	
	cout<<"ADMINISTRADOR DE VENTAS DE ZAPATOS..."<<endl<<endl;
	
	cout<<"Digite la referencia del Zapato: "<<endl;
	cin.getline(desc,30);
	
	cout<<"Digite una descripcion del zapato: "<<endl;
	cin>>desc;
	
	cout<<"Digite la talla: "<<endl;
	cin>>size;
	
	cout<<"Digite la letra si esta disponible o no para la venta S/N: "<<endl;
	cin>>aval;
	
	cout<<"Digite la cantidad de zapatos: "<<endl;
	cin>>unid;
	
	cout<<"Digite el costo del zapato: "<<endl;
	cin>>price;
	
	cout<<"Digita el precio de venta del zapato: "<<endl;
	cin>>sale;
	
	//formulas
	
	pricet=price*unid;
	salet=sale*unid;
	utility=sale-price;
	utilityt=utility*unid;
	percent=(utility*100)/price;
	
	cout<<"Analizando los datos...";
	system("cls");
	
	cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES: "<<endl<<endl;
	cout<<"REFERENCIA: "<<ref<<endl;
	cout<<"DESCRIPCION: "<<desc<<endl;
	cout<<"TALLA: "<<size<<endl;
	cout<<"DISPONIBILIDAD: "<<aval<<endl;
	cout<<"COSTO: "<<price<<endl;
	cout<<"COSTO TOTAL DE "<<unid<<" UNIDADES: "<<pricet<<endl;
	cout<<"PRECIO: "<<sale<<endl;
	cout<<"PRECIO TOTAL DE "<<unid<<" UNIDADES: "<<salet<<endl;
	cout<<"UTILIDAD: "<<utility<<endl;
	cout<<"UTILIDAD TOTAL DE "<<unid<<" UNIDADES: "<<utilityt<<endl;
	cout<<"PORCENTAJE DE UTILIDAD: "<<percent<<endl;
	
	return 0;
	
	//JEYSSON FERNANDEZ LLANES
}
