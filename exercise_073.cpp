// Ejercicio 073 - Intercambiar dos enteros usando punteros
// Intercambia dos enteros mediante una función que recibe punteros.
//
// Compilar: g++ -std=c++17 exercise_073.cpp -o exercise_073
// Ejecutar: ./exercise_073

#include <iostream>
#include <string>
using namespace std;


void swap_ptr(int *x, int *y){ int t=*x; *x=*y; *y=t; }
int main(){
    int a = 73, b = 173;
    cout << "Antes: " << a << " " << b << "\n";
    swap_ptr(&a, &b);
    cout << "Después: " << a << " " << b << "\n";
    return 0;
}
