#include <iostream>
#include <conio.h>
using namespace std;


//declaracion variables globales
string datosEmpleado[4];
float salarioEmpleado[5];
int e = 0;



//funcion solicita datos basicos del empleado
void solicitaDatosBasicos(){
		
	//solicitud de los datos requeridos
	cout<<"Ingrese el nombre del empleado: "<<endl;
	cin>>datosEmpleado[0];
		
	cout<<"********************************"<<endl<<endl;
		
	cout<<"Ingrese el numero de cedula del empleado: "<<endl;
	cin>>datosEmpleado[1];
		
	cout<<"********************************"<<endl<<endl;
	
	cout<<"Ingrese el numero de telefono del empleado: "<<endl;
	cin>>datosEmpleado[2];
		
	cout<<"********************************"<<endl<<endl;
	
	cout<<"Ingrese el cargo del empleado: "<<endl;
	cin>>datosEmpleado[3];
		
	cout<<"********************************"<<endl<<endl;
		
}



//funcion solicita datos sobre el salario del empleado
void solicitaDatosSalario(){
	
	/*solicitud de informacion sobre el salario para realizar los calculos 
	del pago para el empleado */
	cout<<"Ingrese el salario del empleado: "<<endl;
	cin>>salarioEmpleado[0];
		
	cout<<"********************************"<<endl<<endl;
		
	cout<<"Ingrese la cantidad de horas extras trabajadas por el empleado: "<<endl;
	cin>>salarioEmpleado[1];
		
	cout<<"********************************"<<endl<<endl;
	
	cout<<"Ingrese el descuento por prestamos del empleado: "<<endl;
	cin>>salarioEmpleado[2];
		
	cout<<"********************************"<<endl<<endl;
	
	cout<<"Ingrese la cantidad del ahorro voluntario realizado por el empleado: "<<endl;
	cin>>salarioEmpleado[3];
		
	cout<<"********************************"<<endl<<endl;
	
	cout<<"Ingrese el descuento por seguridad social del empleado: "<<endl;
	cin>>salarioEmpleado[4];
		
	cout<<"********************************"<<endl<<endl;
}



//funcion realiza operaciones para determinar el salario del empleado
void calculaSalario(){
	
	int smmlv= 908526;
	float valHoraExtra = 908526/4/6/8;
	//asignacion encargada de calcular el salario
	float valSalario = salarioEmpleado[0]+ (salarioEmpleado[1]*valHoraExtra)-salarioEmpleado[2]-salarioEmpleado[3]-salarioEmpleado[4];
	
	//imprimir el sueldo
	cout<<endl<<"El sueldo final del empleado "<<datosEmpleado[0]<<" es de: "<<valSalario<<endl;
	
	cout<<"********************************"<<endl<<endl;
}



//funcion principal para realizar la ejecucion del programa
int main(){
	do{
		cout<<"****************************"<<endl;
		cout<<"*PROGRAMA BASICO DE NOMINAS*"<<endl;
		cout<<"****************************"<<endl;
		
		cout<<endl;
		
		solicitaDatosBasicos();
		solicitaDatosSalario();
		calculaSalario();
		
		
		cout<<"Si desea calcular el salario de otro empleado digite 0"<<endl;
		cout<<"Si desea finalizar el programa, digite otro numero"<<endl;
		cin>>e;
			
	}while(e==0);
}

