#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

char palavra[20];
char contrario[20];
int i,j;
int l;

main (){
	cout<< "Insira uma palavra: ";
	cin>>palavra;
	l=strlen(palavra);
	
	for(i=0,j=l-1;i<l;i++,j--){
		contrario[i]=palavra[j];
	}
	contrario[i]='\0';
	cout<<contrario;
	return 0;
}
