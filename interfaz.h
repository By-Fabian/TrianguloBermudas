//
// Created by utec on 22/11/19.
//

#ifndef TRIANGULOBERMUDAS_INTERFAZ_H
#define TRIANGULOBERMUDAS_INTERFAZ_H

#include "tipos_g.h"
#include "ordenes.h"
#include "ALMACEN.h"

void start();
void triangulodelasbermudas();
void crear_almacen();
void agregarproductoalmacen(c_Almacen& al,ordene_t& ord);
void retirarproductoalmacen(c_Almacen& al,ordene_t& ord);
bool tipodeproducto(c_Almacen& al,int fila,int columna,string producto);
bool estadolot(c_Almacen& al,int fila,int columna,int cantidad);
void menu(c_Almacen & al);
void mostraralmacen(c_Almacen& al);
void operacionconrobots(c_Almacen& al,ordene_t& ord);
void reporte(c_Almacen& al,ordene_t& ord);
void leerarchivos(ordene_t &ord);
void salir();


#endif //TRIANGULOBERMUDAS_INTERFAZ_H
