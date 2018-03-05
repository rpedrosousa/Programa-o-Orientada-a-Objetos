#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int i;
main (){
cout << "insire um numero entre 1 e 15--> ";
cin >> i;
do{
	cout<< "n = " << i<< " \n";
	i=i+1;
}while( i<16);
	
system("pause");
}
