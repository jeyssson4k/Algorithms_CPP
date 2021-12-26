
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;

class inicio{
	public:
		int getVal();
		int getMathO();
};

int inicio::getVal(){
	int valType;
	cout<<"*****************************************"<<endl;
	cout<<"*CALCULADORA DE OPERACIONES BASICAS V1.0*"<<endl;
	cout<<"*****************************************"<<endl<<endl<<endl;
	
	//INDICACIONES PARA EL USUARIO
	cout<<"A CONTINUACION EL SISTEMA LE VA A PEDIR QUE INGRESE EL TIPO DE DATO QUE DESEA OPERAR..."<<endl<<endl;
	
	cout<<"TIPOS DE VARIABLES QUE OFRECE EL SISTEMA:"<<endl<<endl;
	cout<<"1. ENTERO (INT)"<<endl;
	cout<<"2. DECIMAL (DOUBLE)"<<endl;
	cout<<"3. TEXTO (CHAR)"<<endl;
	
	cout<<endl;
	cout<<"INGRESE EL NUMERO DEL TIPO DE DATO DE SU PREFERENCIA: ";
	cin>>valType;
	return valType;
}
int inicio::getMathO(){
	int valOp;
	cout<<endl<<endl<<endl;
	cout<<"**************************"<<endl;
	cout<<"*SELECCION DE OPERACIONES*"<<endl;
	cout<<"**************************"<<endl<<endl<<endl;
	
	//INDICACIONES PARA EL USUARIO
	cout<<"A CONTINUACION EL SISTEMA LE VA A PEDIR QUE INGRESE EL TIPO DE OPERACION A REALIZAR..."<<endl<<endl;
	
	cout<<"TIPOS DE OPERACIONES QUE OFRECE EL SISTEMA:"<<endl<<endl;
	cout<<"1. SUMA"<<endl;
	cout<<"2. RESTA"<<endl;
	cout<<"3. MULTIPLICACION"<<endl;
	cout<<"4. DIVISION"<<endl;
	cout<<"5. POTENCIA"<<endl;
	
	cout<<endl;
	cout<<"INGRESE EL NUMERO DEL TIPO DE OPERACION QUE DESEA REALIZAR: ";
	cin>>valOp;
	return valOp;
}

class mathSolve{
	public:
		int sum(int n, int m, int& res);
		double sum(double n, double m, double& res);
		char sum(char n[], char m[], int& res,char o[11]);
	
		int subtr(int n, int m, int& res);
		double subtr(double n, double m, double& res);
		char subtr(char n[], char m[], int& res,char o[11]);
		
		int mult(int n, int m, int& res);
		double mult(double n, double m, double& res);
		char mult(char n[], char m[], int& res,char o[11]);
		
		int div(int n, int m, int& res);
		double div(double n, double m, double& res);
		char div(char n[], char m[], char o[11]);
		
		int empow(int n, int m, int& res);
		double empow(double n, double m, double& res);
		char empow(char n[], char m[], char o[11]);
};

//operaciones de suma
int mathSolve::sum(int n, int m, int& res){
	int z = 0;
	res = n+m;
	z = res;
	
	return z;
}
double mathSolve::sum(double n, double m, double& res){
	double z = 0;
	res = n+m;
	z = res;
	
	return z;
}
char mathSolve::sum(char n[11], char m[11], int& res, char o[11]="0"){
	
	int ni;
	int mi;
	int oi;
	int cont = 0;
	
	ni = atoi(n);
	mi = atoi(m);
	oi = atoi(o);
	
	res = ni+mi+oi;
	cout<<"El resultado es: "<<res<<endl;	
}

//operaciones de resta
int mathSolve::subtr(int n, int m, int& res){
	int z = 0;
	if(m==0){
		z = n;
	}else{
		res = m-n;
		z = res;
	}
	
	return z;
}
double mathSolve::subtr(double n, double m, double& res){
	double z = 0;
	if(m==0){
		z = n;
	}else{
		res = m-n;
		z = res;
	}

	return z;
}
char mathSolve::subtr(char n[11], char m[11], int& res, char o[11]="0"){
	
	int ni;
	int mi;
	int oi;
	int cont = 0;
	
	ni = atoi(n);
	mi = atoi(m);
	oi = atoi(o);
	
	res = ni-mi;
	res = res-oi;
	
	cout<<"El resultado es: "<<res<<endl;	
}

//operaciones de multiplicación
int mathSolve::mult(int n, int m, int& res){
	int z = 0;
	res = n*m;
	z = res;
	
	return z;
}
double mathSolve::mult(double n, double m, double& res){
	double z = 0;
	res = n*m;
	z = res;
	
	return z;
}
char mathSolve::mult(char n[11], char m[11], int& res, char o[11]="1"){
	
	int ni;
	int mi;
	int oi;
	int cont = 0;
	
	ni = atoi(n);
	mi = atoi(m);
	oi = atoi(o);
	
	res = ni*mi;
	res = res*oi;
	
	cout<<"El resultado es: "<<res<<endl;	
}

//operaciones de división
int mathSolve::div(int n, int m, int& res){
	int z = 0;
	res = n/m;
	z = res;
	
	return z;
}
double mathSolve::div(double n, double m, double& res){
	double z = 0;
	res = n/m;
	z = res;
	
	return z;
}
char mathSolve::div(char n[11], char m[11], char o[11]="1"){
	
	int ni;
	int mi;
	int oi;
	int res = 0;
	int residuo = 0;
	
	ni = atoi(n);
	mi = atoi(m);
	oi = atoi(o);
	
	res = ni/mi;
	residuo = ni%mi;
	res = res/oi;
	
	
	cout<<"El resultado es: "<<res<<endl;
	cout<<"Residuo: "<<residuo<<endl;
}

//operaciones de potencia
int mathSolve::empow(int n, int m, int& res){
	int z = 0;
	
	if(m == 0){
		return 1;
	}else if(m == 1){
		return n;
	}else{
		res = pow(n,m);
		z = res;
	
		return z;
	}
	
}
double mathSolve::empow(double n, double m, double& res){
	double z = 0;
	
	if(m == 0){
		return 1;
	}else if(m == 1){
		return n;
	}else{
		res = pow(n,m);
		z = res;
	
		return z;
	}
}
char mathSolve::empow(char n[11], char m[11], char o[11]="1"){
	
	int ni;
	int mi;
	int oi;
	int res = 0;
	int residuo = 0;
	
	ni = atoi(n);
	mi = atoi(m);
	oi = atoi(o);
	
	if(mi == 0){
		cout<<"El resultado es: 1"<<endl;
	}else if(mi == 1){
		cout<<"El resultado es: "<<ni<<endl;
	}else{
		res = pow(ni,mi);
		cout<<"El resultado es: "<<res<<endl;
	}
}

//JEYSSON FERNANDEZ LLANES
//23 DE SEPTIEMBRE DEL 2021
