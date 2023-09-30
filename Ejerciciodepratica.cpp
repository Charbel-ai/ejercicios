//Haz un programa sobre crepas, donde haya dos menus, uno salado y uno dulce. Para las frutas y proteinas debe haber cuatro opciones para cada una
//Para las salsas y las cremas debe de haber 3 opciones por cada una. Cada opcion tendra que tener un precio predeterminado.
//Deberas pedirle al usuario escoger entre los dos menus, Despues deberas pedirle que escoja su fruta y crema, y su proteina y salda segun el menu
//Toma en cuenta que el precio base de la crepa es 40 pesos, al final tendras que mostrar que tipo de crepa fue y cuanto fue el total de la crepa 
//Si el usuario ingresa algun tipo de dato que no existe, deberas pedirle que ingrese uno que si exista. 

#include <iostream> 
#include <string> 
char tipodecrepa;
char decision;  
int fruta; 
int crema; 
int proteina;
int salsa; 
int costototal = 40;

void menudeingredientesdulces (){
std::cout<<"Menu de ingredientes dulces"<<std::endl; 
std::cout<<"Frutas : 1 = fresas-6$,   2 = platano-5$, 3 = duraznos-5$, 4 = arandanos-9$"<<std::endl; 
std::cout<<"Cremas: 5 = chocolate-10$, 6 = cajeta-11$, 7 = lechera-12$"<<std::endl; 
}

void menudeingredientessalados (){
std::cout<<"Menu de ingredientes dulces"<<std::endl; 
std::cout<<"Proteinas : 10 = pollo-12$,   11 = tocino-11$,  12 = peperoni-13$,  13 = pastor-15$"<<std::endl; 
std::cout<<"Salsas: 14 = salsa de tomate-8$, 15 = chipotle-9$, 16 = Chipotle mayonesa-14$"<<std::endl; 
}

int main (){
std::cout<<"------  CREPAS  ------"<<std::endl; 
std::cout<<"Bienvenido a la tienda de crepas"<<std::endl; 
std::cout<<"Existen dos menus, un menu dulce y un menu salado"<<std::endl; 
std::cout<<"El costo estandar de un crepa es de 40 pesos, mas los ingredientes que quieras agregar, maximo 2"<<std::endl; 
std::cout<<"El menu de ingredientes dulces el siguiente"<<std::endl; 
std::cout<<""<<std::endl; 
menudeingredientesdulces();
std::cout<<""<<std::endl; 
std::cout<<"El menu de ingredientes salados el siguiente"<<std::endl; 
std::cout<<""<<std::endl; 
menudeingredientessalados();

std::cout<<""<<std::endl; 
while((tipodecrepa != 'D') && (tipodecrepa != 'S')){
std::cout<<"Escoge tu tipo de crepa: D para un menu dulce y S para una menu salado"<<std::endl; 
std::cin>>tipodecrepa; 
if ((tipodecrepa != 'D') && (tipodecrepa!= 'S')){
std::cout<<"Escoge una opcion que exista"<<std::endl; 
} 
}

std::cout<<""<<std::endl; 

//Tipo de crepa D
if (tipodecrepa == 'D'){
std::cout<<"Has escogido una crepa dulce "<<std::endl; 
std::cout<<"Escoge una crema y una fruta del menu de ingredientes con el numero que tienen asignados"<<std::endl; 
menudeingredientesdulces();

while ((fruta != 2) && (fruta != 1) && (fruta != 3 ) && (fruta != 4)){
std::cout<<"Escoge tu fruta: "<<std::endl; 
std::cin>>fruta; 
if ((fruta != 2) && (fruta != 1) && (fruta != 3 ) && (fruta != 4)){
std::cout<<"Escoge una opcion que exista"<<std::endl; 
}
}
if (fruta == 1){
costototal = costototal + 6;
}
else if (fruta == 2){
costototal = costototal + 5;
}
else if (fruta == 3){
costototal = costototal + 5;
}
else if (fruta == 4){
costototal = costototal + 9;
}
while ((crema != 5) && (crema != 6) && (crema != 7 )){
std::cout<<"Escoge tu crema: "<<std::endl; 
std::cin>>crema; 
if ((crema != 5) && (crema != 6) && (crema != 7 )){
std::cout<<"Escoge una opcion que exista"<<std::endl; 
}
}
if (crema == 5){
costototal = costototal + 10;
}
else if (crema == 6){
costototal = costototal + 11;
}
else if (crema == 7){
costototal = costototal + 12;
}
std::cout<<""<<std::endl; 
std::cout<<"Tu pedido esta completo"<<std::endl; 
std::cout<<"Es una crepa dulce, el total es de "<< costototal << " pesos "<<std::endl; 

}

//Tipo de crepa S
if (tipodecrepa == 'S'){
std::cout<<"Has escogido una crepa salada "<<std::endl; 
std::cout<<"Escoge una proteina y una salsa"<<std::endl; 
menudeingredientessalados();

while (( proteina!= 10) && (proteina != 11) && (proteina != 12 ) && (proteina != 13)){
std::cout<<"Escoge tu proteina: "<<std::endl; 
std::cin>>proteina; 
if (( proteina!= 10) && (proteina != 11) && (proteina != 12 ) && (proteina != 13)){
std::cout<<"Escoge una opcion que exista"<<std::endl; 
}
}
if (proteina == 10){
costototal = costototal + 12;
}
else if (proteina == 11){
costototal = costototal + 11;
}
else if (proteina == 12){
costototal = costototal + 13;
}
else if (proteina == 13){
costototal = costototal + 15;
}

while ((salsa != 14) && (salsa != 15) && (salsa != 16 )){
std::cout<<"Escoge tu salsa: "<<std::endl; 
std::cin>>salsa; 
if ((salsa != 14) && (salsa != 15) && (salsa != 16 )){
std::cout<<"Escoge una opcion que exista"<<std::endl; 
}
}

if (salsa == 14){
costototal = costototal + 8;
}
else if (salsa == 15){
costototal = costototal + 9;
}
else if (salsa == 16){
costototal = costototal + 14;
}
std::cout<<""<<std::endl; 
std::cout<<"Tu pedido esta completo"<<std::endl; 
std::cout<<"Es una crepa salada, el total es de "<< costototal<< " pesos "<<std::endl; 

}





    return 0; 
}

