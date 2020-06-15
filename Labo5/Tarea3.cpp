#include "iostream"

using namespace std;

int Prueba (int a){ 
    
    if((a% 400==0)||((a%4==0) && (a%100!=0))){ 
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
main(void){
    int a;
    cout<<"Programa que verifica si un año es bisiesto o no"<<endl;
    cout<<"Escriba el año: ";
    cin>>a;
    cout<< Prueba(a);
}
