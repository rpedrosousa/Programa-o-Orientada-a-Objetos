#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;

class Base{
	public:
 		int x;
	protected:
 		int y;
	private:
 		int z;
};
class Derivada1:public Base{
	public:
 		Derivada1(){
 			w = 33;
 		}
 		void f1(){
			x = 0;
			y = 0;
 			z = 0;
 		} 
	protected:
 		void f2(){
 			w = 2 * x;
 		}
	private:
 		int w;
};

int main(){
 	Derivada1 B;
 	B.f1();
 	B.f2();
 	B.w = 5;
 	B.x = 7;
 	B.y = 6;
	B.z = 5;
} 
