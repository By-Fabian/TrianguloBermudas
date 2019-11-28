#include <iostream>
#include "tipos_all.h"
#include "ALMACEN.h"


int main() {
    int fil=0,col=0,niv=0;
    int _x,_y;
    t_product product;
    t_pos pos_y,pos_x;
    int rob;
    cout<<"\nFilas: ";cin>>fil;
    cout<<"Columnas: ";cin>>col;
    cout<<"Niveles: ";cin>>niv;
    c_Almacen a1(fil,col,niv);
    a1.mostrar_almacen();
    cout<<"--------------No pudes sacar productos--------------"<<endl;
    cout<<"Ingresar producto:";cin>>product;
    c_Producto p01(product);
    cout<<"Ingresa el numero del robot:";cin>>rob;
    cout<<"Ingresa a donde lo quieres ingresar en 'Y' :";cin>>pos_y;
    cout<<"Ingresa a donde lo quieres ingresar en 'X' :";cin>>pos_x;
    //Ingreso al producto en la clase robot
    a1.get_num_robot(rob).set_pro(p01);
    //llevar el producto al slot, y ponerlo al vector Productos del slot pos_y+pos_x
    a1.almacenar(a1.get_num_robot(rob), pos_y, pos_x);
    a1.actualizar_almacen();
    cout<<endl;
    a1.mostrar_ruta(a1.get_num_robot(rob));
    return 0;
}