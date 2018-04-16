#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class aluno{
	private:
		float nota1;
		float nota2;
	public:
		char nome[40];
		int numero;
		void setnota1(float primeiro){
			nota1=primeiro;
		}
		void setnota2(float segundo){
			nota2=segundo;
		}
		float getprimeiro(){
			return nota1;
		}
		float getsegundo(){
			return nota2;
		}
		float media(){
			float notafinal;
			notafinal=(nota1+nota2)/2;
			cout<<"Nota final da disciplina: "<<notafinal<<endl;
		};	
}p1;

main (){
	cout<<"Introduza o nome do aluno: ";
	gets(p1.nome);
	cout<<"\nIndique a sua idade: ";
	cin>>p1.numero;
	cout<<"\nNota do primeiro teste: ";
	float n;
	cin>>n;
	p1.setnota1(n);
	cout<<"\nNota do segundo teste: ";
	float m;
	cin>>m;
	p1.setnota2(m);
	system("cls");
	//Output Final
	cout<<"\t Prognostico do semeste: \n";
	cout<<"Nome do aluno:" <<p1.nome<<endl;
	cout<<"Numero do aluno:" <<p1.numero<<endl;
	p1.media();
	system("pause");
}


