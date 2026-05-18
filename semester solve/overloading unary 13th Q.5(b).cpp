#include<bits/stdc++.h>
using namespace std;

class overload{
    int x;
public:
    overload(int i){    x = i;  }
    overload operator+(overload ob){
        return x + ob.x;
    }
    overload operator-(overload ob){
        return x - ob.x;
    }
    overload operator*(overload ob){
        return x * ob.x;
    }
    overload operator/(overload ob){
        return x / ob.x;
    }
    overload operator%(overload ob){
        return x % ob.x;
    }
    void operator++() { ++x;    }
    void operator--() { --x;    }
    void show(){    cout << x << endl;}
};
int main(){
    overload a(10), b(5);
    overload c = a + b;    c.show();
    c = a - b;    c.show();
    c = a * b;    c.show();
    c = a / b;    c.show();

    ++a;    a.show();
    --b;    b.show();
}