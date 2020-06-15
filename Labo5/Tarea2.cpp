#include "iostream"

using namespace std;
main(void){
    int hh,mm,ss;
    cout <<endl<<"Ingrese horas: "<<endl;
    cin >>hh;
    cout <<endl<<"Ingrese minutos: "<<endl;
    cin >>mm;
    cout <<endl<<"Ingrese segundos: "<<endl;
    cin >>ss;
    if((hh >=0 && hh<=23) && (mm >=0 && mm<=59) && (ss >=0 && ss<=59)){
        ss++;
        if (ss==59){
        ss=0;mm++;
        
        }
        else if (mm==59){
        ss=0;mm=0;hh++;
        
        }
        else if (hh==24){
        hh=0;
        }
    }
    else if((hh>23 ) && (mm >59) && (ss >59)){
        cout <<endl<<"Error: Los digitos marcados no corresponden"<<endl;
     }
    cout <<endl<<"La hora un segundo después es: "<<hh<<":"<<mm<<":"<<ss<<endl;
    return 0;

}