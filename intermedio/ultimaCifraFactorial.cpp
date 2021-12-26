#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main(){
	
	int num = 0, i = 0, j=0;
	
	cin>>j;
	int res [j] = {};
	do{
		cin>>num;
		if(num>4){
			res[i] = 0;
		}else if(num==4){
			res[i] = 4;
		}else if(num==3){
			res[i] = 6;
		}else if(num == 2){
			res[i] = 2;
		}else{
			res[i] = 1;
		}
		
		i++;
	}while(i<j);
	
	for(int h = 0 ; h<j; h++){
		cout<<res[h]<<endl;
	}
	return 0;
}

int factorial (int n){
	if(n==1){
		return 1;
	}else{
		return n*factorial(n-1);
	}
};
