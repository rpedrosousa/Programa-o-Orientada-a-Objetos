#include <iostream>
#include <stdio.h>
using namespace std;
main (){
	int num;
	cout << "digite um numero --> ";
	cin >> num;
	while (num >= 1 && num <=5){
		cout << "Dobro do valor é: " << num*2 << endl;
		break;
		
	}	
	system("PAUSE");	 
}
