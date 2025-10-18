// Ejercicio 085 - Intercambiar dos enteros usando punteros
// Intercambia dos enteros mediante una función que recibe punteros.
//
// Compilar: g++ -std=c++17 exercise_085.cpp -o exercise_085
// Ejecutar: ./exercise_085

#include <iostream>
#include <string>
using namespace std;


void swap_ptr(int *x, int *y){ int t=*x; *x=*y; *y=t; }
int main(){
    int a = 85, b = 185;
    cout << "Antes: " << a << " " << b << "\n";
    swap_ptr(&a, &b);
    cout << "Después: " << a << " " << b << "\n";
    return 0;
}
