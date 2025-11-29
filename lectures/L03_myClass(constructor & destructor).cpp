// Created time: 2025-11-29 16:36
#include <bits/stdc++.h>
using namespace std;
#define imran ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
class myclass{
    int a;
public:
    myclass();
    void show();
    ~myclass();
};
myclass::myclass(){
    cout<< "In Constructor "<< endl;
    a = 10;
}
myclass::~myclass(){
    cout<< "Destructing"<< endl;
}
void myclass::show(){
    cout << a<< endl;
}
int main() {
imran;
    myclass ob;
    ob.show();
return 0;
}