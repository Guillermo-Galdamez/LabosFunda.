#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int A;

    cout <<endl<<"Programa que verifica si un numero es par o impar"<<endl;
    cout <<endl<<"Ingrese primer número"<<endl;
    cin >>A; 
    if (A % 2 == 0 )
    {
        cout <<endl<<"El numero es par"<<endl;

    }
    else
    {
        cout <<endl<<"El numero es impar"<<endl;

    }


    system ("pause");
    return 0;

}