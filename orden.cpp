//
// Created by Jean Pierre on 1/11/2019.
//

#include "orden.h"

void orden::calcular_ruta(producto_t *pproducto, robot_t *probot) {
    posicion robot = m_robot->getUbicacion();
    posicion slot = m_producto->get_ubicacion();
}

orden::orden(producto_t *p_producto, robot_t *probot){
    m_producto=p_producto;
    m_robot=probot;
}
