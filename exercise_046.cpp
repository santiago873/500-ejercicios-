// Ejercicio 046 - Factorial recursivo
// Calcula el factorial de un número de forma recursiva.
//
// Compilar: g++ -std=c++17 exercise_046.cpp -o exercise_046
// Ejecutar: ./exercise_046

#include <iostream>
#include <string>
using namespace std;


long long factorial(int n) {
    if(n<=1) return 1;
    return n * factorial(n-1);
}
int main(){
    int n = 7;
    cout << "n = " << n << "\n";
    cout << "factorial(n) = " << factorial(n) << "\n";
    return 0;
}
