#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;


main (){
	float *nota1,*nota2;
	float n1,n2,media;
	cout<<"nota 1: ";
	cin>>n1;
	cout<<"nota 2: ";
	cin>>n2;
	nota1 = &n1;
	nota2 = &n2;
	media = (*nota1+*nota2)/2;
	cout<<"media:"<<*nota1<<" "<<*nota2<<" "<<media;
}
