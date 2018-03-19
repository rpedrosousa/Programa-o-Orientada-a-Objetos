#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int i;

main (){
	cout<<"Introduza um numero entre 0 a 3: ";
	cin>>i;
	switch(i){
		case 0:
			cout<<"Zero";
			break;
		case 1:
			cout<<"Um";
			break;
		case 2:
			cout<<"Dois";
			break;
		case 3:
			cout<<"Tres";
			break;
		default:
			cout<<"O numero nao esta entre o 0 a 3.";
	}
}
