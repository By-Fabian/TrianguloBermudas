//
// Created by Jean Pierre on 28/11/2019.
//

#include "ordenes.h"
void ordene_t::guardar_ordenes(c_Robot &rob) {
    t_code c = rob.get_code();
    string g = rob.get_producto().get_num_product();
    //Falta si esta recibiendo o sacando
    //falta ruta
    fstream ficheroEntrada;
    ficheroEntrada.open ("ordenes.txt",ios::out&ios::app);
    ficheroEntrada<<"Robot con code: "<<c<<endl;
    ficheroEntrada<<"Producto dentro de Robot: "<<g<<endl;
    ficheroEntrada<<"------------------------------------------"<<endl;
    ficheroEntrada.close();
}

void ordene_t::mostrar_odenes() {
    fstream ficheroEntrada;
    ficheroEntrada.open ("ordenes.txt",ios::in);
}

ordene_t::ordene_t(c_Robot _rob, c_Robot _rob2, c_Robot _rob3) :
rob1(_rob),rob2(_rob2),rob3(_rob3){
}
