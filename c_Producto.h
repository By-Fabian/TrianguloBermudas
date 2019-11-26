//
// Created by Usuario on 26/11/2019.
//

#ifndef MEEEEPRJJT_C_PRODUCTO_H
#define MEEEEPRJJT_C_PRODUCTO_H

#include "tipos_all.h"

class c_Producto{
private:
    t_product product;
public:
    c_Producto (){};
    ~c_Producto(){};
    c_Producto(t_product _pro){product=_pro;}
    t_product get_product(){return product;}
};
#endif //MEEEEPRJJT_C_PRODUCTO_H
