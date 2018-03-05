#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int i;
int v[5];
main (){
	srand((unsigned) time (NULL));
	for(i=0; i<5; i++)
		v[i] = rand () % 30;
		cout<<" os Valor random: ";
		for(i=0; i<5; i++){
			cout<<v[i]<<",";
		}

	
system("pause");
}
