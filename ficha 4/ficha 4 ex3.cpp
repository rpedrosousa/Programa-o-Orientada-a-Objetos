#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

char letra;

main (){
	cout <<"Digite uma letra: ";
	cin>>letra;
	if(letra>='A' && letra<='Z'){
		cout<<"Letra e maiuscula!!";
	}
	else if(letra>='a' && letra<='z'){
		cout<<"Letra e minuscula!!";
	}
	else{
		cout<<"Nao e uma letra!!";
	}
}
