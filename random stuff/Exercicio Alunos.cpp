#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class aluno{
	public:
		char nome[40];
		int numero;
		float nota1;
		float nota2;
		float media(){
			float notafinal;
			notafinal=(nota1+nota2)/2;
			cout<<"Nota final da disciplina: "<<notafinal;
		};	
}p1;

main (){
	cout<<"Introduza o nome do aluno: ";
	gets(p1.nome);
	cout<<"\nIndique a sua idade: ";
	cin>>p1.numero;
	cout<<"\nNota do primeiro teste: ";
	cin>>p1.nota1;
	cout<<"\nNota do segundo teste: ";
	cin>>p1.nota2;
	system("cls");
	//Output Final
	cout<<"\t Prognostico do semeste: \n";
	cout<<"Nome do aluno:" <<p1.nome<<endl;
	cout<<"Numero do aluno:" <<p1.numero<<endl;
	p1.media();
	system("pause");
}


