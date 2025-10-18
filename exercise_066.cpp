// Ejercicio 066 - Cola (queue) con lista enlazada simple
// Implementa una cola FIFO usando nodos enlazados.
//
// Compilar: g++ -std=c++17 exercise_066.cpp -o exercise_066
// Ejecutar: ./exercise_066

#include <iostream>
#include <string>
using namespace std;


struct Node {
    int val; Node* next;
    Node(int v): val(v), next(nullptr) {}
};
struct Queue {
    Node* head; Node* tail;
    Queue(): head(nullptr), tail(nullptr) {}
    ~Queue(){ while(head){ Node* t=head; head=head->next; delete t; }}
    void push(int v){ Node* n=new Node(v); if(!tail) head=tail=n; else { tail->next=n; tail=n; }}
    int pop(){ if(!head) return -1; Node* t=head; int v=t->val; head=head->next; if(!head) tail=nullptr; delete t; return v; }
};
int main(){
    Queue q;
    q.push(66); q.push(67);
    cout << "Pop: " << q.pop() << "\n";
    cout << "Pop: " << q.pop() << "\n";
    return 0;
}
