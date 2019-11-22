//
// Created by Usuario on 21/11/2019.
//

#ifndef MEEEEPRJJT_TIPOS_ALL_H
#define MEEEEPRJJT_TIPOS_ALL_H
#include <xstring>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <string>

class c_Producto;
using namespace std;

using t_product = string;
using t_cantidad=unsigned;
//PARA CREAR EL ALMACEN PERO SIN MOSTRAR
using v_niv=vector<string>;
using vv_column=vector<v_niv >;
using vvv_filas=vector<vv_column >;
//PARA CREAR TABLA SUPERIOR, DONDE TODO SE MUEVE
using t_entero=int;
using m_col=vector<char>;
using m_fil=vector<m_col>;
//ROBOT
using t_pos=unsigned;
using t_code=string;
using t_num=unsigned;
using t_state=bool;
//FUNCIONES
void imprimir_matriz(m_fil matriz);
m_fil crear_matriz(t_entero fil, t_entero col);
void colocar_robot(m_fil &matriz);
void mover_robot(m_fil &matriz,t_entero filaf, t_entero colf);
#endif //MEEEEPRJJT_TIPOS_ALL_H
