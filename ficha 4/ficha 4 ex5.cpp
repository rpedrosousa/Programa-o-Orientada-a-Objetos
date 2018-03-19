#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

int num,i,y;

main (){
	cout<<"Introduza um numero: ";
	cin>>num;
	for(i=num;i>=0;i--){
		cout<<i<<" ";
	}
	cout<<endl;
	for(y=0;y<=num;y++){
		cout<<y<<" ";
	}	
}
