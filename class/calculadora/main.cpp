
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "attr.h"

using namespace std;




int main(){
	//crear objetos 
	inicio init;
	mathSolve ops;
	
	//variable iteradora bucle principal
	int mainBucle = 1;
	

do{
	//variables capturadoras del retorno del menu
	int tipoVariable = init.getVal();
	int selecOperacion = init.getMathO();
	
	//variables operadoras
	int ai=0, bi=0, c=0, j=0, i=0, resi=0,jd=0,id=0,jc=0,ic=0,tc=0,resc=0;
	double ad=0, bd=0, resd=0;	
	char ac[11]="0", bc[11]="0", cc[11]="0";
	
	if(tipoVariable == 1){
		//reinicio de variables
		resi = 0;
		ai = 0;
		bi = 0;
		i = 0;
		j = 0;
		
		if(selecOperacion == 1){			
			cout<<"Seleccionaste realizar una suma con numeros enteros..."<<endl<<endl;
			cout<<"Digite la cantidad de numeros enteros que deseas sumar: ";
			cin>>j;
			cout<<endl<<endl;
			do{
				cout<<"Digite el valor que quiere sumar: ";
				cin>>ai;
				bi = ops.sum(ai,bi,resi);
				cout<<"Resultado: "<<bi<<endl;
				i++;	
			}while(i<j);
		}
		if(selecOperacion == 2){
			cout<<"Seleccionaste realizar una resta con numeros enteros..."<<endl<<endl;
			cout<<"Digite la cantidad de numeros enteros que deseas restar: ";
			cin>>j;
			cout<<endl<<endl;
			do{
				cout<<"Digite el valor que quiere restar: ";
				cin>>ai;
				bi = ops.subtr(ai,bi,resi);
				cout<<"Resultado: "<<bi<<endl;
				i++;	
			}while(i<j);
		}
		if(selecOperacion == 3){
			//el módulo de la multiplicación es 1 no 0
			bi = 1;
			cout<<"Seleccionaste realizar una multiplicacion con numeros enteros..."<<endl<<endl;
			cout<<"Digite la cantidad de numeros enteros que deseas multiplicar: ";
			cin>>j;
			cout<<endl<<endl;
			do{
				cout<<"Digite el valor que quiere multiplicar: ";
				cin>>ai;
				bi = ops.mult(ai,bi,resi);
				cout<<"Resultado: "<<bi<<endl;
				i++;	
			}while(i<j);
		}
		if(selecOperacion == 4){
			//el módulo de la división es 1 no 0
			//Para los números enteros se cambia el proceso 
			cout<<"Seleccionaste realizar una division con numeros enteros..."<<endl<<endl;
			cout<<"Digite la cantidad de divisiones con numeros enteros que deseas realizar: ";
			cin>>j;
			cout<<endl<<endl;
			do{
				int residuo = 0;
				resi = 0;
				cout<<"Digite el valor que quiere dividir: ";
				cin>>ai;
				cout<<endl<<"Digite el valor divisor: ";
				cin>>bi;
				residuo = ai%bi;
				resi = ops.div(ai,bi,resi);
				cout<<"Resultado: "<<resi<<endl;
				cout<<"Residuo: "<<residuo<<endl;
				i++;	
			}while(i<j);
		}
		if(selecOperacion == 5){
			//Si el exponente es 0 retorna 1, si el exponente es 1 retorna la base 
			cout<<"Seleccionaste realizar una potencia con numeros enteros..."<<endl<<endl;
			cout<<"Digite la cantidad de potencias con numeros enteros que deseas realizar: ";
			cin>>j;
			cout<<endl<<endl;
			do{
				resi = 0;
				
				cout<<"Digite el valor de la base: ";
				cin>>ai;
				cout<<endl<<"Digite el valor del exponente: ";
				cin>>bi;
				
				resi = ops.empow(ai,bi,resi);
				cout<<"Resultado: "<<resi<<endl;
				i++;	
			}while(i<j);
		}
	}
	if(tipoVariable == 2){
		//reinicio de variables
		resd = 0;
		ad = 0;
		bd = 0;
		jd = 0;
		id = 0;
		
		if(selecOperacion == 1){
			cout<<"Seleccionaste realizar una suma con numeros decimales..."<<endl<<endl;
			cout<<"Digite la cantidad de numeros decimales que deseas sumar: ";
			cin>>jd;
			cout<<endl<<endl;
			do{
				cout<<"Digite el valor que quiere sumar: ";
				cin>>ad;
				bd = ops.sum(ad,bd,resd);
				cout<<"Resultado: "<<bd<<endl;
				id++;	
			}while(id<jd);
		}
		if(selecOperacion == 2){
			cout<<"Seleccionaste realizar una resta con numeros decimales..."<<endl<<endl;
			cout<<"Digite la cantidad de numeros decimales que deseas restar: ";
			cin>>jd;
			cout<<endl<<endl;
			do{
				cout<<"Digite el valor que quiere restar: ";
				cin>>ad;
				bd = ops.subtr(ad,bd,resd);
				cout<<"Resultado: "<<bd<<endl;
				id++;	
			}while(id<jd);
		}
		if(selecOperacion == 3){
			//el módulo de la multiplicación es 1 no 0
			bd = 1;
			cout<<"Seleccionaste realizar una multiplicacion con numeros decimales..."<<endl<<endl;
			cout<<"Digite la cantidad de numeros decimales que deseas multiplicar: ";
			cin>>jd;
			cout<<endl<<endl;
			do{
				cout<<"Digite el valor que quiere multiplicar: ";
				cin>>ad;
				bd = ops.mult(ad,bd,resd);
				cout<<"Resultado: "<<bd<<endl;
				id++;	
			}while(id<jd);
		}
		if(selecOperacion == 4){
			//el módulo de la división es 1 no 0
			bd = 1;
			cout<<"Seleccionaste realizar una division con numeros decimales..."<<endl<<endl;
			cout<<"Digite la cantidad de divisiones con numeros decimales que deseas realizar: ";
			cin>>jd;
			cout<<endl<<endl;
			do{
				resd = 0;
				cout<<"Digite el valor que quiere dividir: ";
				cin>>ad;
				cout<<endl<<"Digite el valor divisor: ";
				cin>>bd;
				resd = ops.div(ad,bd,resd);
				cout<<"Resultado: "<<resd<<endl;
				id++;	
			}while(id<jd);
		}
		if(selecOperacion == 5){
			//Si el exponente es 0 retorna 1, si el exponente es 1 retorna la base 
			cout<<"Seleccionaste realizar una potencia con numeros decimales..."<<endl<<endl;
			cout<<"Digite la cantidad de potencias con numeros decimales que deseas realizar: ";
			cin>>jd;
			cout<<endl<<endl;
			do{
				resd = 0;
				
				cout<<"Digite el valor de la base: ";
				cin>>ad;
				cout<<endl<<"Digite el valor del exponente: ";
				cin>>bd;
				
				resd = ops.empow(ad,bd,resd);
				cout<<"Resultado: "<<resd<<endl;
				id++;	
			}while(id<jd);
		}
	}
	if(tipoVariable == 3){
		//NO ES NECESARIO EL REINICIO DE VARIABLES YA QUE EL VALOR NO SE RETORNA MODIFICADO GLOBALMENTE
		
		if(selecOperacion == 1){
			cout<<"Seleccionaste realizar una suma con texto!!!!!"<<endl;
			cout<<"El sistema no puede realizar una suma secuencial, por lo tanto te pide dos numeros para sumarlos"<<endl;
			cout<<"Si quieres continuar con la suma, digita el resultado de la suma anterior :)"<<endl<<endl;
			cout<<"Digite la cantidad de sumas con texto que deseas realizar: ";
			cin>>jc;
			cout<<endl<<endl;
			do{
				cout<<"Digite el primer valor que quiere sumar: ";
				cin>>ac;
				cout<<endl;
				cout<<"Digite el segundo valor que quiere sumar: ";
				cin>>bc;
				cout<<"Responda SI (1) o NO (0):"<<endl;
				cout<<"Pregunta: Desea ingresar un tercer valor.... ";
				cin>>tc;
				
				if(tc==1){
					cout<<"Digite el tercer valor que quiere sumar: ";
					cin>>cc;
					ops.sum(ac,bc,resc,cc);
					cout<<endl;
				}
				else{
					ops.sum(ac,bc,resc);
					cout<<endl;	
				}
				ic++;	
			}while(ic<jc);
		}
		if(selecOperacion == 2){
			cout<<"Seleccionaste realizar una resta con texto!!!!!"<<endl;
			cout<<"El sistema no puede realizar una resta secuencial, por lo tanto te pide dos numeros para restarlos"<<endl;
			cout<<"Si quieres continuar con la resta, digita el resultado de la resta anterior :)"<<endl<<endl;
			cout<<"Digite la cantidad de restas con texto que deseas realizar: ";
			cin>>jc;
			cout<<endl<<endl;
			do{
				cout<<"Digite el primer valor que quiere restar: ";
				cin>>ac;
				cout<<endl;
				cout<<"Digite el segundo valor que quiere restar: ";
				cin>>bc;
				cout<<"Responda SI (1) o NO (0):"<<endl;
				cout<<"Pregunta: Desea ingresar un tercer valor.... ";
				cin>>tc;
				
				if(tc==1){
					cout<<"Digite el tercer valor que quiere restar: ";
					cin>>cc;
					ops.subtr(ac,bc,resc,cc);
					cout<<endl;	
				}
				else{
					ops.subtr(ac,bc,resc);
					cout<<endl;
				}
				ic++;	
			}while(ic<jc);
		}
		if(selecOperacion == 3){
			//el módulo de la multiplicación es 1 no 0

			cout<<"Seleccionaste realizar una multiplicacion con texto!!!!!"<<endl;
			cout<<"El sistema no puede realizar una multiplicacion secuencial, por lo tanto te pide dos numeros para multiplicarlos"<<endl;
			cout<<"Si quieres continuar con la multiplicacion, digita el resultado de la multiplicacion anterior :)"<<endl<<endl;
			cout<<"Digite la cantidad de multiplicaciones con texto que deseas realizar: ";
			cin>>jc;
			cout<<endl<<endl;
			do{
				cout<<"Digite el primer valor que quiere multiplicar: ";
				cin>>ac;
				cout<<endl;
				cout<<"Digite el segundo valor que quiere multiplicar: ";
				cin>>bc;
				cout<<"Responda SI (1) o NO (0):"<<endl;
				cout<<"Pregunta: Desea ingresar un tercer valor.... ";
				cin>>tc;
				
				if(tc==1){
					cout<<"Digite el tercer valor que quiere multiplicar: ";
					cin>>cc;
					ops.mult(ac,bc,resc,cc);
					cout<<endl;	
				}
				else{
					ops.mult(ac,bc,resc);
					cout<<endl;
				}
				ic++;	
			}while(ic<jc);
		}
		if(selecOperacion == 4){
			//el módulo de la división es 1 no 0

			cout<<"Seleccionaste realizar una division con texto!!!!!"<<endl;
			cout<<"El sistema no puede realizar una division secuencial, por lo tanto te pide dos numeros para dividirlos"<<endl;
			cout<<"Si quieres continuar con la division, digita el resultado de la division anterior :)"<<endl<<endl;
			cout<<"Digite la cantidad de divisiones con texto que deseas realizar: ";
			cin>>jc;
			cout<<endl<<endl;
			do{
				cout<<"Digite el primer valor que quiere dividir: ";
				cin>>ac;
				cout<<endl;
				cout<<"Digite el valor divisor: ";
				cin>>bc;
				
				ops.div(ac,bc);
				cout<<endl;	
				
				ic++;	
			}while(ic<jc);
		}
		if(selecOperacion == 5){
			//Si el exponente es 0 retorna 1, si el exponente es 1 retorna la base 

			cout<<"Seleccionaste realizar una potencia con texto!!!!!"<<endl;
			cout<<"Digite la cantidad de divisiones con texto que deseas realizar: ";
			cin>>jc;
			cout<<endl<<endl;
			do{
				cout<<"Digite el primer valor de la base: ";
				cin>>ac;
				cout<<endl;
				cout<<"Digite el valor del exponente: ";
				cin>>bc;
				
				ops.empow(ac,bc);
				cout<<endl;	
				
				ic++;	
			}while(ic<jc);
		}
	}	
	
	cout<<"Si desea realizar una nueva operacion digite 1, de lo contrario digite cualquier otro numero: ";
	cin>>mainBucle;
	tipoVariable = 0;
	selecOperacion = 0;
	
	system("cls");
	system("pause");

}while(mainBucle == 1);
		
	cout<<"GRACIAS POR USAR EL PROGRAMA :).";
	return 0;
}
