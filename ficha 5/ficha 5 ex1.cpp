#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

char palavra[20];


main (){
	cout<<"Introduza a sua palavra: ";
	cin>>palavra;
	if(strlen(palavra)<=4){
		cout<<"Palavra Pequena!";
	}
	else if(strlen(palavra)>4 && strlen(palavra)<=8){
		cout<<"Palavras de tamanho médio!";
	}
	else if(strlen(palavra)>8){
		cout<<"Palavra grande!";
	}
	else{
		cout<<"erro";
	}
}
