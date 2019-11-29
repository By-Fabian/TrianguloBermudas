//
// Created by Jean Pierre on 28/11/2019.
//

#ifndef MEEEEPRJJT_ORDENES_H
#define MEEEEPRJJT_ORDENES_H

#include <fstream>
#include <utility>
#include "ALMACEN.h"


class ordene_t {
private:
    string opcion;
public:
    ordene_t(){};
    void guardar_ordenes(c_Robot rob, c_Almacen& almacen);
    void mostrar_odenes();
    void set_op(string _opcion); //{opcion=_opcion;}
};

#endif //MEEEEPRJJT_ORDENES_H
