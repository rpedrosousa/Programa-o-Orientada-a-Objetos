#include <iostream>
using namespace std;

int main(){
	int *p;
	int numero = 20, valp;
	p=&numero;
	valp=*p;
	
	cout<<"o valor de numero e: "<<numero<<endl;
	cout<<"o valor de valp: "<<valp<<endl;
	*p=30;
	cout<<"o valor de numero e: "<<numero<<endl;
	cout<<"o valor de p e: "<<p<<endl;
	cout<<"o valor apontado e: "<<*p<<endl;
}
