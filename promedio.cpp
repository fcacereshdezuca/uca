#include <iostream>
using namespace std;

int main(){
    double nota1;
    double nota2;
    double nota3;
    double promedio;
    cout << "Bienvenido a mi programa de promedios\n Le pediré 3 notas y sacaré el promedio por usted" << endl;
    cout << "Ingrese la primer nota: " << endl;
    cin >> nota1;
    cout << "Ingrese la segunda nota: " << endl;
    cin >> nota2;
    cout << "Ingrese la tercer nota: " << endl;
    cin >> nota3;
    
    cout << "Su promedio es: " << endl;
    promedio = (nota1+nota2+nota3)/3;
    cout << promedio << endl;
}