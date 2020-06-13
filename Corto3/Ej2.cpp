#include<iostream>

using namespace std;
int Juego(int numero){ // Está función realiza toda la acción del juego, el numero mágico
    int a=60; // este es el numero a adivinar
    int numeroDigitos = 0; 
    while(numero!=0){
        cout<<"Adivina el numero "<<endl;
        cin>>numero;
        if(numero>0){
        numeroDigitos++; // Se utilizo un contador para limitar los intentos en el bucle
        
    }
        if(numeroDigitos==1){ //Equivale a las posibles acciones dentro del primer intento
            cout<<"tienes 4 intentos, si ya no quieres jugar presiona 0"<<endl;
            if(numero<a){
                cout<<"El numero ingresado es menor al numero magico"<<endl;
            }
            if(numero>a){
                cout<<"El numero ingresado es mayor al numero magico"<<endl;
            }
            if(numero==a){
                cout<<"Acertaste"<<endl;
                break;
            }
        }
         if((numeroDigitos==2)){ //Equivale a las posibles acciones dentro del segundo intento
            cout<<"tienes 3 intentos, si ya no quieres jugar presiona 0"<<endl;
            if(numero<a){
                cout<<"Aún es bajo, y si tratas un numero multiplo de 6"<<endl;
            }
            if(numero>a){
                cout<<"Aún es alto, y si tratas un numero multiplo de 6"<<endl;
            }
            if(numero==a){
                cout<<"Acertaste"<<endl;
                break;
            }
        }
        else if(numeroDigitos==3){ //Equivale a las posibles acciones dentro del tercer intento
            cout<<"tienes 2 intentos, si ya no quieres jugar presiona 0"<<endl;
             if(numero<a){
                cout<<"Aún es bajo, el numero que buscas esta mas allá del 50"<<endl;
            }
            if(numero>a){
                cout<<"Aún es alto, el numero que buscas esta mas abajo del 70"<<endl;
            }
            if(numero==a){
                cout<<"Acertaste"<<endl;
                break;
            }
        }
        else if(numeroDigitos==4){ //Equivale a las posibles acciones dentro del cuarto intento
            cout<<"Es tu último intento, si ya no quieres jugar presiona 0"<<endl;
             if(numero<a){
                cout<<"Aún es bajo, si aun no has adivinado busca en tu reloj veras que un minuto en segundos lo encontraras"<<endl;
            }
            if(numero>a){
                cout<<"Aún es bajo, si aun no has adivinado busca en tu reloj veras que un minuto en segundos lo encontraras"<<endl;
            }
            if(numero==a){
                cout<<"Acertaste"<<endl;
                break;
            }
            
        }
        else if(numeroDigitos==5){ //Equivale a las posibles acciones dentro del quinto intento
            
             if((numero<a)||(numero>a)){
                cout<<"Losiento, perdiste"<<endl;
                break;
            }
            if(numero==a){
                cout<<"Acertaste"<<endl;
            }
        }
    } 
    return 0;
}

main(void){
    int numero;
    cout<<"El numero magico: El juego"<<endl;
   cout<<"tienes 5 intentos, si ya no quieres jugar presiona 0"<<endl;
   cout<<Juego(numero)<<endl;
}