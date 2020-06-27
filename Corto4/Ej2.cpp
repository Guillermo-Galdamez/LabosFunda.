#include <iostream>
void arriba(float [ ],float);
void bajo(float [ ], float);
using namespace std;
float promedio(float arreglo[]){
    float acum = 0.0;
    for(int i=0;i<25;i++){
        acum+=arreglo[i];
    }
    return acum / 25;
}
int main(){
    float alturas[25];
    cout<<endl;
     cout<<" Programa que calcula alturas de 25 estudiantes "<<endl;
    for(int i=0;i<25;i++){
        cout<<"Ingrese la medicion "<<i+1<<": ";
        cin>>alturas[i];
    }
    float prom = promedio(alturas);
    cout<<"La media es de: "<<prom<<endl;
    arriba(alturas,prom);
    bajo(alturas,prom);
}
void arriba(float alturas[],float prom){
    int contador=0;
    for(int i=0;i<25;i++){
        if(alturas[i]>prom){
            contador++;
        }
    }
    cout<<"El numero de estudiantes arriba de la media es:"<<contador;
    cout << endl;
}
void bajo(float alturas[], float prom){
    float contador2=0;
   for(int i=0;i<25;i++){
        if(alturas[i]<prom){
            contador2++;
        }
    }
    cout<<"El numero de estudiantes debajo de la media es:"<<contador2;
    cout << endl;
}
