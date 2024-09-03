#include <string>
#ifndef PAGINAH_H_INCLUDED
#define PAGINAH_H_INCLUDED


class Usuario{
private:
    std::string nombre;
    std::string clave;
    std::string rol;
public:
    Usuario(std::string n="Lautaro",std::string c="Riverplate1",std::string r="user"){
     this->nombre=n;
     this->clave=c;
     this->rol=r;
    }
    void setNombre(std::string n);
    std::string getNombre();
    void setClave(std::string c);
    std::string getClave();
    void setRol(std::string n);
    std::string getRol();

};

#endif // PAGINAH_H_INCLUDED
