#include <iostream>
using namespace std;

int main(){
    double radio, perimetro, area;
    double pi = 3.14159;

    cout << "Bienvenido a mi programa de área y perímetro de un circulo" << endl;
    cout << "Ahora te pediré el radio del circulo y haré los calculos correspondientes" << endl;

    cout << "Ingresa el radio: ";
    cin >> radio;

    area = (pi*(radio)*(radio));
    perimetro = 2*pi*radio;

    cout << "Los resultados son: " << endl;
    cout << "El área es: " << area << endl;
    cout << "El perímetro es: " << perimetro << endl;

}