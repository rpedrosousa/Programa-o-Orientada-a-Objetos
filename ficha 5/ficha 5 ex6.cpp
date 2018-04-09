#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

int escolha;
int i=0;

main (){
	do{
		cout<<"Hipotese de compra de senhas:"<<endl;
		cout<<"(1) Pequeno Almoco"<<endl;
		cout<<"(2) Almoco"<<endl;
		cout<<"(3) Lanche"<<endl;
		cout<<"(4) Jantar"<<endl;
		cout<<endl;
		cout<<"Escolha a senha que deseja comprar: "<<endl;
		cin>>escolha;
		switch(escolha){
			case 1:
				cout<<"Comprou uma senha para o pequeno almoco"<<endl;
				break;
			case 2:
				cout<<"Comprou uma senha para o almoco"<<endl;
				break;
			case 3:
				cout<<"Comprou uma senha para o lanche"<<endl;
				break;
			case 4:
				cout<<"Comprou uma senha para o jantar"<<endl;
				break;
			default:
				cout<<"Invalido"<<endl;
				break;
		}
	}while(i<20);
}
