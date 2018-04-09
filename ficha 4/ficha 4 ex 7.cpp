#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int num1,num2,i,x;

main (){
	cout<< "Introduza o numero: ";
	cin >> num1;
	cout<< "Introduza um outro numero: ";
	cin >> num2;
	
	for(x=0;num2>num1;x++){
		cout<<"Numero Invalido"<<endl;
		cout<< "Introduza o numero: ";
		cin >> num1;
		cout<< "Introduza um outro numero: ";
		cin >> num2;
 	}
	for(i=num2+1;i<num1;i++){
		cout<<i<<endl;
	}
	
	
}
