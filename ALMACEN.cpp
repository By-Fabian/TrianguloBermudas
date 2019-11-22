//
// Created by Usuario on 21/11/2019.
//

#include "ALMACEN.h"

c_Almacen::c_Almacen(t_entero filas, t_entero columnas, t_entero niveles):
num_fil(filas), num_col(columnas), num_niv(niveles){
    for(int i=0; i<filas;i++){
        robots.emplace_back(i);
    }
    for(int i=0;i<filas;i++){
        slots.emplace_back(niveles);
    }
}
m_fil c_Almacen::crear_almacen(t_entero fil, t_entero col) {
    m_col c;
    m_fil f;
    for(int i=0;i<col;i++){c.push_back('*');}
    for(int i=0;i<fil;i++){f.push_back(c);}
    return f;
}

t_code c_Almacen::get_code_robot(t_entero fila) {
    return robots[fila].get_code();
}

t_entero c_Almacen::get_filas() {
    return num_fil;
}

t_entero c_Almacen::get_nivel() {
    return num_niv;
}

t_entero c_Almacen::get_columnas() {
    return num_col;
}

void c_Almacen::mostrar_almacen(m_fil matriz) {
    int fil=matriz.size();
    int col=matriz[0].size();
    cout<<endl;
    for(int i=0; i<fil;i++){
        for(int j=0; j<col;j++)
            cout<<setw(5)<<matriz[i][j];
        cout<<endl;
    }
}
