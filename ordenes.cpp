//
// Created by Jean Pierre on 28/11/2019.
//

#include "ordenes.h"
void ordene_t::guardar_ordenes(c_Robot &rob,c_Almacen &alm) {
    t_code c = rob.get_code();
    string g = rob.get_producto().get_num_product();
    fstream ficheroEntrada;
    ficheroEntrada.open ("ordenes.txt",ios::out&ios::app);
    ficheroEntrada<<"Robot "<<c<<endl;
    ficheroEntrada<<"Producto dentro de Robot: "<<g<<endl;
    ficheroEntrada<<"Funcion que esta realizando el robot: "<<opcion<<endl;
    ficheroEntrada<<"Ruta asignada: "<<alm.mostrar_ruta(rob,cout)<<endl;
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
}

ordene_t::ordene_t(c_Robot _rob, c_Robot _rob2, c_Robot _rob3) :
rob1(_rob),rob2(_rob2),rob3(_rob3){
}//inicializalo vidal por fis :,v
