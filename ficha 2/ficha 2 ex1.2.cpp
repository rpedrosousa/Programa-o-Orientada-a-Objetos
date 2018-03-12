#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

main (){
	int c,a;
	cout<<"Introduza o Numero"<<endl;
	cin>>c;
	do{
		cout<<"n="<<c<<"\n";
		c+=1;
		a+=c;
	}
	while(c<=15 && c>=1);
	cout<<"soma total: "<<a;
	return(0);
}
