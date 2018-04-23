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
		static char escola[25];
		char nome[20];
		aluno(){
			strcpy(nome,"Defina nome");
			cout<< endl<<"Criado um objecto aluno."<<endl;
		}
		~aluno(){
			cout<<endl<<"Destruido um objecto aluno."<<endl;
		}
		void setnome(){
			char nom[20];
			cout<<endl<<"Insira o nome do aluno! ";
			gets(nom);
			strcpy(nome,nom);
		}
}a1;



int main (){
	a1.setnome();
}
