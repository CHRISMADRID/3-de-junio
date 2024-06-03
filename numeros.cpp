#include <iostream>
using namespace std;
int suma(int x, int y)
int main()
{

    int a, b, opc;
    cout << "Ingrese numero entero a= ";
    cin >> a;

    cout << "Ingrese numero entero b=";
    cin >> b;

    cout << "Elija que ocpion desea:  \n\t1. Sumar\n\Otro numero : salir \n";
    cout << "Su opcion es : ";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "El resultado de " << a << " + " << b << "es " << suma(a, b);
        break;

        default;
        cout << " nada ";
        break;
    }

    return 0;
}