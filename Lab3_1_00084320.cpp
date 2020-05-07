#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int numero1,numero2,numero3;

    cout <<endl<<"Programa que calcula el promedio de tres numeros enteros"<<endl;
    cout <<endl<<"Ingrese primer número"<<endl;
    cin >>numero1; 

    cout <<endl<<"Ingrese segundo número"<<endl;
    cin >>numero2;

    cout <<endl<<"Ingrese tercer número"<<endl;
    cin >>numero3;
    
    int total = (numero1 + numero2 + numero3) / 3;

    cout <<endl <<"El proimedio de:"<< numero1<< ","  << numero2 << "y"<< numero3 <<  "es:" << total << endl;

    system ("pause");
    return 0;

}


