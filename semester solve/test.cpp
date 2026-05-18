#include<bits/stdc++.h>
using namespace std;

class test{
    double hh , ll, ww;
public:
    test(double l, double h, double w){
        hh = h; ll = l; ww = w;
    }
    void byValue(){
        cout << hh * ll * ww << endl;
    }
    void byRef(test &ob){
        cout << ob.hh * ob.ll * ob.ww  << endl;
    }
};
int main(){
    test ob(1.2,2.3,4.5);
    ob.byValue();
    ob.byRef(ob);
}