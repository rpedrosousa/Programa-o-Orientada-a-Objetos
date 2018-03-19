#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int v[7]={1,2,3,4,5,6,7};
int *p=v;
int i;

main (){
	cout<<*p++<<endl;
	cout<<*(p+2)<<endl;
	cout<<*++p<<endl;
	cout<<*(p+4)<<endl;
	*p++;
	cout<<*(p-3)<<endl;
	*p++;
	for(i=-4;i<2;i++){
		cout<<*(p+i)<<", ";
	}
	cout<<*(p+i)<<".\n";	
}
