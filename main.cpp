#include <iostream>
#include "tipos_all.h"
#include "ALMACEN.h"

void intt(ostream& out, istream& in){
    int fil=0,col=0,niv=0;
    int _x,_y;
    t_product product;
    t_pos pos_y,pos_x;
    int rob;
    out<<"\nFilas: ";in>>fil;
    out<<"Columnas: ";in>>col;
    out<<"Niveles: ";in>>niv;
    c_Almacen a1(fil,col,niv);
    a1.mostrar_almacen(out);
    out<<"--------------No pudes sacar productos--------------"<<endl;
    out<<"Ingresar producto:";in>>product;
    c_Producto p01(product);
    out<<"Ingresa el numero del robot:";in>>rob;
    out<<"Ingresa a donde lo quieres ingresar en 'Y' :";in>>pos_y;
    out<<"Ingresa a donde lo quieres ingresar en 'X' :";in>>pos_x;
    //Ingreso al producto en la clase robot
    a1.get_num_robot(rob).set_pro(p01);
    //llevar el producto al slot, y ponerlo al vector Productos del slot pos_y+pos_x
    a1.almacenar(a1.get_num_robot(rob), pos_y, pos_x);
    a1.actualizar_almacen(out);
    out<<endl;
    a1.mostrar_ruta(a1.get_num_robot(rob),out);
}


int main() {
    ostream & out=cout;
    istream & in=cin;
    intt(out, in);
    return 0;
}
//hy