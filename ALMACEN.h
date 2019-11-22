//
// Created by Usuario on 21/11/2019.
//

#ifndef MEEEEPRJJT_ALMACEN_H
#define MEEEEPRJJT_ALMACEN_H
#include "tipos_all.h"
#include <iostream>

class c_Producto{
private:
    t_product product;
public:
    c_Producto(){};
    void set_product(t_product _pro){product=_pro;}
    t_product get_product(){return product;}
};

class c_Slot{
private:
    t_cantidad niveles;
    vector<c_Producto*> productos;
public:
    c_Slot(t_cantidad _nvl){niveles=_nvl;};
    void set_niveles(t_cantidad _niv){niveles=_niv;}
};
class c_Robot{
private:
    t_code codigo;
    t_entero num_fila;
    t_pos enx_i;
    t_pos eny_i;
    t_pos enx_f;
    t_pos eny_f;
    t_product product_using;
    t_num priori;
    t_state estado;
public:
    c_Robot(t_entero fila){num_fila=fila;}
    t_code get_code(){ return codigo;};
    void set_xi(t_pos en);
};
class c_Almacen {
private:
    t_entero num_fil;
    t_entero num_col;
    t_entero num_niv;
    vector<c_Robot> robots;
    vector<c_Slot> slots;
public:
    c_Almacen(t_entero filas,t_entero columnas, t_entero niveles);
    m_fil crear_almacen(t_entero fil, t_entero col);
    t_code get_code_robot(t_entero fila);
    t_entero get_filas();
    t_entero get_nivel();
    t_entero get_columnas();
    void mostrar_almacen(m_fil matriz);
};

#endif //MEEEEPRJJT_ALMACEN_H
