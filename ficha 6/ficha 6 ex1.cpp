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
		static float crit_t1; //vars.public
		static float crit_t2; //static
		char  nome[40];
		int numero;
		float nota();
		float nota_final(float i,float j,float l,float m){
			return (i*j)+(l*m);
		}
};

float aluno::crit_t1;
float aluno::crit_t2;

float aluno::nota(){
	float n;
	n = rand() % 1501;
	return n/100 +5;
}

void muda_nota(aluno *a){
	aluno::crit_t1=0.6;
	aluno::crit_t2=0.4;
	cout<<"depois da alteracao: "<<endl;
	cout<<a->nota_final(a->nota(),a->crit_t1,a->nota(),a->crit_t2)<<endl;
}

main (){
	srand((unsigned)time(NULL));
	aluno a1, *p;
	p=&a1;
	aluno::crit_t1=0.5;
	aluno::crit_t2=0.5;
	cout<<"Antes de alteracao: "<<endl;
	cout<<a1.nota_final(a1.nota(),a1.crit_t1,a1.nota(),a1.crit_t2)<<endl;
	muda_nota(p);
	cout<<"Voltando ao main() com alteracoes ";
	cout<<a1.nota_final(a1.nota(),a1.crit_t1,a1.nota(),a1.crit_t2)<<endl;
	system("pause");
}
