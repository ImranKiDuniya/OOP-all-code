// Created time: 2025-11-29 23:01
#include <bits/stdc++.h>
using namespace std;
#define imran ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define size 10
class Stack{
    char stk[size];
    int tos;
    char who;
public:
    Stack(char c);
    void push(char ch);
    char pop();
};
Stack::Stack(char c){
    tos = 0;
    who = c;
    cout<< "Constructing stack "<< who << endl;
}
void Stack::push(char ch){
    if(tos == size){
        cout<< "Stack" << who << " is full" << endl;
        return;
    }
    stk[tos] = ch;
    tos++;
}
char Stack::pop(){
    if(tos == 0){
        cout<< "Stack" << who << " empty" << endl;
        return 0;
    }
    tos--;
    return stk[tos];
}
int main() {
imran;
    Stack ob1('A'), ob2('B');

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
