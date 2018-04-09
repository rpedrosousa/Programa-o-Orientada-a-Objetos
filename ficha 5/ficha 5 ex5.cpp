#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

int x;
int i;

main (){
	cout<<"introduza um numero entre 1 a 5: ";
	cin>>x;
	while(i=0,i<20){
		if(x>=1 && x<=5){
			cout<<x<<endl;
			break;
		}
		else{
			cout<<"Numero invalido!"<<endl;
			cout<<"introduza um numero entre 1 a 5: ";
			cin>>x;
		}
		i=i+1;	
	}
}
