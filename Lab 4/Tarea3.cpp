#include<iostream>
#include "math.h"
using namespace std;

int main(void)
{
    float n1;
    cout <<endl<<"Programa que verifica si un numero es positivo, negativo o cero"<<endl;
    cout <<endl<<"Ingrese numero"<<endl;
    cin >>n1; 
    
    
    if(n1 > 0 )
    {
        cout <<endl<<"Es positivo"<<endl;   
    }
    else if(n1 < 0 )
    {
        cout <<endl<<"Es negativo"<<endl;
    }
    else {
    
        cout <<endl<<" Es cero"<<endl;
    }

    return 0;
} 