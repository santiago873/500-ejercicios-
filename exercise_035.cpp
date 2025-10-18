// Ejercicio 035 - Implementar pila usando array dinámico
// Pila simple con push, pop y top usando memoria dinámica.
//
// Compilar: g++ -std=c++17 exercise_035.cpp -o exercise_035
// Ejecutar: ./exercise_035

#include <iostream>
#include <string>
using namespace std;


struct Stack {
    int *data; int capacity; int topi;
    Stack(int cap=10): capacity(cap), topi(0) { data = new int[capacity]; }
    ~Stack(){ delete[] data; }
    void push(int v){ if(topi>=capacity) return; data[topi++]=v; }
    int pop(){ if(topi==0) return -1; return data[--topi]; }
    int top() const { return topi?data[topi-1]:-1; }
};
int main(){
    Stack s(10);
    for(int i=0;i<5;i++) s.push(i+35);
    cout << "Top: " << s.top() << "\n";
    cout << "Popped: " << s.pop() << "\n";
    return 0;
}
