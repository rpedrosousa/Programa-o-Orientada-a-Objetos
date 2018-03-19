#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int numero,i;

main (){
	cout<<" Introduza um numero inteiro: ";
	cin>>numero;
	for(numero;numero>0;numero--){
		if (numero%2==0)
			cout<< numero<<"\n";	
	}
	return(0);
}
