//
// Created by Jean Pierre on 1/11/2019.
//

#ifndef TRIANGULOBERMUDAS_ROBOT_H
#define TRIANGULOBERMUDAS_ROBOT_H

#include "tipos_g.h"

typedef bool t_button;              //Tipo Button hace referencia a True(1) o False(0).
typedef unsigned t_no_negative;     //Tipo T_no_negative hace referecnia a valores no negativos.
typedef double t_decimals;          //Tipo t_decimales hace referencia a valores decimales.

class robot {
private:
    t_button pr_disponibilidad;          //Disponibilidad: Ocupado(0) y Libre (1).
    vector<t_no_negative>pr_home[3];     //Home(Direccion): (Filas, Columnas y Profundidad).
    t_no_negative pr_serie;              //Unidad del Robot: Numero de Serie.
    t_no_negative pr_bateria;            //Porcentaje de Bateria.
    t_no_negative pr_ubicacion;          //Ubicacion del robot

public:
    //Metodos:
    void m_encender();
    void m_apagar();
    void m_cargar_bateria();
    void m_moverse();
    void recoger();
    void ingresar();
    //Setters:
    void SetDisponibilidad (t_button set_disponibilidad){pr_disponibilidad = set_disponibilidad;}
    void SertHome(vector<t_no_negative> set_home[3]){set_home[3] = pr_home[3];}
    void SetSerie(t_no_negative set_serie){set_serie=pr_serie;}
    void SetBateria(t_no_negative set_bateria){set_bateria = pr_bateria;}
    void SetUbicacion(t_no_negative set_ubicacion){set_ubicacion = pr_ubicacion}
    //Getters:
    t_button getDisponibilidad(){return pr_disponibilidad ;}
    vector<t_no_negative>[3] getHome(){return pr_home;}
    t_no_negative getSerie(){return pr_serie;}
    t_no_negative getBateria(){return pr_bateria;}
    t_no_negative getUbicacion(){return pr_ubicacion;}
};


#endif //TRIANGULOBERMUDAS_ROBOT_H
