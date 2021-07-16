#include <iostream>
#include <string>

using namespace std;

int main() {
    union numero_letra {
        int numero;
        char letra;
    };

    numero_letra x = {'A'};

    cout << "x como un numero " << x.numero << endl;
    cout << "x como una letra " << x.letra << endl;

    enum dias_semana {
        lunes = 'l', 
        martes = 'm', 
        miercoles = 'e', 
        jueves = 'j', 
        viernes = 'v', 
        sabado = 's', 
        domingo = 'd'
    };

    dias_semana dia = lunes;

    cout << (char) dia;

}