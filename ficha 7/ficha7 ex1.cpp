#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class aluguer{
	private:
		float valor, preco;
		int num_dia;
	public:
		aluguer(float p,int dia){
			preco=p;
			num_dia=dia;
		}
		friend float valora(aluguer v);//prototipo
};

float valora(aluguer v){
	v.valor=v.preco*v.num_dia;
	return v.valor;
}

main (){
	cout<<"Rent a car"<<"\n"<<endl;
	aluguer v1(26.80,7);
	cout<<"Total a pagar:"<<valora(v1);
	system("pause");
}
