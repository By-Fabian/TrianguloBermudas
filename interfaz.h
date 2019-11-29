//
// Created by utec on 22/11/19.
//

#ifndef TRIANGULOBERMUDAS_INTERFAZ_H
#define TRIANGULOBERMUDAS_INTERFAZ_H

#include "tipos_g.h"
#include "ordenes.h"
//#include "ALMACEN.h"

void start();
void triangulodelasbermudas();
void crear_almacen();
void agregarproductoalmacen();
void retirarproductoalmacen();
void tipodeproducto();
void estadoslot();
void menu();
void mostraralmacen(c_Almacen almacen);
void operacionconrobots(ordene_t &ord);
void reporte(ordene_t &ord, c_Almacen almacen);
void salir();
auto imprimir();
auto leer();


#endif //TRIANGULOBERMUDAS_INTERFAZ_H
