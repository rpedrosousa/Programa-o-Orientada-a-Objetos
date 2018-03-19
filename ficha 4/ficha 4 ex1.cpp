#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int num,i;

main (){
	cout<<"Introduza um numero entre (1 a 10): ";
	cin >> num;
	if(num>=1 && num<=10 ){
		cout<<"O numero esta valido: "<<num;
	}
	else{
		cout<<"Numero Invalido!!";
	}
}
