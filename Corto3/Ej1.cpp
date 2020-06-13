#include<iostream>
#include<math.h>

using namespace std;
float Salariototales(float n,float m){//Está función se encarga de realizar el proceso del salario total sumandolo
    float Salariot;
    if(n>0){
        n =n*1.75; m =m*2.50;
        Salariot = n+m;
    }
    return Salariot;
}
float Salarioreal(float n,float m){ // Está funciön toma la función anterior para aplicarle los descuentos y así conseguir el Salario real
    float Salarior, Seguro, AFP,Renta;
    Salarior == Salariototales(n,m);
    Seguro = Salarior*0.04; AFP = Salarior*0.0625; Renta = Salarior*0.10;
    if(Salarior >0 ){
        Salarior= (Salarior- Seguro)-AFP;
    }
    else if (Salarior >500 ){ // El descuento de la renta solo se aplica si el salario total es mayor que 500
        Salarior= ((Salarior- Seguro)-AFP)-Renta;
    }
    return Salarior;
}
main(void){
    float n,m;
    int a;
    cout<<"Hola bienvenido, desea calcular el salario"<<endl;
    while(a!= 0){
       cout<<"Escriba las horas trabajadas"<<endl;
        cin>>n;
        cout<<" Ahora escriba las horas extras"<<endl;
        cin>>m;
        cout<<" El salario total es: "<< Salariototales(n,m) <<endl;
        cout<<" El salario real es: "<< Salarioreal(n,m) <<endl;
        cout<<" Si ya termino escriba 0 si quiere continuar escriba 1"<<endl;
        cin>>a;
    }

}