#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class aluguer{
	float preco;
	public:
		aluguer(float p){
			preco=p;
		}
		friend class valora;//prototipo
};

class valora{
	float valor;
	int num_dia;
	public:
		valora(int n){
			num_dia=n;
		}
		float venda(aluguer p){
			valor=p.preco*num_dia;
			return valor;
		}
};


main (){
	cout<<"Rent a car"<<"\n"<<endl;
	aluguer p1(26.80);
	valora v1(7);
	cout<<"Total a pagar:"<<v1.venda(p1);
	system("pause");
}
