#include <iostream>

using namespace std;

int Resultado(int arreglo[], int arreglo2[],int n){
  cout<< "Elementos del tercer arreglo: ";
for(int i=0;i<n;i++){
    cout<< arreglo[i]+arreglo2[i]<<" ";
} 

return 0;
}
int main(void){
int n;
cout << "Ingrese la cantidad de elementos para los arreglos : ";cout<<endl;
cin >> n;
int arreglo[n];
cout<< "Elementos del primer arreglo: ";cout<<endl;
for(int i=0;i<n;i++){
    cout<< "Ingrese el valor en la posición"<<i<<":";
    cin >> arreglo[i];
}
cout<<endl;
cout<< "Elementos del segundo arreglo: ";cout<<endl;
int arreglo2[n];
for(int i=0;i<n;i++){
    cout<< "Ingrese el valor en la posición"<<i<<":";
    cin >> arreglo2[i];
}
cout<<endl;cout<<Resultado(arreglo, arreglo2, n);

 return 0;
}