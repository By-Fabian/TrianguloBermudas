//
// Created by Usuario on 21/11/2019.
//

#include "ALMACEN.h"

#include "ALMACEN.h"
//CPP DEL ALMACEN
c_Almacen::c_Almacen(t_entero filas, t_entero columnas, t_entero niveles):
        num_fil(filas), num_col(columnas), num_niv(niveles){
    for(int i=0; i<filas;i++){
        if (i==0||i==(1+filas)/2||i==filas-1)
            robots.emplace_back(i);
    }
    v_niv col;
    vv_matrix matriz;
    for(int i=0;i<num_col;i++){col.emplace_back(niveles);}
    for(int i=0;i<num_fil;i++){matriz.push_back(col);}
    slots_m=matriz;
}

t_code c_Almacen::get_code_robot(t_entero fila, t_entero colum) {
    return robots[fila].get_code();
}

c_Slot c_Almacen::get_slot(t_entero fila, t_entero colum) {
    return slots_m[fila][colum];
}

void c_Almacen::mostrar_almacen() {
    for (int i = 0; i < num_fil; i++) {
        if (i == 0 || i == ( num_fil) / 2 || i == num_fil - 1)
            slots_m[i][0].set_super("[R]");
    }
    int le = 0;
    cout<<endl;
    for(int k=0;k <num_col;k++){
        if(k==0){
            cout<<setw(4)<<"";
        }
        cout<<setw(4)<<le;
        le = le + 1;
    }cout<<endl;
    for (int i = 0; i < num_fil; i++) {
        cout << setw(4) << i;
        for (int j = 0; j < num_col; j++) {
            cout << setw(4) << slots_m[i][j].get_superf();
        }cout<<endl;
    }cout<<endl;
}

c_Robot c_Almacen::get_num_robot(t_entero _rob) {
    return robots[_rob-1];
}

void c_Almacen::actualizar_almacen() {
    for(int i=0; i<num_fil;i++){
        for(int j=0;j<num_col;j++){
            cout<<setw(4)<<slots_m[i][j].get_superf();
        }cout<<endl;
    }
}


//CPP DEL SLOT
c_Slot::c_Slot(t_cantidad _nvl):niveles(_nvl){
    for(int i =0;i<niveles; i++){productos.reserve(niveles);
    }
};

void c_Slot::almacenar(c_Robot &robo01) {
    productos.push_back(robo01.get_producto());
    set_super("[R]");
}


void c_Slot::quitar(c_Robot robo01) {
    productos.erase(productos.begin());
}
