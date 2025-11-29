// Created time: 2025-11-30 00:26
#include <bits/stdc++.h>
using namespace std;
#define imran ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
class samp{
    int i;
public:
    samp(int n){
        i = n;
    }
    void set_i(int n){
        i = n;
    }
    int get_i(){
        return i;
    }
};
void sqrt_it(samp o){
    o.set_i(o.get_i() * o.get_i());
    cout<< o.get_i() << endl; // changed 
}
int main() {
imran;
    samp ob(10);
    sqrt_it(ob);
    cout<< ob.get_i() << endl; // unchanged

return 0;
}