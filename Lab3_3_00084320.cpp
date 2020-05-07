#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int a,b,c;

    cout <<endl<<"Programa que calcula el resultado de la fórmula cuadratica"<<endl;
    cout <<endl<<"Ingrese a"<<endl;
    cin >>a; 

    cout <<endl<<"Ingrese b"<<endl;
    cin >>b;

    cout <<endl<<"Ingrese c"<<endl;
    cin >>c;
    
    int x1 = (-b + sqrt(b*b - 4.0*a*c))/(2.0*a);
    int x2 = (-b - sqrt(b*b - 4.0*a*c))/(2.0*a);

    cout <<endl <<"El resultado de x es:" << x1 << x2 << endl;

    system ("pause");
    return 0;
}