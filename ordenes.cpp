//
// Created by Jean Pierre on 28/11/2019.
//

#include "ordenes.h"

void ordene_t::guardar_ordenes(c_Robot rob, c_Almacen& almacen) {
    t_code c = rob.get_code();
    string g = rob.get_producto().get_num_product();
    fstream ficheroEntrada;
    ficheroEntrada.open ("ordenes.txt",ios::app);
    if (!ficheroEntrada.is_open()){
        cout<< "No se puede abrir"<<endl;
    }
    ficheroEntrada<<"Robot "<<c<<endl;
    ficheroEntrada<<"Producto dentro de Robot: "<<g<<endl;
    ficheroEntrada<<"Funcion que esta realizando el robot: "<<opcion<<endl;
    ficheroEntrada<<"Ruta asignada: ";

    almacen.mostrar_ruta(rob,cout);
    cout<<endl;
    ficheroEntrada<<"------------------------------------------"<<endl;
    ficheroEntrada.close();
}

void ordene_t::mostrar_odenes() {
    string cadena;
    ifstream datos("ordenes.txt");
    if(datos.fail()){
        cout<<"Texto entrada ordenes.txt no existe"<<endl;
    }else{
        while(!datos.eof()){
            getline(datos,cadena); //con esta funcion tomas la linea(limitada por \n)
            cout<<cadena<<endl;
        }
    }
}
void ordene_t::set_op(string _opcion){
    opcion = _opcion;
}
