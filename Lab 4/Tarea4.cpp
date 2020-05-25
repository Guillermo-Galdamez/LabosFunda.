#include <iostream>
#include <string>
using namespace std ;

int main ()
{
    int tan = 255, cont=0;
    char palabra[255];

    cout <<endl << "Programa que verifica si la palabra ingresada es mayor a 10 caracteres o no y si la longitud es par o impar."<<endl ;
    for(int i=0; i<tan ; i++)
        palabra[i] = ' ';

    cout <<endl << "Ingrese una palabra: "<<endl ;
    cin.getline(palabra, tan);
    for(int i=0; i<tan ; i++)
        if(palabra[i] != ' ')
            cont++;
    cont = --cont;

    if (cont > 10 && cont % 2 == 0 ) {
      cout  << "La palabra tiene mas de 10 caracteres " << "y "<< "La palabra tiene una cantidad par de caracteres"<< endl;
    }
    else if (cont>10 && cont % 2 != 0){
      cout << "La palabra tiene mas de 10 caracteres " << "y "<< "La palabra tiene una cantidad impar de caracteres"<<endl;
    }

    else if (cont<10 && cont % 2 == 0){
      cout << "La palabra tiene menos de 10 caracteres " << "y "<< "La palabra tiene una cantidad par de caracteres"<<endl;
    }
    else if (cont<10 && cont % 2 != 0){
      cout << "La palabra tiene menos de 10 caracteres " << "y "<< "La palabra tiene una cantidad impar de caracteres"<<endl;
    }

    return 0;
    
}