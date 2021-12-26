
#include <iostream>
using namespace std;

class NumeroImaginario{
	private:
		/*
		Creaci�n de variables:
		- i representa la parte imaginaria del n�mero complejo
		- r representa la parte real del n�mero complejo
		*/
		double i;
		double r;
		
	public:
		/*
		Creaci�n de constructores:
		- NumeroImaginario establece los atributos privados de la clase en 0
		- setCmplx establece los atributos privados de la clase en el valor asignado
		*/
		NumeroImaginario();
		double setCmplx(double, double);
		
		/*
		M�todos de retorno
		getI : retorna i
		getR : retorna r
		*/
		double getI();
		double getR();
		
		/*
		M�todos operativos
		sumCmplx : sumar complejos
		subtrCmplx : restar complejos
		multCmplx : multiplicar complejos
		divCmplx : dividir complejos
		*/
		NumeroImaginario sumCmplx(NumeroImaginario, NumeroImaginario);
		NumeroImaginario subtrCmplx(NumeroImaginario, NumeroImaginario);
		NumeroImaginario multCmplx(NumeroImaginario, NumeroImaginario);
		NumeroImaginario divCmplx(NumeroImaginario, NumeroImaginario);
		
};

/*Inicializaci�n de los m�todos de la clase*/

/*Inicializaci�n 1: Constructor default*/
NumeroImaginario::NumeroImaginario(){
	i = 0.0;
	r = 0.0;
}

/*Inicializaci�n 2: Constructor con par�metros__establece los valores*/
double NumeroImaginario::setCmplx(double nr, double ni){
	r = nr;
	i = ni;
}

/*Inicializaci�n 3: M�todos de retorno*/
double NumeroImaginario::getI(){
	return i;
}
double NumeroImaginario::getR(){
	return r;
}

/*Inicializaci�n 4: M�todos operativos*/
NumeroImaginario NumeroImaginario::sumCmplx(NumeroImaginario n1, NumeroImaginario n2){
	/*Variables de resultado*/
	double ri = 0.0;
	double rr = 0.0;
	
	/*Inicializaci�n de un objeto de tipo NumeroImaginario para retornar el valor de la operaci�n*/
	NumeroImaginario ResCmplx;
	
	ri = n1.getI() + n2.getI();
	rr = n1.getR() + n2.getR();
	
	ResCmplx.setCmplx(rr,ri);
	
	return ResCmplx;
}

NumeroImaginario NumeroImaginario::subtrCmplx(NumeroImaginario n1, NumeroImaginario n2){
	/*Variables de resultado*/
	double ri = 0.0;
	double rr = 0.0;
	
	/*Inicializaci�n de un objeto de tipo NumeroImaginario para retornar el valor de la operaci�n*/
	NumeroImaginario ResCmplx;
	
	ri = n1.getI() - n2.getI();
	rr = n1.getR() - n2.getR();
	
	ResCmplx.setCmplx(rr,ri);
	
	return ResCmplx;
}

NumeroImaginario NumeroImaginario::multCmplx(NumeroImaginario n1, NumeroImaginario n2){
	/*Variables de resultado*/
	double ri = 0.0;
	double rr = 0.0;
	
	/*Inicializaci�n de un objeto de tipo NumeroImaginario para retornar el valor de la operaci�n*/
	NumeroImaginario ResCmplx;
	
	ri = n1.getI() * n2.getR() + n2.getI() * n1.getR();
	rr = n1.getR() * n2.getR() - n1.getI() * n2.getI();
	
	ResCmplx.setCmplx(rr,ri);
	
	return ResCmplx;
}

NumeroImaginario NumeroImaginario::divCmplx(NumeroImaginario n1, NumeroImaginario n2){
	/*
	Variables de resultado
	den : denominador del n�mero complejo
	numi : numerador imaginario del n�mero complejo
	numr : numerador real del n�mero complejo
	*/
	double ri = 0.0;
	double rr = 0.0;
	double den = 0.0;
	double numi = 0.0;
	double numr = 0.0;
	
	/*Inicializaci�n de un objeto de tipo NumeroImaginario para retornar el valor de la operaci�n*/
	NumeroImaginario ResCmplx;
	
	den = n2.getR() * n2.getR() + n2.getI() * n2.getI();
	
	numi = n1.getI() * n2.getR() + n2.getI() * n1.getR();
	numr = n1.getR() * n2.getR() + n1.getI() * n2.getI();
	
	ri = numi / den;
	rr = numr / den;

	ResCmplx.setCmplx(rr,ri);
	
	return ResCmplx;
}



