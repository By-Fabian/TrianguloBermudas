//
// Created by Jean Pierre on 1/11/2019.
//

#ifndef TRIANGULOBERMUDAS_ORDEN_H
#define TRIANGULOBERMUDAS_ORDEN_H

#include "tipos_g.h"
#include "producto.h"
#include "robot.h"
#include "cstore.h"

typedef unsigned posicion;
class orden {
private:
    producto_t*m_producto;
    robot_t*m_robot;
    void calcular_ruta(producto_t*p_producto,robot_t*probot);

public:
    orden(producto_t*p_producto,robot_t*probot);

    //aún por añadir
};


#endif //TRIANGULOBERMUDAS_ORDEN_H
