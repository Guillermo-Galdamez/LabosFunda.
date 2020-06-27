#include <iostream>
#include <string>
using namespace std;

void llenar(string [ ], int );
void desplegar(string [ ], int );

int main(void){
int  n; 
cout << endl;
cout << "Programa que utiliza la cave murcielago" << endl << endl;
cout << "¿Cuantas letras quiere introducir? ";
cin >> n;
string x[n];
llenar(x, n);
desplegar(x, n);
cout << endl;
return 0;
}
void llenar(string x[ ], int n){
int i;
cout << "Digite los " << n << " elementos del arreglo:" << endl;
for(i = 0; i < n; i++)
cin >> x[i];
cout << " ";
}
void desplegar(string x[ ], int n){
int i;
cout << "Los caracteres ya codificados :" << endl;
for(i = 0; i < n; i++){
    if (x[i]== "m"){
        x[i]="0";
    }
    else if (x[i]== "u"){
        x[i]="1";
    }
    else if (x[i]== "r"){
        x[i]="2";
    }
    else if (x[i]== "c"){
        x[i]="3";
    }
    else if (x[i]== "i"){
        x[i]="4";
    }
    else if (x[i]== "e"){
        x[i]="5";
    }
    else if (x[i]== "l"){
        x[i]="6";
    }
    else if (x[i]== "a"){
        x[i]="7";
    }
    else if (x[i]== "g"){
        x[i]="8";
    }
    else if (x[i]== "o"){
        x[i]="9";
    }
    cout << x[i]<<" ";
    }
}