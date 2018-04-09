#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

int x,y,areaxy;

recta(){
	areaxy=x*y;
	cout<<"Area do rectangulo é: "<<areaxy<<endl;
}


main (){
	cout<< "Calcula a area de um rectangulo!"<<endl;
	cout<<"Insira o comprimento: ";
	cin>>x;
	cout<<"Insira o altura: ";
	cin>>y;
	cout<<endl;
	recta();
}
