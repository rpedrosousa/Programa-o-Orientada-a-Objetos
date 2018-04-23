#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

main (){
	char *x="BASES DE PROGRAMACAO";
	int i=0;
	while(*(x+i)!='\0'){//while(*s!='\0'){cout<<*s++<<endl;} -> outra maneira
		cout<<*(x+i)<<endl;
		i++;
	}
}	


