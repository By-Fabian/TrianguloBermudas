//
// Created by utec on 22/11/19.
//

/*
#include "interfaz.h"
//#include "c_Robot.h"
//#include "ALMACEN.h"


void start() {
    string user = "admin";
    string usuario = 0;
    string password = "admin";
    string contrasena = 0;
    cout<<"Login :";cin>>usuario;cout<<endl;
    cout<<"Password: ";cin>>contrasena;cout<<endl;
    if ((user == usuario)&& (password == contrasena)){
        for(int i=0;i<3;i++) {
            cout << "Login ." << endl;
            cout << "Login . ." << endl;
            cout << "Login . . ." << endl;
        }
        triangulodelasbermudas();
    }
    else{
        cout<<"Ingrese usuario y contraseña correcta";
    }

}

void triangulodelasbermudas() {
    cout<<"Bienvenido a Triangulo de las Bermudas v1 :"<<endl;
    cout<<"Triangulo de las Bermudas es un software diseñado por alumnos de UTEC del curso de POO I"<<endl;
    cout<<"para la manipulacion de robots los cuales gestionaran los productos en un almacen."<<endl;
    string x = "X";
    do{
    cout<<"Pulse X para continuar"<<endl;
    cin>>x;
    }
    while(x != "X");
    crear_almacen();
}

void crear_almacen() {
    cout<<"Para poder comenzar a manipular los robots, priermo debe crear un almacen en donde estos puedan "<<endl;
    cout<<"Primero crearemos un alamcen . . ."<<endl;
    cout<<"Porfavor ingresa las dimensiones del almacen: "<<endl;
    cout<<"Recuerda que las dimensiones deben ser enteros positivos."<<endl;
    unsigned int filas=0;
    unsigned int columnas=0;
    unsigned int niveles=0;
    cout<<"Numero de filas: ";cin>>filas;cout<<endl;
    while(filas<3){
        cout<<"Ingrese un valor valido mayor a 3."<<endl;
        cout<<"Numero de filas: ";cin>>filas;cout<<endl;

    }
    cout<<"Numero de columnas: ";cin>>columnas;cout<<endl;
    while(filas<3){
        cout<<"Ingrese un valor valido mayor a 3."<<endl;
        cout<<"Numero de columnas: ";cin>>columnas;cout<<endl;

    }
    cout<<"Numero de niveles: ";cin>>niveles;cout<<endl;
    while(filas<3){
        cout<<"Ingrese un valor valido mayor a 3."<<endl;
        cout<<"Numero de niveles: ";cin>>niveles;cout<<endl;

    }
    //c_Almacen(filas,columnas,niveles);
    for(int i=0;i<3;i++) {
        cout << "Login ." << endl;
        cout << "Login . ." << endl;
        cout << "Login . . ." << endl;
    }
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
    cout<<"Selecciones una opcion del menu: : ";cin>>opcion;cout<<endl;
    while(opcion!=1 && opcion!=2 && opcion!=3 && opcion!=4){
        cout<<"Ingrese una opcion valida"<<endl;
        cout<<"Selecciones una opcion del menu: : ";cin>>opcion;cout<<endl;

    }
    switch(opcion)
    {
        case 1:
            cout << "Usted ha seleccionado la opcion Mostrar Almacen . . .";
            mostraralmacen();
            break;
        case 2:
            cout << "Usted ha seleccionado la opción Operacion con Robots . . .";
            operacionconrobots();
            break;
        case 3:
            cout << "Usted ha seleccionado la opción Reporte . . .";
            reporte();
            break;
        case 4:
            cout << "Usted ha seleccionado la opción Salir . . .";
            salir();
            break;
    }
}

void mostraralmacen() {
    cout<<"Estado de Almacen:";
    //a1.mostraralmacen;
    cout<<"Recuerde que [] representa un robot."<<endl;
    cout<<"Recuerde que P  representa un slot siendo ocupado por un producto;"<<endl;
}

void operacionconrobots() {
    cout<<"Menu de operaciones con Robots :"<<endl;
    cout<<"Opciones :";
    cout<<"1. Ingresar Producto."<<endl;
    cout<<"2. Retirar Producto. "<<endl;


}

void reporte() {
}

void salir() {

}

void agregarproductoalmacen(c_Robot &rob,unsigned n,unsigned k) {
    alm.almacenar(rob,n,k);
}

void retirarproductoalmacen(c_Robot &rob,c_Almacen alm) {
    unsigned int n,k;
    cout<<"INGRESE FILA DEL SLOT:"<<endl;cin>>n;
    cout<<"INGRESE COLUMNA DEL SLOT: "<<endl;cin>>k;
    c_Slot sl = alm.get_slot(n,k);
    sl.quitar(rob);
}

void tipodeproducto(c_Robot &rob) {
    string a ;
    cout<<"Ingrese el producto: "<<endl;cin>>a;
    unsigned int n,k;
    cout<<"Ingrese fila del slot:"<<endl;cin>>n;
    cout<<"Ingrese columna del slot:"<<endl;cin>>k;
    if (a==alm.get_slot(n,k).get_producto())
        agregarproductoalmacen(rob,alm,n,k);
}

int estadoslot(c_Almacen &alm, unsigned int k, unsigned int n) {
    c_Slot sl = alm.get_slot(n,k);
    cout<<"Hay"<<sl.get_vector().size()<<"productos en el slot"<<endl; //implementar get vector
}
*/