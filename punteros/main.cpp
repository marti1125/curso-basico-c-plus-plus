#include <iostream>

using namespace std;

int main() {
    char letra = 'A';
    char *puntero = &letra;
    cout << letra << " puntero -> " << (int *) &letra << endl;
    cout << (int *) puntero << " " <<*puntero << endl;
}