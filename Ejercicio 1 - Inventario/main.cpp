#include <iostream>
#include <string>

using namespace std;

string productos[5][3]= {
    {"001", "Iphone X", "0"},
    {"002", "Laptop Dell", "0"},
    {"003", "Monitor Samsung", "0"},
    {"004", "Mouse", "0"},
    {"005", "HeadSet", "0"}
};


void ListarProductos(){
    system("cls");
    cout << endl;
    cout << "Listado de productos" << endl;
    cout << "********************" << endl;
    cout << "Codigo, Descripcion y Existencia" << endl;
    

    for (int i = 0; i < 5; i++)
    {
        cout << productos[i][0] << " | " << productos[i][1] << " | " << productos[i][2] << endl;
    }
}

void MovimientoInventario(string codigo, int cantidad, string tipoMovimiento) {
    for( int i = 0; i < 5; i++)
    {
        if (productos[i][0] == codigo){
            if (tipoMovimiento == "+"){
                productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);

            }  else {
                productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
            }    
        }
    }
}


void IngresoDeInventario(){
    string codigo= "";
    int cantidad= 0;

    system("cls");
    cout << endl;
    cout << "Ingreso de productos al inventario" << endl;
    cout << "***********************************" << endl;
    cout << "Ingreso el codigo de producto:" << endl;
    cin >> codigo;
    cout << endl;
    cout << "Ingreso la cantidad de producto:" << endl;
    cin >> cantidad;
    cout << endl;

    MovimientoInventario(codigo, cantidad, "+");


}

void AjustePositivoInventario(){
    string codigo= "";
    int cantidad= 0;

    system("cls");
    cout << endl;
    cout << "Ajuste positivo de inventario" << endl;
    cout << "*****************************" << endl;
    cout << "Ingreso el codigo de producto:" << endl;
    cin >> codigo;
    cout << endl;
    cout << "Ingreso la cantidad de producto:" << endl;
    cin >> cantidad;
    cout << endl;

    MovimientoInventario(codigo, cantidad, "+");


}

void SalidaDeInventario(){
    string codigo= "";
    int cantidad= 0;

    system("cls");
    cout << endl;
    cout << "Salida de productos al inventario" << endl;
    cout << "*********************************" << endl;
    cout << "Ingreso el codigo de producto:" << endl;
    cin >> codigo;
    cout << endl;
    cout << "Ingreso la cantidad de producto:" << endl;
    cin >> cantidad;
    cout << endl;

    MovimientoInventario(codigo, cantidad, "-");


}

void AjusteNegativoInventario(){
    string codigo= "";
    int cantidad= 0;

    system("cls");
    cout << endl;
    cout << "Ajuste negativo de inventario" << endl;
    cout << "*****************************" << endl;
    cout << "Ingreso el codigo de producto:" << endl;
    cin >> codigo;
    cout << endl;
    cout << "Ingreso la cantidad de producto:" << endl;
    cin >> cantidad;
    cout << endl;

    MovimientoInventario(codigo, cantidad, "-");


}

int main(int argc, char const *argv[]) 
{
    int opcion = 0;

    while(true) {

        system("cls");
        cout << "Sistema de inventario"<< endl;
        cout << "*********************"<< endl;
        cout << endl;
        cout << endl;
        cout << "1 - Lista de productos" << endl;
        cout << "2 - Ingresos de inventario" << endl;
        cout << "3 - Salida de inventario" << endl;
        cout << "4 - Ajuste Negativo de inventario" << endl;
        cout << "5 - Ajuste Positivo de inventario" << endl;
        cout << "0 - Salir" << endl;
        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: 
            ListarProductos();
            break;
        
        case 2:
            IngresoDeInventario();
            break;

        case 3:
            SalidaDeInventario();
            break;    
        
        case 4:
            AjusteNegativoInventario();
            break;

        case 5:
            AjustePositivoInventario();
            break;

        default:
            break;
        }

        system("pause");
        cout << endl;

        if (opcion == 0){
            break;
        
        }
            
    }

    return 0;

}

