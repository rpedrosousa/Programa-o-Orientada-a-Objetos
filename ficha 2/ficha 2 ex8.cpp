#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;


int unidades;
float preco,desconto,total;

main (){
	cout <<"Preco do Produto: ";
	cin>>preco;
	cout <<"Quantidade do produtos pedidos: ";
	cin>>unidades;
	total=preco*unidades;
	if(unidades>=500){
		desconto=total*0.05;
	}
	else if(unidades >1000){
		desconto=total*0.08;
	}
	else{
		desconto=0;
	}
	cout<<"Preco total "<<total-desconto<<" em "<<unidades<<" Unidades";
	return(0);
}

