#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class aluno{
	public:
		static float crit1;
		static float crit2;
		char nome[40];
		int numero;
		float nota;
		float notacrit(float i, float j, float l, float m){
			return (i*j)+(l*m);
		}
		
		aluno(){
			
		}
		aluno(char *n, int i){
			
		}
};

float aluno :: crit1;//declaracao
float aluno :: crit2;//externa

main (){
	srand((unsigned) time(NULL));
	
	
}

float aluno :: nota(){
	float n;
	n= rand() % 1501;
	return n/100 +5;
}
