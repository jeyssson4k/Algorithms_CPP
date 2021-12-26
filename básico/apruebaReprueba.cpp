//realizar un programa para determinar si un estudiante aprueba o no la materia
//cuatro notas 
//promedio 3.5 - 5
//si la nota está ente 3 y 3.5 puede recuperar *enviar mensaje*
//"en este momento no tiene aprobada la materia de tecnologia, pero tiene la oportunidad de recuperar"
//(- , 3) "No aprobado"
//(3.5 - 5] "Aprobado"


#include <iostream>
using namespace std;

int main(){
	
	float a=0, b=0, c=0, d=0, e=0;
	
	cout<<"Bienvenido al programa :)"<<endl<<endl;
	
	cout<<"el programa calculara su definitiva y le dira si aprueba, nivela o reprueba..."<<endl<<endl;
	
	cout<<"ingrese su primera nota: ";
	cin>>a;
	
	cout<<endl<<"ingrese su segunda nota: ";
	cin>>b;
	
	cout<<endl<<"ingrese su tercera nota: ";
	cin>>c;
	
	cout<<endl<<"ingrese su cuarta nota: ";
	cin>>d;
	
	e=(a+b+c+d)/4;
	
	cout<<"su promedio es: "<<e<<endl<<endl;
	
	if(e<=3.5){
		if(e>=3 && e<=3.5){
			cout<<"en este momento no tiene aprobada la materia de tecnologia, pero tiene la oportunidad de recuperar"<<endl;
		}
		if(e<3){
			cout<<"No aprobado"<<endl;
		}	
	}else{
		cout<<"Aprobado :)"<<endl;
	}
		
	return 0;
}
