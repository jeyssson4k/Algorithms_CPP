
#include<iostream>
using namespace std;

int main(){
	int x, y=1, z=1, i=0;
	
	cout<<"Ingrese el numero: "<<endl;
	cin>>x;
	
	while(i<x){
		y=y*z;
		z++;
		i++;
	}
	
	cout<<y;
	
	
	return 0;
}
