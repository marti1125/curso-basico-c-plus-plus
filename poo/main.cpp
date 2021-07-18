#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:        
        string nombre;
        int edad;
    public:
        static int numeroPersona;
        Persona(string nombre, int edad);
        ~Persona() {
            // cout << "destructor" << endl;
        }
        Persona &establecerNombre(string nombre) {
            this->nombre = nombre;
            return *this;
        }
        Persona &establecerEdad(int edad) {
            this->edad = edad;
            return *this;
        }
        void saludar();
};

int Persona::numeroPersona = 0;

void Persona::saludar() {
    cout << "Hola soy " << nombre << " mi edad es " << edad << " numero de persona " << numeroPersona << endl;
}

Persona::Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
    this->numeroPersona += 1;
}

int main() {
    Persona p = Persona("Willy", 32);
    p.saludar();
    Persona pp = Persona("Ximena", 28);
    pp.saludar();
    pp.establecerEdad(30);
    
    Persona *po = new Persona("Martin", 23);
    // delete po;
    po->establecerNombre("Pepo").establecerEdad(40).saludar();
}