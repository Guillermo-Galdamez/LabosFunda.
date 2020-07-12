#include<iostream>

 struct costoPorArticulo{// La estructura que se usa para definir los datos que se obtendrán y se utilizarán.
         char nombre[21];
         int cantidad;
         float precio;
         float costo;
     };
void datos(costoPorArticulo[],int);
void costo(costoPorArticulo[],int);
void desplegar(costoPorArticulo[],int);
float suma(costoPorArticulo cost[], int n){ //Está función suma los costos digitados para obtener el total a pagar.
    float acum=0.0;
    for(int i=0;i<n;i++){
     acum+=cost[i].costo;//El acumulador funciona para sumar los costos por cada articulo.
    }
    return acum;
}
using namespace std;
main(void){ // La función main solo pide la cantidad de articulos y controla las llamadas de las funciones.
int n; 
cout << " Programa de procesamiento de una factura de compra "<<endl;
cout << "Digite la cantidad de articulos: "<<endl; // Aqui solo pide la cantidad de articulos que se llevan, no la cantidad por articulo
cin>>n;cout<<endl;// es decir que aquí si lleva manzana cuenta como uno, si tambien lleva pera entonces 2 articulos.
costoPorArticulo cost[n]; // Este es el arreglo que se forma a partir de la estructura.
datos(cost,n);
costo(cost,n);
desplegar(cost,n);
float sum=suma(cost,n);
cout << "El total a pagar es: "<<sum<<" $"<<endl;
}
void datos( costoPorArticulo cost[],int n){ // Esta función se encarga de leer los datos ingresados y los coloca en el arreglo.
    for(int i=0;i<n;i++){
     cout << "Digite el nombre del articulo: ";
     cin>>cost[i].nombre;cout<<endl; //Hay que tener cuidado ya que no aplica el espacio entre palabras, es decir, todo va junto.
     cout << "Digite la cantidad del articulo :";
     cin>> cost[i].cantidad;cout<<endl;
     cout << "Digite el precio: ";
     cin>> cost[i].precio;cout<<endl;  
    }
}
void costo(costoPorArticulo cost[],int n){ // Esta función se encarga de clcular el costo por articulo, es decir la cantidad por el precio.
    for(int i=0;i<n;i++){
     cost[i].costo=cost[i].cantidad*cost[i].precio;
    }
}
void desplegar(costoPorArticulo cost[], int n){ // Esta función se encarga de mostrar todos los datos .
    for(int i=0;i<n;i++){
     cout <<"El nombre del articulo: "<<cost[i].nombre<<endl;
     cout <<"La cantidad del articulo: "<<cost[i].cantidad<<endl;  
     cout <<"El precio unitario del articulo: "<<cost[i].precio<<" $"<<endl;  
     cout <<"El costo del articulo: "<<cost[i].costo<<" $"<<endl;   
    }
}
