#include <iostream>
//Hacer un convertidor de escalas de temperatura que cada que acabe de 
//ejecutarse le pregunte al usuario si quiere hacer otra conversación, osea que 
//se pueda repetir n cantidad de veces y si el usuario pone una escala de 
//temperatura que no sea valida, que entonces le pida que vuelva a poner una 
//correcta
int main(){

float temperatura; 
float medida; 
float medida2; 

std::cout<<"------Convertidor de escalas------"<<std::endl;
std::cout<<"Ingresa la temepratura que quieres convertir, solo los numeros"<<std::endl;
std::cin>>temperatura;
do{
std::cout<<"Ingresa la temperatura original de tu medida, segun los numeros que se les asignaron (1= Fahrenheit , 2= Celsius , 3= Kelvin )"<<std::endl;
std::cin>>medida;
if ((medida != 1) && (medida != 2)&&(medida != 3)){
    std::cout<<"Ingresa una medida de teperatura valida"<<std::endl;}
}
while((medida != 1) && (medida != 2)&&(medida != 3));

do{
std::cout<<"Ingresa la temperatura a la que la quieres convertir, segun los numeros que se les asignaron (4= Fahrenheit , 5= Celsius , 6= Kelvin )"<<std::endl;
std::cin>>medida2;
if ((medida2 != 4) && (medida2 != 5)&&(medida2 != 6)){
    std::cout<<"Ingresa una medida de teperatura valida "<<std::endl;}
}
while((medida2 != 4) && (medida2 != 5)&&(medida2 != 6));

//Operacion de convercion de Fahrenheit
if((medida == 1)&&(medida2 == 5) ){
std::cout<<"Tu temperatura de Fahrenheit, es igual a "<< 5 * (temperatura - 32) / 9<< " Celsius ";}

else if ((medida == 1)&&(medida2 == 6)){
std::cout<<"Tu temperatura de Fahrenheit, es igual a "<< 5 * (temperatura - 32) / 9 + 273.15 << " Celsius ";}

else if ((medida == 1)&&(medida2 == 4)){
std::cout<<"Has escogido la misma temperatura, no has convertido tu temperatura, sigue siendo "<< temperatura << " Fahrenheit" << std::endl;}

//Conversion de Celsius 
if((medida == 2)&&(medida2 == 4) ){
std::cout<<"Tu temperatura de Celsius, es igual a "<< 5 * (temperatura - 32) / 9<< " Celsius ";}

else if ((medida == 2)&&(medida2 == 6)){
std::cout<<"Tu temperatura de Fahrenheit, es igual a "<< 5 * (temperatura - 32) / 9 + 273.15 << " Celsius ";}

else if ((medida == 2)&&(medida2 == 5)){
std::cout<<"Has escogido la misma temperatura, no has convertido tu temperatura, sigue siendo "<< temperatura << " Fahrenheit" << std::endl;}

   
   
   
   
   
   
    return 0; 

}

