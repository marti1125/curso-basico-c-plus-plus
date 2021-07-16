#include <iostream>
#include <string>

using namespace std;

class Persona {
    public:
        string nombre;
        int edad;
        void saludar() {
            cout << "Hola " << nombre << endl;
        };
};

int main() {
    Persona p = Persona();
    p.nombre = "Willy";
    p.edad = 32;
    p.saludar();
}