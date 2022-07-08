#include <iostream>
#include <windows.h>
using namespace std;
//MOdulo 1
    string clientes [4];
    void agregar();
    string nombres[4],ApellidoP[4], telefono[4],ID[4];
    void mostrar();
    void editar();
    void eliminar();
//MOdulo 2
    string productos[4];
    void agregar_producto();
    string nombreproducto[4],codigo_producto[4],precio_producto[4];
    void mostrae_producto();
    void editar_producto();
    void eliminar_producto();
//Modulo 3
    string Empleados[4];
    void agregar_empleado();
    string nombreempleado[4], apellidoempleado[4], IDempleado[4], telefonoempleado[4];
    void ver_empleados();
    void actualizar_empleados();
    void despedir_empleados();
int main(){//Menu
    char res = 's';
    do{
        int menu;
        system("cls");
        cout<<"-----------Registro de Clientes----------------- "<<endl;
        cout<<"1. Agregar nuevo cliente :"<<endl;
        cout<<"2. clientes ingresados :"<<endl;
        cout<<"3. editar clientes :"<<endl;
        cout<<"4. Eliminar clientes :"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"------------Registro de Productos---------------- "<<endl;
        cout<<"5. Crear producto :"<<endl;
        cout<<"6. productos ingresados:"<<endl;
        cout<<"7. Editar productos:"<<endl;
        cout<<"8. eliminar productos:"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"------------Registro de empleados-------------- "<<endl;
        cout<<"9. Agregar nuevo empleado:"<<endl;
        cout<<"10. ver empleados:"<<endl;
        cout<<"11. editar empleados:"<<endl;
        cout<<"12. eliminar empleados:"<<endl;
        cout<<"13. Salir :"<<endl;
        cout<<"INGRESE SU OPCION: ";
        cin>>menu;
        system("cls");
        switch(menu)
        {
            case 1:
                agregar();

                break;
            case 2:
                mostrar();
                break;
            case 3:
                editar();
                break;
            case 4:
                eliminar();
                break;
            case 5:
                agregar_producto();
                break;
            case 6:
                mostrae_producto();
                break;
            case 7:
                editar_producto();
                break;
            case 8:
                eliminar_producto();
                break;
            case 9 :
                agregar_empleado();
                break;
            case 10:
                ver_empleados();
                break;
            case 11:
                actualizar_empleados();
                break;
            case 12 :
                despedir_empleados();
                break;
            default:
                cout<<"¿SEGURO QUE DESEA SALIR?:"<<endl;
                break;
        }
        cout<<"Desea continuar (s/n): ";
        cin>>res;
    }while(res == 's');
    return 0;
}
void agregar(){
system("cls");
   for(int i=1; i<4; i++){
    cout<<"Ingrese Cliente: "<<i<<" : ";
    cin>>nombres[i];
    cout<<"Ingrese su apellido: "<<i<<" : ";
    cin>>ApellidoP[i];
    cout<<"Ingrese su telefono: "<<i<<" : ";
    cin>>telefono[i];
    cout<<"Ingresar ID: "<<i<<" : ";
    cin>>ID[i];
    cout<<"------------------------------------"<<endl;
     }
}
void mostrar(){
    system("cls");
     cout<<"CLIENTES REGISTRADOS"<<endl;
     for(int i=1; i<4; i++){
        cout<<"posicion:"<<i<<":"<<"Nombres: "<<nombres[i]<<endl;
        cout<<"Apellidos: "<<ApellidoP[i]<<endl;
        cout<<"Numero de telefono: "<<telefono[i]<<endl;
        cout<<"ID: "<<ID[i]<<endl;
        cout<<"------------------------------------------ "<<endl;

     }
}
void editar(){

    mostrar();
    system("cls");
    int posicion;
    string nuevo,AppN, telN,IDN;
    cout<<"ingrese la posicion: ";
    cin>>posicion;
    cout<<"ingresar nuevo Nombre: ";
    cin>>nuevo;
    cout<<"ingresar nuevo apellido: ";
    cin>>AppN;
    cout<<"Ingrese nuevo telefono: ";
    cin>>telN;
    cout<<"Ingresa nuevo ID: ";
    cin>>IDN;
    nombres[posicion]=nuevo;
    ApellidoP[posicion]=AppN;
    telefono[posicion]=telN;
    ID[posicion]=IDN;
    mostrar();
}
void eliminar(){

    mostrar();
    int posicion;
    cout<<"ingrese la posicion: ";
    cin>>posicion;
    for(int i=1; i<4; i++){
        if(posicion==i){
            nombres[i]="";
            ApellidoP[i]="";
            telefono[i]="";
            ID[i]="";
        }
    }

    mostrar();
}

void agregar_producto(){
system("cls");
   for(int i=1; i<4; i++){
    cout<<"Ingrese nombre del producto: "<<i<<" : ";
    cin>>nombreproducto[i];
    cout<<"Ingrese el codigo del producto: "<<i<<" : ";
    cin>>codigo_producto[i];
    cout<<"Ingrese el precio del producto: "<<i<<" : ";
    cin>>precio_producto[i];
    cout<<"------------------------------------"<<endl;

     }

}
void mostrae_producto(){
    system("cls");
     cout<<"PRODUCTOS REGISTRADOS"<<endl;
     for(int i=1; i<4; i++){
        cout<<"posicion:"<<i<<":"<<"Producto: "<<nombreproducto[i]<<endl;
        cout<<"Codigo: "<<codigo_producto[i]<<endl;
        cout<<"Precio: "<<precio_producto[i]<<endl;
        cout<<"------------------------------------------ "<<endl;

     }
}

void editar_producto(){
mostrae_producto();
    system("cls");
    int posicion;
    string nuevopro,codign, precioN;
    cout<<"ingrese la posicion: ";
    cin>>posicion;
    cout<<"ingresar nuevo producto: ";
    cin>>nuevopro;
    cout<<"ingresar codigo nuevo: ";
    cin>>codign;
    cout<<"Ingrese precio: ";
    cin>>precioN;
    nombreproducto[posicion]=nuevopro;
    codigo_producto[posicion]=codign;
    precio_producto[posicion]=precioN;
    mostrae_producto();

}
void eliminar_producto(){
mostrae_producto();
    int posicion;
    cout<<"ingrese la posicion: ";
    cin>>posicion;
    for(int i=1; i<4; i++){
        if(posicion==i){
            nombreproducto[i]="";
            codigo_producto[i]="";
            precio_producto[i]="";
        }
    }

    mostrae_producto();
}
void agregar_empleado(){
system("cls");
   for(int i=1; i<4; i++){
    cout<<"Ingrese nombre del nuevo empleado: "<<i<<" : ";
    cin>>nombreempleado[i];
    cout<<"Ingrese su apellido: "<<i<<" : ";
    cin>>apellidoempleado[i];
    cout<<"Ingrese el id del empleado: "<<i<<" : ";
    cin>>IDempleado[i];
    cout<<"Ingrese su telefono: "<<i<<" : ";
    cin>>telefonoempleado[i];
    cout<<"------------------------------------"<<endl;

     }
}
void ver_empleados(){
    system("cls");
     cout<<"EMPLEADOS REGISTRADOS"<<endl;
     for(int i=1; i<4; i++){
        cout<<"posicion:"<<i<<":"<<"Nombre del empleado: "<<nombreempleado[i]<<endl;
        cout<<"apellido: "<<apellidoempleado[i]<<endl;
        cout<<"id: "<<IDempleado[i]<<endl;
        cout<<"telefono: "<<telefonoempleado[i]<<endl;
        cout<<"------------------------------------------ "<<endl;

     }
}
void actualizar_empleados(){
    ver_empleados();
    system("cls");
    int posicion;
    string nuevoem,Apnuevo, telnuevo,IDnuevo;
    cout<<"ingrese la posicion: ";
    cin>>posicion;
    cout<<"ingresar nuevo Nombre: ";
    cin>>nuevoem;
    cout<<"ingresar nuevo apellido: ";
    cin>>Apnuevo;
    cout<<"Ingrese nuevo telefono: ";
    cin>>telnuevo;
    cout<<"Ingresa nuevo ID: ";
    cin>>IDnuevo;
    nombreempleado[posicion]=nuevoem;
    apellidoempleado[posicion]=Apnuevo;
    telefonoempleado[posicion]=telnuevo;
    IDempleado[posicion]=IDnuevo;
    ver_empleados();
}
void despedir_empleados(){
    ver_empleados();
    int posicion;
    cout<<"ingrese la posicion: ";
    cin>>posicion;
    for(int i=1; i<4; i++){
        if(posicion==i){
            nombreempleado[i]="";
            apellidoempleado[i]="";
            telefonoempleado[i]="";
            IDempleado[i]="";
        }
    }

    ver_empleados();
}
