
#include <iostream>
using namespace std;

class NumeroImaginario{
	private:
		/*
		Creación de variables:
		- i representa la parte imaginaria del número complejo
		- r representa la parte real del número complejo
		*/
		double i;
		double r;
		
	public:
		/*
		Creación de constructores:
		- NumeroImaginario establece los atributos privados de la clase en 0
		- setCmplx establece los atributos privados de la clase en el valor asignado
		*/
		NumeroImaginario();
		double setCmplx(double, double);
		
		/*
		Métodos de retorno
		getI : retorna i
		getR : retorna r
		*/
		double getI();
		double getR();
		
		/*
		Métodos operativos
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

/*Inicialización de los métodos de la clase*/

/*Inicialización 1: Constructor default*/
NumeroImaginario::NumeroImaginario(){
	i = 0.0;
	r = 0.0;
}

/*Inicialización 2: Constructor con parámetros__establece los valores*/
double NumeroImaginario::setCmplx(double nr, double ni){
	r = nr;
	i = ni;
}

/*Inicialización 3: Métodos de retorno*/
double NumeroImaginario::getI(){
	return i;
}
double NumeroImaginario::getR(){
	return r;
}

/*Inicialización 4: Métodos operativos*/
NumeroImaginario NumeroImaginario::sumCmplx(NumeroImaginario n1, NumeroImaginario n2){
	/*Variables de resultado*/
	double ri = 0.0;
	double rr = 0.0;
	
	/*Inicialización de un objeto de tipo NumeroImaginario para retornar el valor de la operación*/
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
	
	/*Inicialización de un objeto de tipo NumeroImaginario para retornar el valor de la operación*/
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
	
	/*Inicialización de un objeto de tipo NumeroImaginario para retornar el valor de la operación*/
	NumeroImaginario ResCmplx;
	
	ri = n1.getI() * n2.getR() + n2.getI() * n1.getR();
	rr = n1.getR() * n2.getR() - n1.getI() * n2.getI();
	
	ResCmplx.setCmplx(rr,ri);
	
	return ResCmplx;
}

NumeroImaginario NumeroImaginario::divCmplx(NumeroImaginario n1, NumeroImaginario n2){
	/*
	Variables de resultado
	den : denominador del número complejo
	numi : numerador imaginario del número complejo
	numr : numerador real del número complejo
	*/
	double ri = 0.0;
	double rr = 0.0;
	double den = 0.0;
	double numi = 0.0;
	double numr = 0.0;
	
	/*Inicialización de un objeto de tipo NumeroImaginario para retornar el valor de la operación*/
	NumeroImaginario ResCmplx;
	
	den = n2.getR() * n2.getR() + n2.getI() * n2.getI();
	
	numi = n1.getI() * n2.getR() + n2.getI() * n1.getR();
	numr = n1.getR() * n2.getR() + n1.getI() * n2.getI();
	
	ri = numi / den;
	rr = numr / den;

	ResCmplx.setCmplx(rr,ri);
	
	return ResCmplx;
}



