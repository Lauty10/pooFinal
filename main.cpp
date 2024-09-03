#include <iostream>
#include "Paginah.h"

using namespace std;

int main(){
    bool errorUno=false,errorDos=false,errorTres=false;
    std::string nombreUsuario;
    std::string claveUsuario;
    std::string rolUsuario;
    Usuario objHardcodeado[5]={
    Usuario("JUAN","BOCAJUNIORS","USER"),
    Usuario("MARCOS","INDEPENDIENTE","USER"),
    Usuario("MAXI","RACING","USER"),
    Usuario("AGUSTIN","SANLORENZO","USER"),
    Usuario("LAUTARO","RIVERPLATE","ADMIN"),
    };
    Usuario objIngresado;
    cout<<"INGRESE SU NOMBRE DE USUARIO:";
    cin>>nombreUsuario;
    objIngresado.setNombre(nombreUsuario);
    system("pause");
    system("cls");
    cout<<"INGRESE SU CLAVE DE USUARIO:";
    cin>>claveUsuario;
    objIngresado.setClave(claveUsuario);
    system("pause");
    system("cls");
    cout<<"INGRESE SU ROL DE USUARIO:";
    cin>>rolUsuario;
    objIngresado.setRol(rolUsuario);
    system("pause");
    system("cls");
    for(int j=0;j<5;j++){
    if(objIngresado.getNombre()==objHardcodeado[j].getNombre()){
    if(objIngresado.getClave()==objHardcodeado[j].getClave()){
    if(objIngresado.getRol()==objHardcodeado[j].getRol()){
    system("cls");
    errorUno=false;
    errorDos=false;
    errorTres=false;
    cout<<"LA POSICION DEL USUARIO EN EL ARRAY ES:"<<j<<endl;
    cout<<"BIENVENIDO "<<objIngresado.getNombre()<<endl;
    cout<<"SU ROL DE USUARIO ES:"<<objIngresado.getRol()<<endl;
    system("pause");
    system("cls");
    break;
    }else{
    errorTres=true;
    }
    }else{
    errorDos=true;
    }
    }else{
    errorUno=true;
    }
    }
    if(errorUno==true){
        cout<<"EL NOMBRE NO SE ENCUENTRA EN EL SISTEMA/O ES INCORRECTO"<<endl;
    }
      if(errorDos==true){
        cout<<"LA CLAVE NO SE ENCUENTRA EN EL SISTEMA/O ES INCORRECTA"<<endl;
    }
      if(errorTres==true){
        cout<<"EL ROL NO SE ENCUENTRA EN EL SISTEMA/O ES INCORRECTO"<<endl;
    }
    return 0;
}
