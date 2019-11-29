//
// Created by Usuario on 21/11/2019.
//

#ifndef MEEEEPRJJT_ALMACEN_H
#define MEEEEPRJJT_ALMACEN_H
#include "c_Robot.h"

class c_Slot{
private:
    t_cantidad niveles;
    vector<c_Producto> productos;
    string super="*";
    c_Robot robot01;
    t_product product;
public:
    c_Slot(t_cantidad _nvl);
    ~c_Slot(){};
    void set_niveles(t_cantidad _niv){niveles=_niv;}
    void set_super(string _super){super=_super;}
    void quitar_producto();
    void add_producto(t_product _product);
    string get_superf(){ return super;};
    string get_producto(){ return productos[1].get_num_product();}
    t_cantidad get_espacio_uso();
    //friend void guardar_ordenes(c_Robot rob,c_Almacen &al);

};

class c_Almacen {
private:
    t_entero num_fil;
    t_entero num_col;
    t_entero num_niv;
    vector<c_Robot> robots;
    vector<vector<c_Slot>> slots_m;
public:
    c_Almacen()= default;
    c_Almacen(t_entero filas,t_entero columnas, t_entero niveles);
    ~c_Almacen(){};
    t_code get_code_robot(t_entero fila, t_entero colum);
    c_Robot get_robot_num(t_entero _rob);
    c_Slot get_slot(t_entero fila, t_entero colum);
    void  almacenar(c_Robot _robot, t_pos _y, t_pos _x);
    void retirar_producto(c_Robot _robo01, c_Producto _product);
    void regresar_producto(c_Robot _robo01);
    t_pos buscar_producto_x(t_product _pro);
    t_pos buscar_producto_y(t_product _pro);
    t_entero get_niveles(){ return num_niv;};
    t_entero get_filas(){ return num_fil;};
    t_entero get_columnas(){ return num_col;};
    void mostrar_almacen(ostream& out);
    void actualizar_almacen(ostream& out);
    void mostrar_ruta(c_Robot _robo01,ostream& out);
};

#endif //MEEEEPRJJT_ALMACEN_H
//hy