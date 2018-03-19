#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int num,num2,num3;

main (){
	cout<<"Introduza um numero: ";
	cin>>num;
	cout<<"Introduza outro numero: ";
	cin>>num2;
	cout<<"Introduza o numero final: ";
	cin>>num3;
	
	if (num>num2 && num>num3){
		cout << "O " << num << " e o numero maior";
	}
	else if (num2>num3 && num2>num){
		cout << "O " << num2 << " e o numero maior";
	}
	else{
		cout << "O " << num3 << " e o numero maior";
	}

}
