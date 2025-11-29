// Created time: 2025-11-29 17:46
#include <bits/stdc++.h>
using namespace std;
#define imran ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
class myclass{
    int a,b;
public:
    myclass(int x, int y);
    void show();
};
myclass::myclass(int x, int y){
    cout<< "Constructing" << endl;
    a = x;
    b = y;
}
void myclass::show(){
    cout<< a << " " << b <<  endl;
}
int main() {
imran;
    myclass ob(4,10);
    ob.show();
return 0;
}