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
    c_Almacen a1(filas,columnas,niveles);                                           //Funcion que creaa el objeto almacen
    /*for(int i=0;i<3;i++) {
        cout << "Login ." << endl;
        cout << "Login . ." << endl;
        cout << "Login . . ." << endl;
    }
     */
    menu();
}
void menu(){
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
    switch(opcion)
    {
        case 1:
            cout << "Usted ha seleccionado la opcion Mostrar Almacen . . .";cout<<endl;
            mostraralmacen();
            break;
        case 2:
            cout << "Usted ha seleccionado la opción Operacion con Robots . . .";cout<<endl;
            operacionconrobots();
            break;
        case 3:
            cout << "Usted ha seleccionado la opción Reporte . . .";cout<<endl;
            reporte();
            break;
        case 4:
            cout << "Usted ha seleccionado la opción Salir . . .";cout<<endl;
            salir();
            break;
    }
}

void mostraralmacen() {
    cout<<"Estado de Almacen:"<<endl;
    //a1.mostraralmacen;                                                                //Funcion que muestra el almacen
    cout<<"Recuerde que [] representa un robot."<<endl;
    cout<<"Recuerde que P  representa un slot siendo ocupado por un producto;"<<endl;
}

void operacionconrobots() {
    cout<<"Menu de operaciones con Robots :"<<endl;
    cout<<"Opciones :";
    cout<<"1. Ingresar Producto."<<endl;
    cout<<"2. Retirar Producto. "<<endl;
    cout<<"3. Regresar. "<<endl;
    int opcion=0;
    ordene_t or1();
    cout<<"Selecciones una opcion del menu: : ";cin>>opcion;
    while(opcion!=1 && opcion!=2){
        cout<<"Ingrese una opcion valida"<<endl;
        cout<<"Selecciones una opcion del menu: : ";cin>>opcion;cout<<endl;

    }
    switch(opcion)
    {
        case 1:
            cout << "Usted ha seleccionado la opcion Ingresar Producto . . .";cout<<endl;
            agregarproductoalmacen();
            or1().set_op("IP");
            break;
        case 2:
            cout << "Usted ha seleccionado la opción Retirar Producto . . .";cout<<endl;
            retirarproductoalmacen();
            or1().set_op("RP");
            break;
        case 3:
            menu();
            break;
    }


}

void reporte() {
    int filas = a1.getfilas();        //getfilas
    int columnas = a1.getcolumnas();  //getcolumnas
    int niveles = a1.getNiveles();    //getniveles

    cout<<"Reporte del almacen :"<<endl;
    cout<<"El almacen tiene "<<filas<<" filas , "<<columnas<<" columnas y "<<niveles<<" niveles."<<endl;
    int cantidadrobots=a1.cantidadrobots();
    for(int i=0;i<cantidadrobots;i++){
        int codigo=0;
        cout<<"Robot "<<listarobots[i].getcodigo<<" con Home en :"<<listarobots[i].getHome<<endl;
    }
    cout<<"Inventario de Robot :"<<endl;
    cout<<"Hay"<<producto
    int libres=a1.libres();
    int ocupados=a1.ocupados();
    or1.mostrar_ordenes();//JP
    salir();

void salir() {
    cout<<"GRACIAS POR HABER USADO TRIANGULO DE LAS BERMUDAS"<<endl;
    cout<<"PROFESOIR NO NOS JALE :v";
}
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

bool tipodeproducto(int fila,int columna,string producto) {
    string tipo=a1.obtenerproducto(fila,columna);
    if(producto=tipo){
        return 1;
    }
    else{
        return 0;
    }

}
/*
bool estadolot(c_Almacen &alm, unsigned int k, unsigned int n) {
    c_Slot sl = alm.get_slot(n,k);
    cout<<"Hay"<<sl.get_espacio_uso()<<"productos en el slot"<<endl; //implementar get vector
}
 */
bool estadolot(int fila,int columna,int cantidad) {
    int libres=a1.obtenerlibres(fila,columna);
    if(cantidad<libres){
        return 1;
    }
    else{
        return 0;
    }
}

void agregarproductoalmacen() {
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
        agregarproductoalmacen();
    }
    else{
        if (confirmarcantidad!=1){
            cout<<"El producto no puede ser ingresado por la capacidad del slot.";
            cout<<endl;
            agregarproductoalmacen();
        }
    }
    //a1.agregarproducto(filaingreso,columnaingreso,tipoproductoingreso,cantidad); //metodoqueagregraproductos
    int opcion=0;
    cout<<"Para regresar al menu selecione la opcion 0."<<endl;
    cout<<"Para volver a ingresar un producto ingrese 1"<<endl;
    cout<<"Ingrese opcion :";cin>>opcion;
    opcion = 0;
    if(opcion==0){
        menu();
    }
    if(opcion==1){
        agregarproductoalmacen();
    }
    }
void retirarproductoalmacen() {
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
    confirmartipo=tipodeproducto(filasalida,columnasalida,tipoproducto);
    confirmarcantidad=estadoslot(filasalida,columnasalida,cantidad);
    if (confirmartipo!=1){
        cout<<"El producto no puede ser ingresado por no ser del tipo correspondiente al slot.";
        agregarproductoalmacen();
    }
    else{
        if (confirmarcantidad!=1){
            cout<<"El producto no puede ser ingresado por la capacidad del slot.";
            cout<<endl;
            agregarproductoalmacen();
        }
    }
    //a1.retirarproducto(filaingreso,columnaingreso,tipoproductoingreso,cantidad);          //metodoqueagregraproductos
    int opcion=0;
    cout<<"Para regresar al menu selecione la opcion 0."<<endl;
    cout<<"Para volver a retirar un producto ingrese 1"<<endl;
    cout<<"Ingrese opcion :";cin>>opcion;
    opcion = 0;
    if(opcion==0){
        menu();
    }
    if(opcion==1){
        retirarproductoalmacen();
    }
}
}



