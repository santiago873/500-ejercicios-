// Ejercicio 022 - Factorial recursivo
// Calcula el factorial de un número de forma recursiva.
//
// Compilar: g++ -std=c++17 exercise_022.cpp -o exercise_022
// Ejecutar: ./exercise_022

#include <iostream>
#include <string>
using namespace std;


long long factorial(int n) {
    if(n<=1) return 1;
    return n * factorial(n-1);
}
int main(){
    int n = 8;
    cout << "n = " << n << "\n";
    cout << "factorial(n) = " << factorial(n) << "\n";
    return 0;
}
