#include <iostream> //Entrada y salida de datos
using namespace std;

int fibo(int n); //Prototipo de la funcion

int main(void)
{
    int n = 0;
    cout << "Fibonacci de (ingrese el numero): ";
    cin >> n; //Le pedimos al usuario que ingrese un numero luego se lo pasamos a la funcion Fibonacci
    int f = fibo(n);
    cout << "Resultado: " << f << endl;

    return 0;
}

int fibo(int n)
{
    if (n <= 1)
    {
        cout << "n=" << n << " caso base\n";
        return 1;
    }
    else
    {
        int x = fibo(n - 2);
        int y = fibo(n - 1);
        cout << "n=" << n << " x=" << x
             << " y=" << y << endl;
        return x + y;
    }
}