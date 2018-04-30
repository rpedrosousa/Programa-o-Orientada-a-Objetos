#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class venda{
	private:
		float preco,valor;
		int quant;
	public:
		venda(float p, int q){           //construtor
			preco=p;
			quant=q;
		}
		friend float valor_venda(venda v);//prototipo
};

float valor_venda(venda v){
	v.valor=v.preco*v.quant;
	return v.valor;
}

main (){
	venda v1(1.5,10);
	cout<<"valor de venda:"<<valor_venda(v1);
	system("pause");
}	
