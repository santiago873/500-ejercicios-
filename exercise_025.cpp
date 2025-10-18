// Ejercicio 025 - Intercambiar dos enteros usando punteros
// Intercambia dos enteros mediante una función que recibe punteros.
//
// Compilar: g++ -std=c++17 exercise_025.cpp -o exercise_025
// Ejecutar: ./exercise_025

#include <iostream>
#include <string>
using namespace std;


void swap_ptr(int *x, int *y){ int t=*x; *x=*y; *y=t; }
int main(){
    int a = 25, b = 125;
    cout << "Antes: " << a << " " << b << "\n";
    swap_ptr(&a, &b);
    cout << "Después: " << a << " " << b << "\n";
    return 0;
}
