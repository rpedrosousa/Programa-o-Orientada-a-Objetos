#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

string pass;
int i;

main (){
	do{
		cout<<"Coloque a senha: ";
		cin>>pass;
		if (pass=="Leticia"){
			printf("Oni-chan!! YAMETE");
			return(0);
		}
		else{
			cout<<"Falhou!!"<<endl;
			cout<<"Pista: Gaja que o alexandre gosta. ";
		}	
	}
	while(i!=5);
	return(0);
}
