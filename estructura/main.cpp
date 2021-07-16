#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    Persona p = Persona();
    p.nombre = "Willy";
    p.edad = 32;

    cout << p.nombre << " " << p.edad << endl;

    Persona *persona = new Persona();
    persona->nombre = "Martin";
    persona->edad = 28;
    cout << persona->nombre << " " << persona->edad << endl;
    
}