#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int op;

main (){
	cout<<"\n		MENU DE COMANDOS"<<"\n\n";
	cout<<"		0.		Sair  \n";
	cout<<"		1.		Mostrar  \n";
	cout<<"		2.		Apresentar  \n\n";
	cout<<"			Escolha uma opcao: ";
	cin>>op;
	while((op<0) || (op>3)){
		cout<<"Erro insira de novo ";
		cin>>op;
	}	
}
