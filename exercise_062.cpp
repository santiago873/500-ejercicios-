// Ejercicio 062 - Array dinámico y suma
// Reserva un array dinámico de tamaño n, lee n enteros y muestra su suma.
//
// Compilar: g++ -std=c++17 exercise_062.cpp -o exercise_062
// Ejecutar: ./exercise_062

#include <iostream>
#include <string>
using namespace std;


int main(){
    int n;
    cout << "Ingrese n: ";
    if(!(cin >> n)) return 0;
    int *a = new int[n];
    for(int i=0;i<n;++i){ cout << "a["<<i<<"]: "; cin >> a[i]; }
    long long s=0; for(int i=0;i<n;++i) s += a[i];
    cout << "Suma = " << s << "\n";
    delete[] a;
    return 0;
}
