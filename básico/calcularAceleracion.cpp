//realizar una aplicación para calcular la aceleración de un cuerpo en movimiento
//usando la fórmula a=(Vf-Vo)/t

#include<iostream>
using namespace std;

int main(){
	float Vf=0, Vo=0, t=0;
	
	cout<<"programa para calcular la aceleracion"<<endl;
	cout<<"a continuacion ingrese los valores que se solicitan para continuar..."<<endl<<endl;
	
	cout<<"ingrese la velocidad inicial: "<<endl;
	cin>>Vo;
	
	cout<<"ingrese la velocidad final: "<<endl;
	cin>>Vf;
	
	cout<<"ingrese el tiempo de la trayectoria: "<<endl;
	cin>>t;
	
	cout<<endl<<endl;
	
	cout<<"la aceleracion es: "<<(Vf-Vo)/t<<endl;
	
	return 0;
}
