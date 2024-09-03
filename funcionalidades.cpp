#include <iostream>
#include "Paginah.h"

using namespace std;

void Usuario::setNombre(std::string n){
this->nombre=n;
}
void Usuario::setRol(std::string r){
this->rol=r;
}
void Usuario::setClave(std::string  c){
this->clave=c;
}
std::string Usuario::getNombre(){
return nombre;
}
std::string Usuario::getRol(){
return rol;
}

std::string Usuario::getClave(){
return clave;
}


