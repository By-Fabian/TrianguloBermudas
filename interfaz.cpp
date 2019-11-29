//
// Created by utec on 22/11/19.
//


#include "interfaz.h"
#include "c_Robot.h"
#include "ALMACEN.h"
#include "ordenes.h"

void start() {
    string user = "admin";
    string usuario ;
    string password = "admin";
    string contrasena ;
    cout<<"Login :";cin>>usuario;
    cout<<"Password: ";cin>>contrasena;
    if ((user == usuario)&& (password == contrasena)){
        /*for(int i=0;i<3;i++) {
            cout << "Login ." << endl;
            cout << "Login . ." << endl;
            cout << "Login . . ." << endl;
        }*/
        triangulodelasbermudas();
    }
    else{
        cout<<"Ingrese usuario y contrasena correcta";
        cout<<endl;
        start();
    }

}

void triangulodelasbermudas() {
    cout<<"Bienvenido a Triangulo de las Bermudas v1 :"<<endl;
    cout<<"Triangulo de las Bermudas es un software diseñado por alumnos de UTEC del curso de POO I"<<endl;
    cout<<"para la manipulacion de robots los cuales gestionaran los productos en un almacen."<<endl;
    string x = "X";
    do{
    cout<<"Pulse X para continuar . . ."<<endl;
    cin>>x;
    }
    while(x != "X" );
    crear_almacen();
}

void crear_almacen() {
    cout<<"Para poder comenzar a manipular los robots, priermo debe crear un almacen en donde estos puedan "<<endl;
    cout<<"Primero crearemos un alamcen y por defecto se crearan 3 robots. . ."<<endl;
    cout<<"Porfavor ingresa las dimensiones del almacen: "<<endl;
    cout<<"Recuerda que las dimensiones deben ser enteros positivos."<<endl;
    unsigned int filas=0;
    unsigned int columnas=0;
    unsigned int niveles=0;
    cout<<"Numero de filas: ";cin>>filas;
    while(filas<3){
        cout<<"Ingrese un valor valido mayor a 3."<<endl;
        cout<<"Numero de filas: ";cin>>filas;

    }
    cout<<"Numero de columnas: ";cin>>columnas;
    while(filas<3){
        cout<<"Ingrese un valor valido mayor a 3."<<endl;
        cout<<"Numero de columnas: ";cin>>columnas;

    }
    cout<<"Numero de niveles: ";cin>>niveles;
    while(filas<3){
        cout<<"Ingrese un valor valido mayor a 3."<<endl;
        cout<<"Numero de niveles: ";cin>>niveles;

    }
    c_Almacen al(filas,columnas,niveles);                                           //Funcion que creaa el objeto almacen
    /*for(int i=0;i<3;i++) {
        cout << "Login ." << endl;
        cout << "Login . ." << endl;
        cout << "Login . . ." << endl;
    }
     */
    menu(al);
}
void menu(c_Almacen& al){
    cout<<"Bienvenido al menu interactivo de Triangulo de las Bermudas: "<<endl;
    cout<<"Opciones : "<<endl;
    cout<<"1. Mostrar almacen."<<endl;
    cout<<"2. Operacion con Robots."<<endl;
    cout<<"3. Reporte;"<<endl;
    cout<<"4. Salir."<<endl;
    int opcion=0;
    cout<<"Selecciones una opcion del menu: : ";cin>>opcion;
    while(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4){
        cout<<"Ingrese una opcion valida"<<endl;
        cout<<"Selecciones una opcion del menu: : ";cin>>opcion;cout<<endl;

    }
    ordene_t ord;
    switch(opcion)
    {
        case 1:
            cout << "Usted ha seleccionado la opcion Mostrar Almacen . . .";cout<<endl;
            mostraralmacen(al);
            break;
        case 2:
            cout << "Usted ha seleccionado la opción Operacion con Robots . . .";cout<<endl;
            operacionconrobots(al,ord);
            break;
        case 3:
            cout << "Usted ha seleccionado la opción Reporte . . .";cout<<endl;
            reporte(al,ord);
            break;
        case 4:
            cout << "Usted ha seleccionado la opción Leer Archivo . . .";cout<<endl;
            leerarchivos(ord);
            break;
        case 5:
            cout << "Usted ha seleccionado la opción Salir . . .";cout<<endl;
            salir();
            break;
    }
}
void salir() {
    cout<<"GRACIAS POR HABER USADO TRIANGULO DE LAS BERMUDAS"<<endl;
    cout<<"PROFESOIR NO NOS JALE :v";
}

void mostraralmacen(c_Almacen& al) {
    cout<<"Estado de Almacen:"<<endl;
    al.mostrar_almacen(cout);                                                               //Funcion que muestra el almacen
    cout<<"Recuerde que [] representa un robot."<<endl;
    cout<<"Recuerde que P  representa un slot siendo ocupado por un producto;"<<endl;
    int opcion=0;
    cout<<"Para volver a ingresas un producto ingrese 1"<<endl;
    cout<<"Para salir ingrese 2"<<endl;
    cout<<"Ingrese opcion :";cin>>opcion;
    if (opcion==1){
        mostraralmacen(al);
    }
    if (opcion==2){
        menu(al);
    }
}
/*
bool tipodeproducto(c_Almacen& al,int fila,int columna,string producto) {
    string tipo=al.obtenerproducto(fila,columna);
    if(producto=tipo){
        return 1;
    }
    else{
        return 0;
    }
}
 */
/*
bool estadolot(c_Almacen& al,int fila,int columna,int cantidad) {
    int libres=al.obtenerlibres(fila,columna);
    if(cantidad<libres){
        return 1;
    }
    else{
        return 0;
    }
}
 */

void agregarproductoalmacen(c_Almacen& al) {
    int filaingreso=0;
    int columnaingreso=0;
    int cantidad=0;
    string tipoproducto;
    bool confirmartipo;
    bool confirmarcantidad;
    cout<<"Ingrese fila :";cin>>filaingreso;
    cout<<"Ingrese columna :";cin>>columnaingreso;
    cout<<"Ingrese producto :";cin>>tipoproducto;
    cout<<"Ingrese cantidad :";cin>>cantidad;
    confirmartipo=tipodeproducto(filaingreso,columnaingreso,tipoproducto);
    confirmarcantidad=estadolot(filaingreso,columnaingreso,cantidad);
    if (confirmartipo!=1){
        cout<<"El producto no puede ser ingresado por no ser del tipo correspondiente al slot.";
        agregarproductoalmacen(al);
    }
    else{
        if (confirmarcantidad!=1){
            cout<<"El producto no puede ser ingresado por la capacidad del slot.";
            cout<<endl;
            agregarproductoalmacen(al);
        }
    }
    //a1.agregarproducto(filaingreso,columnaingreso,tipoproductoingreso,cantidad); //metodoqueagregraproductos
    int opcion=0;
    cout<<"Para regresar al menu selecione la opcion 0."<<endl;
    cout<<"Para volver a ingresar un producto ingrese 1"<<endl;
    cout<<"Ingrese opcion :";cin>>opcion;
    opcion = 0;
    if(opcion==0){
        menu(al);
    }
    if(opcion==1){
        agregarproductoalmacen(al);
    }
}
void retirarproductoalmacen(c_Almacen& al) {
    int filasalida=0;
    int columnasalida=0;
    int cantidad=0;
    string tipoproducto;
    bool confirmartipo;
    bool confirmarcantidad;
    cout<<"Ingrese fila :";cin>>filasalida;
    cout<<"Ingrese columna :";cin>>columnasalida;
    cout<<"Ingrese producto :";cin>>tipoproducto;
    cout<<"Ingrese cantidad :";cin>>cantidad;
    confirmartipo=tipodeproducto(al,filasalida,columnasalida,tipoproducto);
    confirmarcantidad=estadolot(al,filasalida,columnasalida,cantidad);
    if (confirmartipo!=1){
        cout<<"El producto no puede ser ingresado por no ser del tipo correspondiente al slot.";
        agregarproductoalmacen(al);
    }
    else{
        if (confirmarcantidad!=1){
            cout<<"El producto no puede ser ingresado por la capacidad del slot.";
            cout<<endl;
            agregarproductoalmacen(al);
        }
    }
    //a1.retirarproducto(filaingreso,columnaingreso,tipoproductoingreso,cantidad);          //metodoqueagregraproductos
    int opcion=0;
    cout<<"Para regresar al menu selecione la opcion 0."<<endl;
    cout<<"Para volver a retirar un producto ingrese 1"<<endl;
    cout<<"Ingrese opcion :";cin>>opcion;
    opcion = 0;
    if(opcion==0){
        menu(al);
    }
    if(opcion==1){
        retirarproductoalmacen(al);
    }
}
}



void operacionconrobots(c_Almacen& al,ordene_t ord) {
    cout<<"Menu de operaciones con Robots :"<<endl;
    cout<<"Opciones :";
    cout<<"1. Ingresar Producto."<<endl;
    cout<<"2. Retirar Producto. "<<endl;
    cout<<"3. Regresar. "<<endl;
    int opcion=0;

    cout<<"Selecciones una opcion del menu: : ";cin>>opcion;
    while(opcion!=1 && opcion!=2){
        cout<<"Ingrese una opcion valida"<<endl;
        cout<<"Selecciones una opcion del menu: : ";cin>>opcion;cout<<endl;

    }
    switch(opcion)
    {
        case 1:
            cout << "Usted ha seleccionado la opcion Ingresar Producto . . .";cout<<endl;
            agregarproductoalmacen(al,ord);
            ord.set_op("Ingreso producto");
            break;
        case 2:
            cout << "Usted ha seleccionado la opción Retirar Producto . . .";cout<<endl;
            retirarproductoalmacen(al,ord);
            ord.set_op("Retiro producto");
            break;
        case 3:
            menu(al);
            break;
    }


}

void reporte(c_Almacen& al,ordene_t ord) {
    int filas = al.num_fil;        //getfilas
    int columnas = al.num_col;  //getcolumnas
    int niveles = al.num_niv;    //getniveles

    cout<<"Reporte del almacen :"<<endl;
    cout<<"El almacen tiene "<<filas<<" filas , "<<columnas<<" columnas y "<<niveles<<" niveles."<<endl;

    int cantidadrobots=al.robots.size();
    for(int i=0;i<cantidadrobots;i++){
        int codigo=0;
        cout<<"Robot "<<al.robots[i].get_code()<<" con Home en :"<<listarobots[i].getHome<<endl;
    }
    cout<<"Inventario de Robot :"<<endl;
    /*ord.guardar_ordenes(al.robots)
    ord.mostrar_odenes();//JP*/
    int opcion=0;
    cout<<"Presione X para regresar al mennu."<<endl;

    salir();}

void leerarchivos(ordene_t &ord)
{ord.mostrar_odenes();}


/*
void agregarproductoalmacen(c_Robot &rob,unsigned n,unsigned k,c_Almacen &alm) {
    alm.almacenar(rob,n,k);
}
 */
/*
void tipodeproducto(c_Robot &rob,c_Almacen &alm) {
    string a ;
    cout<<"Ingrese el producto: "<<endl;cin>>a;
    unsigned int n,k;
    cout<<"Ingrese fila del slot:"<<endl;cin>>n;
    cout<<"Ingrese columna del slot:"<<endl;cin>>k;
    if (a==alm.get_slot(n,k).get_producto())
        agregarproductoalmacen(rob,n,k,alm);
}
*/



