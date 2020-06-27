#include <iostream>
void aprobo(float [ ],float);
using namespace std;
float promedio(float arreglo[]){
    float acum = 0.0;
    for(int i=0;i<5;i++){
        acum+=arreglo[i]*0.20;
    }
    return acum;
}
int main(){
    int n;
    float notas[5];
    cout << endl;
    cout<<"Programa que calcula el promedio de 5 notas"<<endl<<endl;
    cout<<"Escriba el numero de estudiantes a calificar"<<endl;
    cin>>n;cout << endl;
    for(int i=0;i<n;i++){
    for(int i=0;i<5;i++){
        cout<<"Ingrese nota "<<i+1<<": ";
        cin>>notas[i];
    }
    float prom = promedio(notas);
    cout<<"El promedio es: "; cout<<prom<<endl;
    aprobo(notas, prom);
    cout << endl;
    }
}
void aprobo(float notas[],float prom){
    if(prom>6.0){
         cout<<"aprobo";
         cout << endl;   
        }
    else{
        cout<<"reprobo";
        cout << endl; 
    }
}
