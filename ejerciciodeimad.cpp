#include <iostream>
#include <math.h>
//Crear un programa q resuelva ecuaciones cuadráticas, en una misma línea 
//mandar los valores de a,b y c y se deben de imprimir las dos raíces 
//(resultados) al igual q la ecuación  y= ax2+ bx + c con los valores de (a,b y c 
//ejemplo “y= 2x2 + 3x + 5”)
int main (){

double a;
double b; 
double c; 
double operacion = (b * b) - (4 * a *c);
std::cout<<"---Suma de una ecuacion cuadratica---"<<std::endl;
std::cout<<"Ingrese el valor de a"<<std::endl;
std::cin>>a; 
std::cout<<"Ingrese el valor de b"<<std::endl;
std::cin>>b; 
std::cout<<"Ingrese el valor de c"<<std::endl;
std::cin>>c; 
std::cout<<"La ecuacion incial es y = "<< a<< "x2 + "<< b<< "x + "<< c <<std::endl;
std::cout<<""<<std::endl;
std::cout<<"Los resultados de la ecuacion son"<<std::endl;

std::cout<<"X1 = "<< (-b + sqrt(operacion)) / (2 * a)<<std::endl;
std::cout<<"X2 = "<< (-b - sqrt (operacion)) / (2 * a)<<std::endl;




    return 0; 
}
