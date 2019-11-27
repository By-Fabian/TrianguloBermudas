//
// Created by Usuario on 26/11/2019.
//

#include "c_Robot.h"

c_Robot::c_Robot(t_entero fila):num_robo{fila} {
    enx_i=0;
    eny_ii=fila;
    eny_i=fila;
}

void c_Robot::regresar_home() {
    enx_i=0;
    enx_i=eny_ii;

}
