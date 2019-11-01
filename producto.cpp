//
// Created by Jean Pierre on 1/11/2019.
//

#include "producto.h"
#include "tipos_g.h"
producto_t::producto_t(nombre _nombre, precio _costo):
del_producto(_nombre), costo(_costo){}

nombre producto_t::get_nombre() {
    return del_producto;
}

precio producto_t::get_precio() {
    return costo;
}
