#include <iostream>
using namespace std;

int main(){
    string producto;
    double valor;
    int cantidad;
    cout << "Bienvenido a mi programa para saber cuando ha gastado en sus compras" << endl;
    cout << "Ahora te que ingreses el nombre, la cantidad y yo te daré el total" << endl;
    
    cout << "Nombre del producto: " << endl;
    cin >> producto;

    cout << "Cantidad: " << endl;
    cin >> cantidad;

    cout << "Precio: " << endl;
    cin >> valor;

    cout << "Total gastado para el producto "<< producto << " fue de: $"<< cantidad*valor;

}