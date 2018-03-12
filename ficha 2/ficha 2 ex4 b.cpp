#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int valor[5];
int i,k;

main (){
	cout<<"Vector com 5 elementos: "<<endl;
	for(i=0;i<5;i++){
		cout<<"Indique o valor para o vector v["<<i<<"]: ";
		cin>>valor[i];
	}
	//ATE AQUI È O EXERCICIO A)
	for(k=4;k>=0;k--){
		cout<<"["<<k<<"] = "<<valor[k]<<endl;
	}
	return(0);
}
