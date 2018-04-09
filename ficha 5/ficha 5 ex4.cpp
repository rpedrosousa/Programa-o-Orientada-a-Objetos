#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

char palavra[20]="BOA SORTE";
int i;

main (){
	for(i=0;i<strlen(palavra);i++){
		cout<<"t["<<i<<"] =" <<palavra[i]<<endl;
	}
}
