// Ejercicio 037 - Intercambiar dos enteros usando punteros
// Intercambia dos enteros mediante una función que recibe punteros.
//
// Compilar: g++ -std=c++17 exercise_037.cpp -o exercise_037
// Ejecutar: ./exercise_037

#include <iostream>
#include <string>
using namespace std;


void swap_ptr(int *x, int *y){ int t=*x; *x=*y; *y=t; }
int main(){
    int a = 37, b = 137;
    cout << "Antes: " << a << " " << b << "\n";
    swap_ptr(&a, &b);
    cout << "Después: " << a << " " << b << "\n";
    return 0;
}
