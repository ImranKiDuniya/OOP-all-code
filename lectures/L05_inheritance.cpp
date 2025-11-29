// Created time: 2025-11-29 23:36
#include <bits/stdc++.h>
using namespace std;
#define imran ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
class B{
    int i;
public:
    void set_i(int n);
    int get_i();
};
class D : public B{
    int j;
public:
    void set_j(int j);
    int mul();
};
void B::set_i(int n){
    i = n;
}
int B::get_i(){
    return i;
}
void D::set_j(int n){
    j = n;
}
int D::mul(){
    return j*get_i();
}
int main() {
imran;
    D ob;
    ob.set_i(4);
    ob.set_j(7);
    cout<< ob.mul() << endl;
return 0;
}