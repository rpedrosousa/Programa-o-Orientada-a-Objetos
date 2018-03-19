#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

char a[20],b[20];

main (){
	cout<<"Introduza a primeira palavra: ";
	cin>>a;
	cout<<"Introduza a segunda palavra: ";
	cin>>b;
	if(a==b){
		cout<<"As Palavras sao iguais!!";
	}
	else {
		cout<<"As Palavras sao diferentes!!";
		if(strlen(a)<strlen(b)){
			cout<<"A palavra que tem maior tamanho e b) com : "<<strlen(b)<<"caracteres!!";
		}
		else{
			cout<<"A palavra que tem maior tamanho e a) com : "<<strlen(a)<<"caracteres!!";
		}
	}
}
