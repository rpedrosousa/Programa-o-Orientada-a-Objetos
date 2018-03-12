#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int opcao;

main (){
	cout<<"Menu de opcoes:"<<endl;
	cout<<"1-Executar o programa Calculadora"<<endl;
	cout<<"2-Converter graus centigrados/fahrenheit"<<endl;
	cout<<"3-Converter metros/quilometros"<<endl;
	cout<<"4-Sair"<<endl;
	cin>>opcao;
	
	switch(opcao){
		case 1:
			cout<<"Calculadora:a executar.................";
			break;
		case 2:
			cout<<"Conversao de temperaturas";
			break;
		case 3:
			cout<<"Conversao de distancias";
			break;
		case 4:
			cout<<"A terminar o programa....";
		default:
			cout<<"ERRO";
	}
	return(0);
}

