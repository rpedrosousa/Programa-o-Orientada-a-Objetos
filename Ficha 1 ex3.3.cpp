#include <iostream>
#include <stdio.h>
using namespace std;
main (){
	int num;
	cout << "digite um numero --> ";
	cin >> num;
	switch(num){
		case 1:
			cout << "Se o seu valor for 1: " << num*2 << endl;
			break;
		case 2:
			cout << "Se o seu valor for 2: " << num*2 << endl;
			break;
		case 3:
			cout << "Se o seu valor for 3: " << num*2 << endl;
			break;
		case 4:
			cout << "Se o seu valor for 4: " << num*2 << endl;
			break;
		case 5:
			cout << "Se o seu valor for 5: " << num*2 << endl;
			break;
		default:
			cout << "Valor Invalido " <<endl;
	}
	system("PAUSE");	 
}
