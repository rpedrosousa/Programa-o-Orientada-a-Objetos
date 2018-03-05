#include <iostream>
#include <stdio.h>
using namespace std;
main (){
	int num;
	cout << "digite um numero --> ";
	cin >> num;
	for (num;num >= 1 && num <=5; num++){
		cout << "Dobro do valor é: " << num*2 << endl;
		break;
		
	}	
	system("PAUSE");	 
}
