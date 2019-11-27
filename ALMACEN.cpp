//
// Created by Usuario on 21/11/2019.
//

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

void c_Almacen::mostrar_almacen() {
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
            if(j==0)
                if (i == 0 || i == ( num_fil) / 2 || i == num_fil - 1)
                    cout << setw(4) <<robots[2].get_sup();
                else
                    cout << setw(4) << slots_m[i][j].get_superf();
            else
                cout << setw(4) << slots_m[i][j].get_superf();
        }cout<<endl;
    }cout<<endl;
}

void c_Almacen::actualizar_almacen() {
    int le = 0;
    for(int k=0;k <num_col;k++){
        if(k==0){
            cout<<setw(4)<<"";
        }
        cout<<setw(4)<<le;
        le = le + 1;
    }cout<<endl;
    int m=0;
    for (int i = 0; i < num_fil; i++) {
        cout << setw(4) << i;
        for (int j = 0; j < num_col; j++) {
            if(j==0)
                if (i == 0 || i == ( num_fil) / 2 || i == num_fil - 1)
                    cout << setw(4) <<robots[m++].get_sup();
                else
                    cout << setw(4) << slots_m[i][j].get_superf();
            else
                cout << setw(4) << slots_m[i][j].get_superf();
        }cout<<endl;
    }cout<<endl;
}

void c_Almacen::almacenar(c_Robot _robo01, t_pos _y, t_pos _x){
    slots_m[_y][_x].add_producto(_robo01.get_producto().get_num_product());
    slots_m[_y][_x].set_super(_robo01.get_sup());
    robots[_robo01.get_code()].set_sup("[ ]");
    robots[_robo01.get_code()].set_pos_ir(_x,_y);
}
void c_Almacen::regresar(c_Robot _robo01, c_Producto _product){

};

c_Robot c_Almacen::get_num_robot(t_entero _rob) {
    robots[_rob-1].set_code(_rob-1);
    return robots[_rob-1];
}

t_code c_Almacen::get_code_robot(t_entero fila, t_entero colum) {
    return robots[fila].get_code();
}

c_Slot c_Almacen::get_slot(t_entero fila, t_entero colum) {
    return slots_m[fila][colum];
}

t_pos c_Almacen::buscar_producto_x(t_product _prod) {
    for(int i;i<num_fil;i++){
        int k=0;
        for(int j;j<num_col;j++,k++){
            if(slots_m[i][j].get_producto()==_prod)
                return k;
        }
    }
    return 0;
}

t_pos c_Almacen::buscar_producto_y(t_product _pro) {
    int k=0;
    for(int i;i<num_fil;i++,k++){
        for(int j;j<num_col;j++){
            if(slots_m[i][j].get_producto()==_pro)
                return k;
        }
    }
    return 0;
}

void c_Almacen::mostrar_ruta(c_Robot _robo01) {
    int le = 0;
    for(int k=0;k <num_col;k++){
        if(k==0){
            cout<<setw(4)<<"";
        }
        cout<<setw(4)<<le;
        le = le + 1;
    }cout<<endl;
    int k=_robo01.get_enx_f()-_robo01.get_enx_i();
    for(int i=0;i< abs(k);i++){
        //avanzaarrrr
    }
    int m=0;
    for (int i = 0; i < num_fil; i++) {
        cout << setw(4) << i;
        for (int j = 0; j < num_col; j++) {
            if(j==0)
                if (i == 0 || i == ( num_fil) / 2 || i == num_fil - 1)
                    cout << setw(4) <<robots[m++].get_sup();
                else
                    cout << setw(4) << slots_m[i][j].get_superf();
            else
                cout << setw(4) << slots_m[i][j].get_superf();
        }cout<<endl;
    }cout<<endl;
}

//CPP DEL SLOT
c_Slot::c_Slot(t_cantidad _nvl):niveles(_nvl){
};

void c_Slot::add_producto(t_product _product) {
    productos.emplace_back(_product);
    product=_product;
}

void c_Slot::quitar_producto(c_Robot robo01) {
    productos.erase(productos.begin());
}

t_cantidad c_Slot::get_espacio_uso() {
    int t_actual=productos.size();
    return t_actual;
}
