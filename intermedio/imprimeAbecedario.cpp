#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	queue <char> c;
	 for (int i='A'; i<='Z';i++){
	 	c.push(i);
	 }
	 while(! c.empty()){
	 	cout<<c.front()<<" ";
	 	c.pop();
	 }
	return 0;
}
