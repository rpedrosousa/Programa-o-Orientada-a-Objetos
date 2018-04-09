#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class pessoa{
	private:
		int idade;
	public:
		char nome[40];
	void setidade(int i){
		idade= i;
	}
	int getidade(){
		return idade;
	}
	int ano (int ano_actual){
		return ano_actual-idade;
	}
}p1;



main (){
	cout<<"indique o seu nome: ";
	gets(p1.nome);
	cout<<"\nIndique a sua idade: ";
	int j; cin>>j; p1.setidade(j);
	system("pause");
	system("cls");
	cout<<"Nome: "<<p1.nome<<"\t";
	cout<<"Idade: "<<p1.getidade()<<"\n";
	cout<<"ano de nascimento: ";
	cout<<p1.ano(2018);
}
