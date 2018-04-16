#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class empregado{
	private:
		char *codigo;
		float salario;
	public:
		char nome[40];
		int idade;
	void setidade (int i) {idade=i;}
	int getidade() {return idade;}
	int ano (int ano_actual)
	{return ano_actual - idade;}
	void setcodigo(char *c){
		codigo=c;
	}
	void setsalario(float s){
		salario=s;
	}
	char *getcodigo(){
		return codigo;
	}
	int getsalario(){
		return salario;
	}
	void mostradados();//prototipo
}e1,p1;


main (){
	cout<<"indique o seu nome: ";
	gets(e1.nome);
	cout<<"\nIndique a sua idade: ";
	int j; cin>>j; p1.setidade(j);
	system("pause");
	system("cls");
	cout<<"Nome: "<<p1.nome<<"\t";
	cout<<"Idade: "<<p1.getidade()<<"\n";
	cout<<"ano de nascimento: ";
	cout<<p1.ano(2018);
	e1.mostradados();
}

void empregado :: mostradados(){
	cout<<"Nome: "<<nome<<"\t";
	cout<<"Idade: "<<idade<<"\n";
	cout<<"Codigo: "<<getcodigo()<<"\t";
	cout<<"Salario: "<<getsalario()<<"\n";
	system("pause");
}
