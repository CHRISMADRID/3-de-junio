#include <iostream>
using namespace std;
string paroimpar(int x);
string positivo(int x);
int main()
{
    int a;
    string sal1, sal2;
    cout << "Ingrese numero entero : ";
    cin >> a;

    sal1 = paroimpar(a);
    sal2 = positivo(a);
    cout << "El numero " << a << " es " << sal1 << " y " << sal2 << "\n";

    return 0;
}
string paroimpar(int x)
{
    string var_sal;
    int impar = x%2;
    if (impar)
    {
        var_sal = "impar";
    }
    else
    {
        var_sal = "par";
    }
    return var_sal;
}
string positivo(int x)
{
    string var_sal;
    if (x > 0)
    {
        var_sal = " positivo ";
    }
    else
    
        var_sal = " negativo ";
    
}