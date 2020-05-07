#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int n1,n2;
    cout <<endl<<"Programa que verifica si un número es divisible entre otros"<<endl;
    cout <<endl<<"Ingrese dividendo"<<endl;

    cin >>n1; 

    cout <<endl<<"Ingrese divisor"<<endl;
    
    cin >>n2;

    
    if(n1 % n2 == 0)
    {
        cout <<endl<<"es divisible"<<endl;   
    }
    else {
        cout <<endl<<"no es divisible"<<endl;
    }

    return 0;
}