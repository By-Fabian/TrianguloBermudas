//
// Created by Usuario on 21/11/2019.
//

#ifndef MEEEEPRJJT_ALMACEN_H
#define MEEEEPRJJT_ALMACEN_H
#include "tipos_all.h"
#include "c_Robot.h"
#include <iostream>


class c_Slot{
private:
    t_cantidad niveles;
    vector<c_Producto> productos;
    string super="*";
    c_Robot robot01;
public:
    c_Slot(t_cantidad _nvl);
    void set_niveles(t_cantidad _niv){niveles=_niv;}
    void set_super(string _super){super=_super;}
    void quitar(c_Robot _robo01);
    void almacenar(c_Robot _robo01);
    string get_superf(){ return super;};
};

class c_Almacen {
private:
    t_entero num_fil;
    t_entero num_col;
    t_entero num_niv;
    vector<c_Robot> robots;
    vector<vector<c_Slot>> slots_m;
public:
    c_Almacen(t_entero filas,t_entero columnas, t_entero niveles);
    t_code get_code_robot(t_entero fila, t_entero colum);
    c_Robot get_num_robot(t_entero _rob);
    c_Slot get_slot(t_entero fila, t_entero colum);
    void  almacenar(c_Robot _robot, t_pos _y, t_pos _x);
    void mostrar_almacen();
    void actualizar_almacen();
};

#endif //MEEEEPRJJT_ALMACEN_H
