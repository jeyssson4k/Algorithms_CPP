
#include<iostream>
using namespace std;

void calculaEnvio(float peso);

int main(){
	
	float pesoPaquete = 0;
	
	
	cout<<"****************************"<<endl;
	cout<<"*CALCULA EL COSTO DEL ENVIO*"<<endl;
	cout<<"****************************"<<endl;
		
	cout<<endl;
	
	cout<<"Por favor, ingrese el peso del paquete que desea enviar: "<<endl;
	cin>>pesoPaquete;
	calculaEnvio(pesoPaquete);
	
	
	
	
	
	
	return 0;
}

void calculaEnvio(float peso){
	
	int valorEnvio = 0;
	int tarifasEnvio[5]={28000,34000,1600,60000,1900};
	
	
	if(peso>0 && peso<=10){
		valorEnvio = tarifasEnvio[0];
	}
	if(peso>10 && peso<=49){
		valorEnvio = tarifasEnvio[1]+((peso-10)*tarifasEnvio[2]);
	}
	if(peso>=50){
		valorEnvio = tarifasEnvio[3]+((peso-50)*tarifasEnvio[4]);
	}
	
	cout<<"********************************"<<endl<<endl;
	cout<<"El costo de su envio es: "<<valorEnvio;
}

