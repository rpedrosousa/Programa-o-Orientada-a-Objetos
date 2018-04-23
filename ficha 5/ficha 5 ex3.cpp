 #include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;
int x, y, divisor,restoy;

divisao(){
	divisor=x/y;
	cout<< "resultado da divisao: "<< divisor<<endl;
}

resto(){
	restoy=x%y;
	cout<< "resto da divisao inteira: "<< restoy<< endl;
}

main (){
	cout<<"introduza o valor de x: ";
	cin>>x;
	cout<<"introduza o valor de y: ";
	cin>>y;
	divisao();
	resto();
}
