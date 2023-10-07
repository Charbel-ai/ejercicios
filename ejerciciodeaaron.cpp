#include <iostream>
// Un programa que imprima números del 1 al 100, pero con las siguientes condiciones:
//- Cuando imprima un número divisible por 3, en lugar de imprimir el número imprime "café"
//- Lo mismo pero con un número divisible por 5 e imprime "leche"
//- Lo mismo pero con un número divisible por 10 e imprime "hielos"
//- Cuando haya un número divisible por 3 y 5, tiene que imprimir "café con 
//leche", 5 y 10 "leche con hielos", 3 y 10 "café con hielos", y si son los tres 
//debería imprimir "café con leche y hielos"

int main() {
    for (int a = 1; a <=100; a ++){
        if ((a % 3 == 0)&&(a % 5 == 0 )&&(a % 10 == 0)){
            std::cout<<"cafe con leche y hielos"<<std::endl;
        }
        else if ( (a % 3 == 0) && (a % 5 == 0) ){
            std::cout<<"cafe con leche "<<std::endl;
        }
        else if ((a % 5 == 0) && (a % 10 == 0)){
            std::cout<<"leche con hielos "<<std::endl;
        }
        else if ((a % 3 == 0) && (a % 10 == 0)){
            std::cout<<"cafe con hielos "<<std::endl;
        }
        else if (a % 3 == 0){
            std::cout<<"cafe"<<std::endl;

        }
        else if (a % 5 == 0){
            std::cout<<"leche"<<std::endl;

        }
        else if (a % 10 == 0){
            std::cout<<"hielos "<<std::endl;

        }
        else {
            std::cout<<a<<std::endl; 
        }

    }


    return 0; 
}

