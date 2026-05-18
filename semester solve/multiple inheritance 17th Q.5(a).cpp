#include<bits/stdc++.h>
using namespace std;

class A{
    int i;
public:
    A(int a) {  
    i = a;
    cout << i << endl;
  }
};
class B{
    int j;
public:
    B(int a) {
    j = a;
    cout << j << endl;
  }
};
class C: public A, public B{
    int k;
public:
    C(int a, int b, int c): A(a), B(b){
        k = c;
        cout << k << endl;
    }
};
int main(){
    C ob(1,2,3);
}