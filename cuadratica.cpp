#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b,c,x1,x2;

    cout << "Bienvenido a mi programa de formula general" << endl;
    cout << "Su problema debe tener la forma ax2+bx+c=0" << endl;

    cout << "Ingrese el valor de a:" << endl;
    cin >> a;

    cout << "Ingrese el valor de b:" << endl;
    cin >> b;
    
    cout << "Ingrese el valor de c:" << endl;
    cin >> c;

    x1 = (-b+(sqrt((b*b)-(4*a*c))))/(2*a);
    x2 = (-b-(sqrt((b*b)-(4*a*c))))/(2*a);

    cout << "Los resultados al problema son: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

}