#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
main (){
	
	int cat1;
	cout << "digite o numero do primeiro cateto --> ";
	cin >> cat1;
	int cat2;
	cout << "digite o numero do segundo cateto --> ";
	cin >> cat2;
	int cat3;
	cat3=(cat1*cat1)+(cat2*cat2);
	cout << "O valor da hipotnusa é --> " << sqrt( cat3 );
}
