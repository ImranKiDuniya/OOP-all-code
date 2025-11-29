// Created time: 2025-11-29 16:07
#include <bits/stdc++.h>
using namespace std;
#define imran ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
class my_class{
    int a;
public:
    void set_a(int num);
    int get_a();
};
void my_class::set_a(int num){
    a = num;
}
int my_class::get_a(){
    return a;
}
int main() {
imran;
    my_class ob1,ob2;
    ob1.set_a(10);
    ob2.set_a(8);
    cout<< ob1.get_a()  << endl;
    cout<< ob2.get_a()  << endl;
return 0;
}