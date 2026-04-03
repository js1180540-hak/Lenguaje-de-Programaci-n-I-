/******************************************************************************

Autor: Jorge Alberto Silva Lomas
Fecha: 03/04/2026
Descripcion: Realizaremos un codigo con el cual veremos si una persona es menor
o mayor de edad.

*******************************************************************************/

# include <iostream>
using namespace std;

int main() {
    int edad;
    string nombre;
    
    cout << "ingresa tu nombre";
    cin >> nombre;
    
    cout << "ingresa tu edad";
    cin >> edad;
    
    if (edad >= 18) {
        cout << "felicidades" << nombre << "eres mayor de edad." << endl;
    } else {
        cout << "Lo siento" << nombre << "eres menor de edad." << endl;
    }
    
    return 0;
}
