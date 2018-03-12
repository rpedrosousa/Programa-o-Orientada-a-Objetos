#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int preco,unidades,desconto;

main (){
	cout <<"Preço do Produto: ";
	cin>>preco;
	cout <<"Quantidade do produtos pedidos: ";
	cin>>unidades;
	if(unidades>=500){
		desconto=preco*0.05;
	}
	else if(unidades >1000){
		desconto=preco*0.08;
	}
	else{
		desconto=0;
	}
	cout<<"Preco total "<<preco-desconto<<" em "<<unidades<<" Unidades";
	return(0);
}

