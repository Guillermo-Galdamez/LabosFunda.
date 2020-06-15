#include "iostream"

using namespace std;

main(void){
    int dd,mm,aa;
    cout <<endl<<"Ingrese año: "<<endl;
    cin >>aa;
    cout <<endl<<"Ingrese mes: "<<endl;
    cin >>mm;
    cout <<endl<<"Ingrese días: "<<endl;
    cin >>dd;
    dd++;
    if((aa%400==0)||((aa%4==0) && (aa%100!=0))){ 
        if((mm == 2) && (dd==30)){
            mm++;dd=1;
        }
        else if(((mm == 1)||(mm == 3)||(mm == 5)||(mm == 7)||(mm == 8)||(mm == 10))&& (dd==32)){
             mm++;dd=1;
        }  
        else if(((mm == 6)||(mm == 9)||(mm == 11)) && (dd==31)){
             mm++;dd=1;
        }
        else if((mm == 4)&& (dd==31)){
                 dd=1;
             }
        else if((mm == 12)&& (dd==32)){
                 aa++;mm=1;dd=1;
             }
       }  
    else if ((aa% 400!=0)||((aa%4!=0) && (aa%100==0))){
        if((mm == 2)&& (dd==29)){
           mm++;dd=1;
        }
        else if((mm == 1)||(mm == 3)||(mm == 5)||(mm == 7)||(mm == 8)||(mm == 10) && (dd<=32)){
             mm++;dd=1;
             
        }
        else if((mm == 6)||(mm == 9)||(mm == 11)&& (dd==31)){
             mm++;dd=1;
        }
        else if((mm == 4)&& (dd==31)){
                 dd=1;
             }
        else if((mm == 12)&& (dd==32)){
                 aa++;mm=1;dd=1;
             } 
    }
    else if( (mm >12) && (dd>32)&&(aa<0) && (mm <0) && (dd <0)){
        cout <<endl<<"Error: Los digitos marcados no corresponden"<<endl;
     }
    cout <<endl<<"La fecha un dia después es: " <<dd<<"/"<<mm<<"/"<<aa<<endl;
    return 0;
    

}