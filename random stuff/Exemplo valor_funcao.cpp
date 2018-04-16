#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class produto{
	float valor;
	public:
		void atribui(float v){
			valor = v;
		}
		void escreve(){
			cout<<valor<<endl;
		}
};

void valorvenda(produto v){
	v.escreve();//Escreve 10
	v.atribui(20);//Local 20 - Lê 20
	v.escreve();//Escreve 10
}

main (){
	produto v1;
	v1.atribui(10);//atribui valor a v1
	valorvenda(v1);//passa valor v1 pra funcao
	v1.escreve();
	
	
}
