#include <iostream>
#include "tipos_all.h"
//#include "ALMACEN.h"


int main() {
    int fil=0,col=0;
    int _x,_y;
    cout<<"\nFilas: ";cin>>fil;
    cout<<"Columnas: ";cin>>col;
    m_fil matrizp = crear_matriz(fil,col);
    /*while
imprimir_matriz(matrizp);
cout<<"\nIngresa origen en Y del robot: ";cin>>_y;
if(_y>=matrizp.size())
cout<<"\nIngresa origen en Y del robot: ";cin>>_y;
*/
    colocar_robot(matrizp);
    imprimir_matriz(matrizp);
    return 0;
}