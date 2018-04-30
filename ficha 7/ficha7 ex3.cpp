#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class soma{
	int numero1;
	int numero2;
	
	public:
		soma(){};                                                 //construtor
		soma (int num1, int num2){                                  //construtor
		numero1 = num1; 
		numero2 = num2;
		}
		void atribuir (int num1, int num2) {
		numero1 = num1; 
		numero2 = num2;
		}
		int obternum1() {
		return numero1;
		} 
		float obternum2() {
		return numero2 ;
		}
		float operator + (soma a){
			float resultado = 0;
			resultado = resultado + a.numero1+  a.numero2;
			return resultado; 
		}
};

main (){
	soma a1 (3, 1) ;                                                           // Utiliza construtor
	soma a2 (1, 2) ;                                                           // Utiliza construtor
	a1.atribuir(3,1) ;
	a2 = a1 ;
	cout << a1 + a2 <<",";
	a2.atribuir(1,2);
	cout << a1 + a2 ;

}
