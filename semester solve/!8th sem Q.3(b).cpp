#include<bits/stdc++.h>
using namespace std;

class test{
    int x;
public:
    test(int n) {
        x = n;
    }
    int getx(){
        return x;
    }
};
int main(){
    // test arr[10] = {1,2,3,4,5,6,7,8,9,10};
    test arr[5] = { test(1), test(2), test(3), test(4), test(5)  };
    for (int i = 0; i < 5; i++){
        cout << arr[i].getx() << " ";
    }
}