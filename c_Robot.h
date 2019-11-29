//
// Created by Usuario on 26/11/2019.
//

#ifndef MEEEEPRJJT_C_ROBOT_H
#define MEEEEPRJJT_C_ROBOT_H

#include "c_Producto.h"
class c_Robot{
private:
    t_code code;
    t_entero num_robo;
    t_pos eny_ii;
    t_pos enx_i;
    t_pos eny_i;
    t_pos enx_f;
    t_pos eny_f;
    c_Producto product_using;
    string sup="[R]";
public:
    c_Producto pro01;
    c_Robot(t_entero fila);
    c_Robot(){};
    void set_code(t_code _code){code=_code;};
    t_code get_code(){return code;};
    c_Producto get_producto(){return  product_using;};
    string get_sup(){ return sup;};
    t_pos get_eny_ii(){ return eny_ii;}
    t_pos get_enx_i(){ return enx_i;}
    t_pos get_eny_i(){ return eny_i;}
    t_pos get_enx_f(){ return enx_f;}
    t_pos get_eny_f(){ return eny_f;}
    void set_pos_ir(t_pos _x, t_pos _y);
    void set_pro(c_Producto &pro01){product_using=pro01;};
    void set_sup(string _homef){sup=_homef;};
    void regresar_home();
};
//hy
#endif //MEEEEPRJJT_C_ROBOT_H
