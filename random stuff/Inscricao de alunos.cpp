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
		aluno(){
			cout<<"Entrou um aluno!\n";
		}
		~aluno(){
			cout<<"Saiu um aluno!\n";
		}
};

void inscricao(int b){//prototipo
		aluno a[b];
		for(int k=1;k<=b;k++){
			cout<<"Nome do aluno numero"<<k<<":";
			cin>>a[k].nome;
		}
		system("pause");
		system("cls");
		cout<<"\tLISTA DOS ALUNOS INSCRITOS:\n";
		for(int k=1;k<=b;k++){
			cout<<"Nome:"<<a[k].nome<<"\t";
			cout<<"Numero:"<<k<<"\n";
		}
};

main (){
	cout <<"Deseja inscrever quantos alunos? ";
	int j; cin>>j; 
	inscricao(j);
	system("pause");
}
