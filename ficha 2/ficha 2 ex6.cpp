#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int i,num,soma=0,vezes;

main (){
	for(i=0;soma<=500;i++){
		cout<<"Soma : "<<soma;
		cout<<"Introduza um numero inferior a 100: ";
		cin>>num;
		if(num<100 && soma<=500){
			soma+=num;
		}
	}
	cout<<"A Media dos valores é: "<<soma/i;
	return(0);
}

