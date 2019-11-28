//
// Created by Usuario on 26/11/2019.
//

#include "c_Robot.h"

c_Robot::c_Robot(t_entero fila):num_robo{fila} {
    eny_ii=fila;
    enx_i=0;
    eny_i=fila;
    enx_i=0;
    eny_f=fila;
    enx_f=0;
}

void c_Robot::regresar_home() {
    enx_i=0;
    enx_f=eny_ii;
}

void c_Robot::set_pos_ir(t_pos _x, t_pos _y){
    eny_i=eny_f;
    enx_i=enx_f;
    enx_f=_x; eny_f=_y;
}
//hy