// Ejercicio 033 - Clase Persona con saludo
// Define una clase Persona con nombre y edad y un método saludar().
//
// Compilar: g++ -std=c++17 exercise_033.cpp -o exercise_033
// Ejecutar: ./exercise_033

#include <iostream>
#include <string>
using namespace std;


class Persona {
public:
    string nombre; int edad;
    Persona(string n="Anon", int e=0): nombre(n), edad(e) {}
    void saludar() const { cout << "Hola, soy " << nombre << " y tengo " << edad << " años\n"; }
};
int main(){
    Persona p("Persona33", 23);
    p.saludar();
    return 0;
}
