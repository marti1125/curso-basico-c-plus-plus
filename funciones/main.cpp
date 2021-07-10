#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

int multiplicar(int a, int b = 2)
{
    return a * b;
}

int main()
{
    cout << "Sumar: " << suma(100, 200) << endl;
    cout << "Multiplicar: " << multiplicar(200) << endl;
    cout << "Multiplicar: " << multiplicar(200, 1000) << endl;
}