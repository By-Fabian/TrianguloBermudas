//
// Created by Usuario on 21/11/2019.
//

#ifndef MEEEEPRJJT_TIPOS_ALL_H
#define MEEEEPRJJT_TIPOS_ALL_H
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <stdlib.h>

class c_Producto;
class c_Slot;
using namespace std;

using t_product = string;
using t_cantidad=unsigned;
//PARA CREAR EL ALMACEN PERO SIN MOSTRAR
using v_niv=vector<c_Slot>;
using vv_matrix=vector<v_niv>;
//using vvv_matriz=vector<vv_column>;
//PARA CREAR TABLA SUPERIOR, DONDE TODO SE MUEVE
using t_entero=int;
using m_col=vector<string>;
using matrix=vector<m_col>;
//ROBOT
using t_pos=unsigned;
using t_code=int;
using t_num=unsigned;
using t_state=bool;
//FUNCIONES
#endif //MEEEEPRJJT_TIPOS_ALL_H
//hy