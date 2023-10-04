#include <iostream>
//Que el usuario ingrese la cantidad de productos que compro en una tienda y si compro arriba de 5 productos
//que se le haga un descuento del 10% y aparte que se suma al final el IVA (16%)
int main (){
int numerodeproductos; 
int totaldecompra; 


std::cout<<"¿Cuantos productos compraste?"<<std::endl; 
std::cin>> numerodeproductos; 
std::cout<<"¿Cual fue el precio total de tu compra?"<<std::endl; 
std::cin>> totaldecompra; 

//Operacion por si el numero de productos es mayor a 5
if (numerodeproductos > 5){
int descuento = totaldecompra - totaldecompra * .10;
//int descuento2 = totaldecompra - descuento; 
int totaldecompra2 = totaldecompra * .16;
int preciototal = descuento + totaldecompra2; 

std::cout<<"Compraste "<< numerodeproductos << "productos."<< "Con el descuento, el precio total es " << preciototal; 
}

else if ( numerodeproductos < 5){
int totaldecompra2 = totaldecompra * .16;
std::cout<<"Compraste " << numerodeproductos << " productos " << " El total de tu compra es de " << totaldecompra + totaldecompra2; 

}






    return 0; 
}