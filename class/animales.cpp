#include <iostream>
using namespace std;

//Clases para animales
class mamifero{
    public:
    	char nombreAnimal[20];
    	int getHabitat();
    	int getPoblation();
    
};
class reptil{
    public:
    	char nombreAnimal[20];
    	int getHabitat();
    	int getPoblation();
};
class ave{
    public:
    	char nombreAnimal[20];
    	int getHabitat();
    	int getPoblation();
};

//definición de las funciones
int mamifero::getHabitat(){
	int x;
	cout<<"*******************************"<<endl;
	cout<<"*ESTABLECER HABITAT DEL ANIMAL*"<<endl;
	cout<<"*******************************"<<endl<<endl<<endl;
	
	cout<<"DIGITA EL NUMERO DEL HABITAT DE TU ANIMAL PARA ASIGNARLA: "<<endl;
	cout<<"1: BOSQUE"<<endl;
	cout<<"2: SELVA"<<endl;
	cout<<"3: RIO"<<endl;
	cout<<"4: OCEANO"<<endl;
	cout<<"5: MAR"<<endl;
	cout<<"6: MONTANAS"<<endl;
	cout<<"7: ARTICO"<<endl;
	cout<<"8: DESIERTO"<<endl;
	cout<<"9: PANTANO"<<endl;
	cout<<"10: ACANTILADO"<<endl;
	cout<<"11: NEVADO"<<endl;
	cout<<"SI EL HABITAT NO SE ENCUENTRA, NO SABE O NO DESEA INDICARLO..."<<endl;
	cout<<"DIGITE 0 Y SE ESTABLECERA UN HABITAT POR DEFECTO..."<<endl;
	
	cin>>x;
	
	return x; 
	
}
int reptil::getHabitat(){
	int x;
	cout<<"*******************************"<<endl;
	cout<<"*ESTABLECER HABITAT DEL ANIMAL*"<<endl;
	cout<<"*******************************"<<endl<<endl<<endl;
	
	cout<<"DIGITA EL NUMERO DEL HABITAT DE TU ANIMAL PARA ASIGNARLA: "<<endl;
	cout<<"1: BOSQUE"<<endl;
	cout<<"2: SELVA"<<endl;
	cout<<"3: RIO"<<endl;
	cout<<"4: OCEANO"<<endl;
	cout<<"5: MAR"<<endl;
	cout<<"6: MONTANAS"<<endl;
	cout<<"7: ARTICO"<<endl;
	cout<<"8: DESIERTO"<<endl;
	cout<<"9: PANTANO"<<endl;
	cout<<"10: ACANTILADO"<<endl;
	cout<<"11: NEVADO"<<endl;
	cout<<"SI EL HABITAT NO SE ENCUENTRA, NO SABE O NO DESEA INDICARLO..."<<endl;
	cout<<"DIGITE 0 Y SE ESTABLECERA UN HABITAT POR DEFECTO..."<<endl;
	
	cin>>x;
	
	return x; 
	
}
int ave::getHabitat(){
	int x;
	cout<<"*******************************"<<endl;
	cout<<"*ESTABLECER HABITAT DEL ANIMAL*"<<endl;
	cout<<"*******************************"<<endl<<endl<<endl;
	
	cout<<"DIGITA EL NUMERO DEL HABITAT DE TU ANIMAL PARA ASIGNARLA: "<<endl;
	cout<<"1: BOSQUE"<<endl;
	cout<<"2: SELVA"<<endl;
	cout<<"3: RIO"<<endl;
	cout<<"4: OCEANO"<<endl;
	cout<<"5: MAR"<<endl;
	cout<<"6: MONTANAS"<<endl;
	cout<<"7: ARTICO"<<endl;
	cout<<"8: DESIERTO"<<endl;
	cout<<"9: PANTANO"<<endl;
	cout<<"10: ACANTILADO"<<endl;
	cout<<"11: NEVADO"<<endl;
	cout<<"SI EL HABITAT NO SE ENCUENTRA, NO SABE O NO DESEA INDICARLO..."<<endl;
	cout<<"DIGITE 0 Y SE ESTABLECERA UN HABITAT POR DEFECTO..."<<endl;
	
	cin>>x;
	
	return x; 
	
}
int mamifero::getPoblation(){
	int poblation;
	cout<<"**********************************"<<endl;
	cout<<"*ESTABLECER EXISTENCIA DEL ANIMAL*"<<endl;
	cout<<"**********************************"<<endl<<endl<<endl;
	
	cout<<"Si el animal esta extinto ingrese 1, de lo contrario ingrese 0: ";
	cin>>poblation;
	
	return poblation;
}
int reptil::getPoblation(){
	int poblation;
	cout<<"**********************************"<<endl;
	cout<<"*ESTABLECER EXISTENCIA DEL ANIMAL*"<<endl;
	cout<<"**********************************"<<endl<<endl<<endl;
	
	cout<<"Si el animal esta extinto ingrese 1, de lo contrario ingrese 0: ";
	cin>>poblation;
	
	return poblation;
}
int ave::getPoblation(){
	int poblation;
	cout<<"**********************************"<<endl;
	cout<<"*ESTABLECER EXISTENCIA DEL ANIMAL*"<<endl;
	cout<<"**********************************"<<endl<<endl<<endl;
	
	cout<<"Si el animal esta extinto ingrese 1, de lo contrario ingrese 0: ";
	cin>>poblation;
	
	return poblation;
}

class inicio{
	public:
		int defCantidad();
		int getRefAnimal();
		void startMamifero();
		void startReptil();
		void startAve();	
};
int inicio::defCantidad(){
	int cantidad;
	cout<<"*****************************"<<endl;
	cout<<"*REGISTRO DE ANIMALES V1.3.5*"<<endl;
	cout<<"*****************************"<<endl<<endl<<endl;
	
	cout<<"DIGITE LA CANTIDAD DE ANIMALES QUE DESEAS REGISTRAR..."<<endl;
	cin>>cantidad;
	return cantidad;
}
int inicio::getRefAnimal(){
		
	int selector;
	cout<<"ESCOGE EL TIPO DE ANIMAL QUE DESEAS REGISTRAR..."<<endl;
	cout<<"1. MAMIFERO"<<endl;
	cout<<"2. REPTIL"<<endl;
	cout<<"3. AVE"<<endl;
	
	cin>>selector;
	
	return selector;
}
void inicio::startMamifero(){
	mamifero animalSeleccionado;
	
	cout<<"DIGITE EL NOMBRE DEL MAMIFERO SIN ESPACIOS: ";
	cin>>animalSeleccionado.nombreAnimal;
	
	int habitatAnimal = animalSeleccionado.getHabitat();

	int existencia = animalSeleccionado.getPoblation();
	
	
	cout<<endl<<endl;
	cout<<"********************************************"<<endl;
	cout<<"LA FICHA DEL MAMIFERO REGISTRADO ES:"<<endl<<endl;
	cout<<"NOMBRE DEL MAMIFERO: "<<animalSeleccionado.nombreAnimal<<endl;
	
	//IMPRIMIR HABITAT
	cout<<"HABITAT DEL MAMIFERO: ";
	switch(habitatAnimal){
			case 1:
				cout<<"BOSQUE"<<endl;
				break;
			case 2:
				cout<<"SELVA"<<endl;
				break;
			case 3:
				cout<<"RIO"<<endl;
				break;
			case 4:
				cout<<"OCEANO"<<endl;
				break;
			case 5:
				cout<<"MAR"<<endl;
				break;
			case 6:
				cout<<"MONTANAS"<<endl;
				break;
			case 7:
				cout<<"ARTICO"<<endl;
				break;
			case 8:
				cout<<"DESIERTO"<<endl;
				break;
			case 9:
				cout<<"PANTANO"<<endl;
				break;
			case 10:
				cout<<"ACANTILADO"<<endl;
				break;
			case 11:
				cout<<"NEVADO"<<endl;
				break;
			default:
				cout<<"BOSQUE"<<endl;
		}
	
	cout<<"EL ANIMAL SE ENCUENTRA EXTINTO: ";
	if(existencia != 0 && existencia != 1){
		cout<<"NO SE REGISTRO EL DATO CORRECTAMENTE"<<endl<<endl<<endl;
	}
	if(existencia == 0){
		cout<<"NO"<<endl<<endl<<endl;
	}
	if(existencia == 1){
		cout<<"SI"<<endl<<endl<<endl;
	}
}
void inicio::startReptil(){
	reptil animalSeleccionado;
	
	cout<<"DIGITE EL NOMBRE DEL REPTIL SIN ESPACIOS: ";
	cin>>animalSeleccionado.nombreAnimal;
	
	int habitatAnimal = animalSeleccionado.getHabitat();

	int existencia = animalSeleccionado.getPoblation();
	
	
	cout<<endl<<endl;
	cout<<"********************************************"<<endl;
	cout<<"LA FICHA DEL REPTIL REGISTRADO ES:"<<endl<<endl;
	cout<<"NOMBRE DEL REPTIL: "<<animalSeleccionado.nombreAnimal<<endl;
	
	//IMPRIMIR HABITAT
	cout<<"HABITAT DEL REPTIL: ";
	switch(habitatAnimal){
			case 1:
				cout<<"BOSQUE"<<endl;
				break;
			case 2:
				cout<<"SELVA"<<endl;
				break;
			case 3:
				cout<<"RIO"<<endl;
				break;
			case 4:
				cout<<"OCEANO"<<endl;
				break;
			case 5:
				cout<<"MAR"<<endl;
				break;
			case 6:
				cout<<"MONTANAS"<<endl;
				break;
			case 7:
				cout<<"ARTICO"<<endl;
				break;
			case 8:
				cout<<"DESIERTO"<<endl;
				break;
			case 9:
				cout<<"PANTANO"<<endl;
				break;
			case 10:
				cout<<"ACANTILADO"<<endl;
				break;
			case 11:
				cout<<"NEVADO"<<endl;
				break;
			default:
				cout<<"BOSQUE"<<endl;
		}
	
	cout<<"EL ANIMAL SE ENCUENTRA EXTINTO: ";
	if(existencia != 0 && existencia != 1){
		cout<<"NO SE REGISTRO EL DATO CORRECTAMENTE"<<endl<<endl<<endl;
	}
	if(existencia == 0){
		cout<<"NO"<<endl<<endl<<endl;
	}
	if(existencia == 1){
		cout<<"SI"<<endl<<endl<<endl;
	}
}
void inicio::startAve(){
	ave animalSeleccionado;
	
	cout<<"DIGITE EL NOMBRE DEL AVE SIN ESPACIOS: ";
	cin>>animalSeleccionado.nombreAnimal;
	
	int habitatAnimal = animalSeleccionado.getHabitat();

	int existencia = animalSeleccionado.getPoblation();
	
	
	cout<<endl<<endl;
	cout<<"********************************************"<<endl;
	cout<<"LA FICHA DEL AVE REGISTRADO ES:"<<endl<<endl;
	cout<<"NOMBRE DEL AVE: "<<animalSeleccionado.nombreAnimal<<endl;
	
	//IMPRIMIR HABITAT
	cout<<"HABITAT DEL AVE: ";
	switch(habitatAnimal){
			case 1:
				cout<<"BOSQUE"<<endl;
				break;
			case 2:
				cout<<"SELVA"<<endl;
				break;
			case 3:
				cout<<"RIO"<<endl;
				break;
			case 4:
				cout<<"OCEANO"<<endl;
				break;
			case 5:
				cout<<"MAR"<<endl;
				break;
			case 6:
				cout<<"MONTANAS"<<endl;
				break;
			case 7:
				cout<<"ARTICO"<<endl;
				break;
			case 8:
				cout<<"DESIERTO"<<endl;
				break;
			case 9:
				cout<<"PANTANO"<<endl;
				break;
			case 10:
				cout<<"ACANTILADO"<<endl;
				break;
			case 11:
				cout<<"NEVADO"<<endl;
				break;
			default:
				cout<<"BOSQUE"<<endl;
		}
	
	cout<<"EL ANIMAL SE ENCUENTRA EXTINTO: ";
	if(existencia != 0 && existencia != 1){
		cout<<"NO SE REGISTRO EL DATO CORRECTAMENTE"<<endl<<endl<<endl;
	}
	if(existencia == 0){
		cout<<"NO"<<endl<<endl<<endl;
	}
	if(existencia == 1){
		cout<<"SI"<<endl<<endl<<endl;
	}
}
int main(){
	inicio init;
	int i = 1;
	int cantidadAnimales = init.defCantidad(); //el valor que retorna es para el bucle principal 
	while(i <= cantidadAnimales){
		int selectorAnimal = init.getRefAnimal(); //el valor que retorna es para escoger la función de asignar animales.
		if(selectorAnimal == 1){
			init.startMamifero();
			i++;
		}
		if(selectorAnimal == 2){
			init.startReptil();
			i++;
		}
		if(selectorAnimal == 3){
			init.startAve();
			i++;
		}
	}
	
	cout<<"MUCHAS GRACIAS POR USAR EL PROGRAMA :)"<<endl;
	cout<<"Jeysson :)";
    return 0;
}
