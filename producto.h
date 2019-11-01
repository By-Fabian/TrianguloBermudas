//
// Created by Jean Pierre on 1/11/2019.
//

#ifndef TRIANGULOBERMUDAS_PRODUCTO_H
#define TRIANGULOBERMUDAS_PRODUCTO_H
#include "tipos_g.h"
typedef string nombre;
typedef int valor;
typedef float precio;

class producto_t {
    nombre del_producto;
    valor unidad=1;
    precio costo;
public:
    producto_t(nombre _nombre, precio _costo);
    nombre get_nombre();
    precio get_precio();
    valor get_unidad(){ return unidad;}
};


#endif //TRIANGULOBERMUDAS_PRODUCTO_H