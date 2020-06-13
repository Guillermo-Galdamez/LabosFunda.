#include<iostream>

using namespace std;

int Prueba (int a){ // La función se encarga de realizar los procesos para saber si el año ingresado es bisiesto o no
    
    if((a% 400==0)||((a%4==0) && (a%100!=0))){ 
        cout<<"Es bisiesto"<<endl;
    }
    else{
        cout<<"No es bisiesto"<<endl;
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
