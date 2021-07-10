#include <iostream>

using namespace std;

int main()
{
    int edad = 0;
    cout << "ingrese su edad: ";
    cin >> edad;
    if (edad < 18) {
        cout << "no puedes votar" << endl;
    } else if (edad > 40) {
        cout << "no puedes votar" << endl;
    } else {
        cout << "puedes votar" << endl;
    }
}