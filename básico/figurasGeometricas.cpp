//Programa para calcular areas de figuras geometricas...

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	float b1, h1, arect;
	float a1, b2, atriang;
	float d, D, aromb;
	float h2, b3, aparalel;
	float B, b4, h3, atrap;
	float r, acirc;
	
	cout<<"PROGRAMA PARA CALCULAR AREAS DE FIGURAS"<<endl<<endl;
	
	cout<<"1. RECTANGULO"<<endl;
	cout<<"Ingrese la base del rectangulo: "<<endl;
	cin>>b1;
	cout<<"Ingrese la altura del rectangulo: "<<endl;
	cin>>h1;
	arect=b1*h1;
	
	cout<<"2. TRIANGULO"<<endl;
	cout<<"Ingrese la base del triangulo: "<<endl;
	cin>>b2;
	cout<<"Ingrese la altura del triangulo: "<<endl;
	cin>>a1;
	atriang=(a1*b2)/2;
	
	cout<<"3. ROMBO"<<endl;
	cout<<"Ingrese la diagonal mayor del rombo: "<<endl;
	cin>>D;
	cout<<"Ingrese la diagonal menor del rombo: "<<endl;
	cin>>d;
	aromb=(D*d)/2;
	
	cout<<"4. PARALELOGRAMO"<<endl;
	cout<<"Ingrese la base del paralelogramo: "<<endl;
	cin>>b3;
	cout<<"ingrese la altura del paralelogramo: "<<endl;
	cin>>h2;
	aparalel=b3*h2;
	
	cout<<"5. TRAPECIO"<<endl;
	cout<<"Ingrese la base mayor del trapecio: "<<endl;
	cin>>B;
	cout<<"Ingrese la base menor del trapecio: "<<endl;
	cin>>b4;
	cout<<"Ingrese la altura del trapecio: "<<endl;
	cin>>h3;
	atrap=((B*b4)/2)*h3;
	
	cout<<"6. CIRCULO"<<endl;
	cout<<"Ingrese el radio del circulo: "<<endl;
	cin>>r;
	acirc=M_PI*pow(r,2);
	
	
	system("cls");
	
	
	cout<<"LOS RESULTADOS SON"<<endl<<endl;
	cout<<"1. RECTANGULO: "<<arect<<endl;
	cout<<"2. TRIANGULO: "<<atriang<<endl;
	cout<<"3. ROMBO: "<<aromb<<endl;
	cout<<"4. PARALELOGRAMO: "<<aparalel<<endl;
	cout<<"5. TRAPECIO: "<<atrap<<endl;
	cout<<"6. CIRCULO: "<<acirc<<endl;
	
	return 0;
	
	//JEYSSON FERNANDEZ LLANES
}
