// Created time: 2025-11-29 16:17
#include <bits/stdc++.h>
using namespace std;
#define imran ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define SIZE 10
class Stack{
    char Stack[SIZE];
    int tos;
public:
    void init();
    void push(char ch);
    char pop();
};
void Stack::init(){
    tos = 0;
}
void Stack::push(char ch){
    if(tos == SIZE){
        cout<< "Stack is full";
        return;
    }
    Stack[tos] = ch;
    tos++;
}
char Stack::pop(){
    if(tos == 0){
        cout<< "Stack is empty";
        return 0;
    }
    tos--;
    return Stack[tos];
}
int main() {
imran;
    Stack ob1, ob2;
    ob1.init();
    ob2.init();

    ob1.push('a');
    ob2.push('x');
    ob1.push('b');
    ob2.push('y');
    ob1.push('c');
    ob2.push('z');

    for (int i = 0; i < 3; i++)cout<< "pop s1: "<< ob1.pop() << endl;
    for (int i = 0; i < 3; i++)cout<< "pop s2: "<< ob2.pop() << endl;
return 0;
}