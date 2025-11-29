// Created time: 2025-11-29 17:31
#include <bits/stdc++.h>
using namespace std;
#define imran ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
class timer{
    clock_t start;
public:
    timer();
    ~timer();
};
timer::timer(){
    start = clock();
}
timer::~timer(){
    clock_t end;
    end = clock();
    cout<< "Elapsed time: "<< (end - start)/CLOCKS_PER_SEC << endl;
}
int main() {
imran;
    timer ob;
    char c;
    cin >> c;
return 0;
}