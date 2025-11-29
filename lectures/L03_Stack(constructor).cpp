// Created time: 2025-11-29 17:05
#include <bits/stdc++.h>
using namespace std;
#define imran ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define size 10
class Stack{
    char stk[size];
    int tos;
public:
    Stack();
    void push(char ch);
    char pop();
};
Stack::Stack(){
    cout<< "Constructing a stack" << endl;
    tos = 0;
}
void Stack::push(char ch){
    if(tos == size){
        cout<< "Stack is full" << endl;
        return;
    }
    stk[tos] = ch;
    tos++;
}
char Stack::pop(){
    if(tos == 0){
        cout<< "Stack is empty" << endl;
        return 0;
    }
    tos--;
    return stk[tos];
}
int main() {
imran;
    Stack ob1, ob2;

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