

#include "cmplx.cpp"   
#include <sstream>	
#include <fstream>	
#include <iostream>

using namespace std;

int main(){
	
	/*Inicialización de instancias 2 números complejos y 1 resultado*/
	NumeroImaginario NCmplx1;
	NumeroImaginario NCmplx2;
	NumeroImaginario ResCmplx;
	
	/*Inicialización de contexto de registor ostringstream */
	ostringstream document;
	/*Inicialización de variable iteradora*/
	int i = 1;
	
	do{
		system("cls");
		
		/*Variables de control*/
		double nroI1 = 0.0;
		double nroR1 = 0.0;
		
		double nroI2 = 0.0;
		double nroR2 = 0.0;
		
		document<<"OPERADORES COMPLEJOS:"<<"\t";
		
		cout<<"Numero complejo 1"<<endl;
		cout<<"Parte Real: ";
		cin>>nroR1;
		cout<<"Parte imaginaria: ";
		cin>>nroI1;
		cout<<endl;
		
		cout<<"Numero complejo 2"<<endl;
		cout<<"Parte Real: ";
		cin>>nroR2;
		cout<<"Parte imaginaria: ";
		cin>>nroI2;
		cout<<endl;
		
		/*Asignación de valores a los objetos*/
		NCmplx1.setCmplx(nroR1,nroI1);
		NCmplx2.setCmplx(nroR2,nroI2);
		
		/*Mostrar resultados en el documento*/
		document<<"Cmplx 1: "<<nroR1<<"R "<<nroI1<<"I \t"<<"Cmplx 2: "<<nroR2<<"R "<<nroI2<<"I \t"<<endl;
		
		ResCmplx = ResCmplx.sumCmplx(NCmplx1, NCmplx2);
		document<<endl<<"EL RESULTADO DE LA SUMA ES: "<<"\t"<<"Real:"<<"\t"<<ResCmplx.getR()<<"\t"<<"Imaginario:"<<"\t"<<ResCmplx.getI()<<endl;
		
		ResCmplx = ResCmplx.subtrCmplx(NCmplx1, NCmplx2);
		document<<endl<<"EL RESULTADO DE LA RESTA ES: "<<"\t"<<"Real:"<<"\t"<<ResCmplx.getR()<<"\t"<<"Imaginario:"<<"\t"<<ResCmplx.getI()<<endl;
		
		ResCmplx = ResCmplx.multCmplx(NCmplx1, NCmplx2);
		document<<endl<<"EL RESULTADO DE LA MULTIPLICACION ES: "<<"\t"<<"Real:"<<"\t"<<ResCmplx.getR()<<"\t"<<"Imaginario:"<<"\t"<<ResCmplx.getI()<<endl;
		
		ResCmplx = ResCmplx.divCmplx(NCmplx1, NCmplx2);
		document<<endl<<"EL RESULTADO DE LA DIVISION ES: "<<"\t"<<"Real:"<<"\t"<<ResCmplx.getR()<<"\t"<<"Imaginario:"<<"\t"<<ResCmplx.getI()<<endl<<endl;
		
		/*Guardar los resultados*/
		string documento (document.str());
		
		/*Mostrar resultados*/
		cout<<documento<<endl;
		system("pause");
		
		/*Manejo del archivo*/
		ofstream archivo;
		//Acceder a la ruta del archivo
		archivo.open("/Users/pc usuario/desktop/console.log");
		archivo<<documento;
		archivo.close();
		/*Confirmación de seguir*/
		cout<<endl<<"Si desea realizar una nueva operacion digite 1, si no digite cualquier otro numero: ";
		cin>>i;
		
	}while(i == 1);
	
	
	return 0;
}
