#include<bits/stdc++.h>
using namespace std;

class test{
    static int count;
public:
    static void show(){
        count++;
        cout << "count "<< count << endl;
    }
};
int test::count = 0;
int main(){
    test::show();
    test::show();
    test::show();
}