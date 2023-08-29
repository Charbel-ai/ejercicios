#include <iostream>
#include <string> 

char producto;
double numerodeproducto;

//Funcion que despliega el menu de hershey's
void tiposdehersheys(){
    std::cout<<"3.1 Hershey's oscuro"<<std::endl;
    std::cout<<"3.2 Hershey's blanco"<<std::endl;
    
    std::cout<<"¿Cual es tu eleccion?";
    std::cin>>numerodeproducto;
    
    if(numerodeproducto == 3.1){
        std::cout<<"Expulsando producto Hershey's oscuro"<<std::endl;
    }
    else if(numerodeproducto == 3.2){
        std::cout<<"Expulsando producto Hershey's blanco"<<std::endl;
    }

}
//Funcion que despliega menu de m&m's
void tiposdemms(){
    std::cout<<"2.1 M&m's de cacahuate"<<std::endl;
    std::cout<<"2.2 M&m's clasicos"<<std::endl;
    
    std::cout<<"¿Cual es tu eleccion?";
    std::cin>>numerodeproducto;
    
    if(numerodeproducto == 2.1){
        std::cout<<"Expulsando producto M&m's de cacahuate"<<std::endl;
    }
    else if(numerodeproducto == 2.2) {
        std::cout<<"Expulsando producto M&m's clasicos"<<std::endl;
}
}

//Funcion que guarda los tipos de kikat 
void tiposdekitkat(){
    std::cout<<"1.1 Kitkat clásico"<<std::endl;
    std::cout<<"1.2 Kitkat dark"<<std::endl;
    std::cout<<"1.3 Kitkat white"<<std::endl;
    std::cout<<"1.4 Kitkat chunky"<<std::endl;
            
    std::cout<<"¿Cual es tu eleccion?";
    std::cin>>numerodeproducto;
            
    std::cout<<"Expulsando producto: "<<numerodeproducto<<std::endl;
}


//Funcion para que me de las opciones de refrescos y me expulse el refresco
void refrescos(){
    std::cout<<"1: coca light"<< std::endl; 
    std::cout<<"2: coca normal"<< std::endl; 
    std::cout<<"3: manzanita"<< std::endl; 
    std::cout<<"4: coca sprite"<< std::endl;

    std::cout<<"Elige tu opcion:"<<std::endl;
    std::cin>>numerodeproducto; 
    
    std::cout<<"Expulsando producto: "<< numerodeproducto<<std::endl;
  }

int main() {
    
    char producto2 = std::toupper(producto);

    while(producto2  == 'T' or 'R' or 'P'){

  std:: cout<< "T para tipos de chocolates"<< std::endl ;
  std:: cout<< "R para tipos de refrescos"<< std::endl; 
  std:: cout<< "P para tipos de papas"<< std::endl ;
  std:: cout<< "C para cancelar/ indicar que ya no quiere seguir" << std::endl; 

 //Parte donde se escoge el producto principal
  std::cout<< "Elige un producto"<< std::endl; 
  std:: cin>> producto; 
  
  char producto2 = std::toupper(producto);
  //Condicion donde despues se desplegaran los demas menus
  if (producto2 == 'R'){
      refrescos();
  }
  else if (producto2 == 'P'){
      std::cout<<"Una disculpa, en este momento no hay papas"<<std::endl; 
  }
  //Parte que despliega los menus de chocolates inciales
  else if (producto2 == 'T') {
      std::cout<<"1.Kikat"<<std::endl;
      std::cout<<"2.M&m's"<<std::endl;
      std::cout<<"3.Hershey's"<<std::endl;
      
      std::cout<<"Elige tu opcion: "<<std::endl;
      std::cin>>numerodeproducto;

        if(numerodeproducto == 1){
            tiposdekitkat();
        }
        else if(numerodeproducto == 2){
            tiposdemms();
        }
        else if(numerodeproducto == 3){
            tiposdehersheys();

        }
     
}//Parte que hace que el loop termine
 else if(producto2 == 'C'){
    std::cout<<"Gracias, saliendo..."<<std::endl; 
    break; 

     }

    }
  return 0; 
}