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
    c_Producto produ;
    vector<c_Producto> productos;
    string super="*";
public:
    c_Slot(){};
    c_Slot(t_cantidad _nvl);
    void set_niveles(t_cantidad _niv){niveles=_niv;}
    void set_super(string _super){super=_super;}
    void almacenar(c_Robot &robo01);
    void quitar(c_Robot robo01);
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
    void mostrar_almacen();
    void actualizar_almacen();
};

#endif //MEEEEPRJJT_ALMACEN_H
/*
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
    vector<c_Producto*> get_vector(){return productos;}; //f
    void set_niveles(t_cantidad _niv){niveles=_niv;};
    void add_productos();//añado mña a las 10 porque en el editor se va ha ver feo
    void quitar_productos();//f


};
class c_Robot{
private:
    @@ -35,10 +40,12 @@ class c_Robot{
        t_product product_using;
        t_num priori;
        t_state estado;
        //añadir un puntero a slot
    public:
        c_Robot(t_entero fila){num_fila=fila;}
        t_code get_code(){ return codigo;};
        void set_xi(t_pos en);

    };
    class c_Almacen {
    private:
        @@ -55,6 +62,9 @@ class c_Almacen {
            t_entero get_nivel();
            t_entero get_columnas();
            void mostrar_almacen(m_fil matriz);
            void add_robots();
            void add_slots();
            void darle_mision_a_robot();
        };
        */