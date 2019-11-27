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
    cout<<"Ingresar producto:";cin>>product;
    c_Producto p01(product);
    cout<<"Ingresa el numero del robot:";cin>>rob;
    cout<<"Ingresa a donde lo quieres ingresar en 'Y' :";cin>>pos_y;
    cout<<"Ingresa a donde lo quieres ingresar en 'X' :";cin>>pos_x;
    //Creo un objeto robot para almacenar al robot del almacen
    //Ingreso al produto en la clase robot
    //R01.set_pro(p01);
    a1.get_num_robot(rob).set_pro(p01);
    //S1.almacenar(R01);
    a1.almacenar(a1.get_num_robot(rob), pos_y, pos_x);
    a1.actualizar_almacen();
    return 0;
}