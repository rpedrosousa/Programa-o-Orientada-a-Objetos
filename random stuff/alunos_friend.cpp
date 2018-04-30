#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class aluno{
	int numero;
	float nota;
	
	public:
		aluno(){};                                                 //construtor
		aluno (int num, float n){                                  //construtor
		cout << "Novo aluno: \n" ; 
		numero = num ; 
		nota = n;
		}
		void atribuir (int num, float n) {
		numero = num; 
		nota = n ;
		}
		int obternum() {
		return numero;
		} 
		float obtern() {
		return nota ;
		}
		float operator + (aluno a){
			cout << "Funcao operadora + " << "\n";
			float resultado = nota;
			resultado = resultado + a.nota;
			return resultado; 
		}
};

main (){
	aluno a1 (1, 10.0) ;                                                           // Utiliza construtor
	cout << "O aluno "<<a1.obternum()<<" tem a nota "<< a1.obtern() << "!\n";
	aluno a2 (1, 20.0) ;                                                           // Utiliza construtor
	cout << "O aluno "<<a2.obternum()<<" tem a nota "<< a2.obtern() << "!\n";
	a1.atribuir(1, 10.5) ;
	cout << "O aluno "<<a1.obternum()<<" tem a nota "<< a1.obtern() << "!\n";
	a2 = a1 ; cout <<"Copia automatica a2=a1;\n";
	cout << "O aluno "<<a2.obternum()<<" tem a nota "<< a2.obtern() << "!\n";
	cout << "Soma: " << a1 + a2 ; // Erro!

}
