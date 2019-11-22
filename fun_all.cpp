//
// Created by Usuario on 22/11/2019.
//
#include <iostream>
#include "tipos_all.h"
using namespace std;

void imprimir_matriz(m_fil matriz){
    int fil=matriz.size();
    int col=matriz[0].size();
    cout<<endl;
    for(int i=0; i<fil;i++){
        cout<<i+1;
        for(int j=0; j<col;j++)
            cout<<setw(5)<<matriz[i][j];
        cout<<endl;
    }
}
m_fil crear_matriz(t_entero fil, t_entero col){
    m_col c;
    m_fil f;
    for(int i=0;i<col;i++){c.push_back('*');}
    for(int i=0;i<fil;i++){f.push_back(c);}
    return f;
}
void colocar_robot(m_fil &matriz){
        for(int i = 0; i < matriz.size();i++){
            matriz[i][1]=']';
            matriz[i][0]='[';
    }
}
void mover_robot(m_fil &matriz,t_entero filaf, t_entero colf){

}