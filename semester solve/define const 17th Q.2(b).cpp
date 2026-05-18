#include<bits/stdc++.h>
using namespace std;

class test{
    const int x;
public:
    test(int a): x(a){ }
    void show(){
        cout << x << endl;
    }
};
int main(){
    test ob(12);
    ob.show();
}