#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

char cara[1];
int i=0;

main (){
	cout<< "Introduza um caracter que eu irei adivinhar o seu genero: ";
	cin>>cara;
	if(isalpha(cara[i])){
		cout<<"Letra";
	}
	if(isdigit(cara[i])){
		cout<<"Numero";
	}
	if(ispunct(cara[i])){
		cout<<"Simbolo";
	}
	return(0);
}
