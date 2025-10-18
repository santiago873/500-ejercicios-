// Ejercicio 049 - Intercambiar dos enteros usando punteros
// Intercambia dos enteros mediante una función que recibe punteros.
//
// Compilar: g++ -std=c++17 exercise_049.cpp -o exercise_049
// Ejecutar: ./exercise_049

#include <iostream>
#include <string>
using namespace std;


void swap_ptr(int *x, int *y){ int t=*x; *x=*y; *y=t; }
int main(){
    int a = 49, b = 149;
    cout << "Antes: " << a << " " << b << "\n";
    swap_ptr(&a, &b);
    cout << "Después: " << a << " " << b << "\n";
    return 0;
}
