#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class rectang{
	float comp, larg ;
	public:
	void setdados (float cp, float lg){
	comp = cp ; 
	larg = lg;
	}
	float getarea() {
	return comp*larg;
	}
};

class cubo : public rectang{
	float altura;
	public:
		void setaltura (float a) {
		altura = a;
			}
		float getaltura () {
		return altura;
		}
};
main (){
	cubo t1;
	t1.setaltura (3);
	t1.setdados(4,5);
	cout << "Volume = " ;
	cout << t1.getaltura() * t1.getarea() ;
	cout << '\n';
	system ("Pause");
}

