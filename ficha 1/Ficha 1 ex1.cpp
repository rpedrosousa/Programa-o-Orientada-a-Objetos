#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{
    int nota;
    cout << "digite as nota --> ";
    cin >> nota;

    if (nota < 0)
        cout << "Nota não válida ";

    else if (nota < 10)
        cout << "Reprovado ";
    else if (nota < 14)
        cout <<"Suficiente ";
    else if (nota < 18)
        cout <<"Bom";
    else if (nota <= 20)
        cout <<"Muito Bom";
    else
        cout <<"Nota Invalida ";

system("PAUSE");
}
