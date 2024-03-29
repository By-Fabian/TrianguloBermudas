//
// Created by Usuario on 21/11/2019.
//

#include "ALMACEN.h"

//CPP DEL ALMACEN
c_Almacen::c_Almacen(t_entero filas, t_entero columnas, t_entero niveles):
        num_fil(filas), num_col(columnas), num_niv(niveles){
    for(int i=0; i<filas;i++){
        if (i==0||i==(filas)/2||i==filas-1)
            robots.emplace_back(i);
    }
    v_niv col;
    vv_matrix matriz;
    for(int i=0;i<num_col;i++){col.emplace_back(niveles);}
    for(int i=0;i<num_fil;i++){matriz.push_back(col);}
    slots_m=matriz;
}

void c_Almacen::mostrar_almacen(ostream& out) {
    int le = 0;
    out<<endl;
    for(int k=0;k <num_col;k++){
        if(k==0){
            out<<setw(4)<<"";
        }
        out<<setw(4)<<le;
        le = le + 1;
    }out<<endl;
    for (int i = 0; i < num_fil; i++) {
        cout << setw(4) << i;
        for (int j = 0; j < num_col; j++) {
            if(j==0)
                if (i == 0 || i == ( num_fil) / 2 || i == num_fil - 1)
                    out << setw(4) <<robots[2].get_sup();
                else
                    out << setw(4) << slots_m[i][j].get_superf();
            else
                out << setw(4) << slots_m[i][j].get_superf();
        }out<<endl;
    }out<<endl;
}

void c_Almacen::actualizar_almacen(ostream& out) {
    int le = 0;
    for(int k=0;k <num_col;k++){
        if(k==0){
            out<<setw(4)<<"";
        }
        out<<setw(4)<<le;
        le = le + 1;
    }out<<endl;
    int m=0;
    for (int i = 0; i < num_fil; i++) {
        out << setw(4) << i;
        for (int j = 0; j < num_col; j++) {
            if(j==0)
                if (i == 0 || i == ( num_fil) / 2 || i == num_fil - 1)
                    out << setw(4) <<robots[m++].get_sup();
                else
                    out << setw(4) << slots_m[i][j].get_superf();
            else
                out << setw(4) << slots_m[i][j].get_superf();
        }out<<endl;
    }out<<endl;
}

void c_Almacen::almacenar(c_Robot _robo01, t_pos _y, t_pos _x){
    slots_m[_y][_x].add_producto(_robo01.get_producto().get_num_product());
    slots_m[_y][_x].set_super(_robo01.get_sup());
    robots[_robo01.get_code()].set_sup("[ ]");
    robots[_robo01.get_code()].set_pos_ir(_x,_y);
}
void c_Almacen::retirar_producto(c_Robot _robo01, c_Producto _product){
    t_pos _x = buscar_producto_x(_product.get_num_product());
    t_pos _y = buscar_producto_y(_product.get_num_product());
    robots[_robo01.get_code()].set_pro(_product);
    slots_m[_y][_x].quitar_producto();
    slots_m[_y][_x].set_super(_robo01.get_sup());
    robots[_robo01.get_code()].set_pos_ir(_x,_y);
};

void c_Almacen::regresar_producto(c_Robot _robo01) {
    slots_m[_robo01.get_eny_f()][_robo01.get_enx_f()].set_super(_robo01.get_sup());
    robots[_robo01.get_code()].set_pos_ir(0,_robo01.get_eny_ii());
    slots_m[0][_robo01.get_eny_ii()].set_super(_robo01.get_sup());
}

c_Robot c_Almacen::get_robot_num(t_entero _rob) {
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
    for(int i=0;i<num_fil;i++){
        int k=0;
        for(int j=0;j<num_col;j++,k++){
            if(slots_m[i][j].get_producto()==_prod)
                return k;
        }
    }
    return 0;
}

t_pos c_Almacen::buscar_producto_y(t_product _pro) {
    int k=0;
    for(int i=0;i<num_fil;i++,k++){
        for(int j=0;j<num_col;j++){
            if(slots_m[i][j].get_producto()==_pro)
                return k;
        }
    }
    return 0;
}

void c_Almacen::mostrar_ruta(c_Robot _robo01,ostream& out) {
    int le = 0;m_col col;matrix mtz;//colocar los numeros de guia y crear los vectores con *
    for(int k=0;k <num_col;k++){if(k==0){out<<setw(4)<<"";}out<<setw(4)<<le;le = le + 1;}out<<endl;
    for(int i=0;i<num_col;i++){col.push_back("*");}for(int i=0;i<num_fil;i++){mtz.push_back(col);}

    int kx=_robo01.get_enx_f()-_robo01.get_enx_i();
    int ky=_robo01.get_eny_f()-_robo01.get_eny_i();

    if (_robo01.get_enx_i()<_robo01.get_enx_f()){
        for(int i=1;i<=abs(kx);i++){
            mtz[_robo01.get_eny_i()][_robo01.get_enx_i()+i]="o";
        }
    } else{
        for(int i=1;i<=abs(kx);i++){
            mtz[_robo01.get_eny_i()+1][_robo01.get_enx_i()-i]="o";
        }
    }

    if (_robo01.get_eny_i()<_robo01.get_eny_f()){
        for(int i=1;i<=abs(ky);i++){
            mtz[i+_robo01.get_eny_i()][_robo01.get_enx_f()]="o";
        }
    } else{
        for(int i=1;i<=abs(ky);i++){
            mtz[+_robo01.get_eny_i()-i][_robo01.get_enx_f()]="o";
        }
    }
    mtz[_robo01.get_eny_f()][_robo01.get_enx_f()]="[R]";
    int m=0;
    for (int i = 0; i < num_fil; i++) {
        out << setw(4) << i;
        for (int j = 0; j < num_col; j++) {
            if(j==0)
                if (i == 0 || i == ( num_fil) / 2 || i == num_fil - 1)
                    out << setw(4) <<robots[m++].get_sup();
                else
                    out << setw(4) << mtz[i][j];
            else
                out << setw(4) << mtz[i][j];
        }out<<endl;
    }out<<endl;
}

//CPP DEL SLOT
c_Slot::c_Slot(t_cantidad _nvl):niveles(_nvl){
};

void c_Slot::add_producto(t_product _product) {
    productos.emplace_back(_product);
    product=_product;
}

void c_Slot::quitar_producto() {
    productos.erase(productos.begin());
}

t_cantidad c_Slot::get_espacio_uso() {
    int t_actual=productos.size();
    return t_actual;
}
//hy