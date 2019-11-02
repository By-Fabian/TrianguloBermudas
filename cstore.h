//
// Created by Usuario on 1/11/2019.
//

#ifndef TRIANGULOBERMUDAS_CSTORE_H
#define TRIANGULOBERMUDAS_CSTORE_H

typedef bool t_buttom;
typedef unsigned t_num_product;
typedef double t_decimal;
typedef size_t t_tamano;
typedef string t_producto;

typedef int number_t;
typedef vector<number_t> t_col_y;
typedef vector<t_col_y> t_ubicacion;
typedef vector<t_ubicacion> t_cantidad;

class cstore {
private:
    t_tamano p_tamano_slot;
    t_producto p_tipo_producto;
    t_num_product p_cantidad_producto;
    t_ubicacion p_ubicacion;

    t_ubicacion set_encontrar_producto();

public:
    //constructor
    cstore();
    cstore(t_tamano p_tamano_slot; t_producto p_tipo_producto; t_num_product p_cantidad_producto; t_ubicacion p_ubicacion;);
    //metodos setter-recibir
    void set_producto(t_producto producto_in){p_tipo_producto = producto_in;}
    void set_cantidad(t_num_product cantidad_in){p_cantidad_producto = cantidad_in;}
    //metodos getter-dar
    t_ubicacion get_ubicacion(){ return set_encontrar_producto();}

};


#endif //TRIANGULOBERMUDAS_CSTORE_H
