#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int num,num2,multi;
main (){
	do{
		cout<< "Introduza um n�mero inteiro: ";
		cin>>num;
		cout<< "Introduza um outro n�mero inteiro: ";
		cin>>num2;
		multi=num*num2;
		cout<<num<<"*"<<num2<<"="<<multi<<endl;
	}
	while(multi<=1000 && multi>=10);
	return(0);
}
