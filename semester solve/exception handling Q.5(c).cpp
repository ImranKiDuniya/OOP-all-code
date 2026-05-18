#include<bits/stdc++.h>
using namespace std;
double divide(double a, double b){
    try{
        if(b == 0) throw a;
        return a/b;
    }
    catch(double){
        cout << "eror" << endl;
        return 0;
    }
};
int main(){
    int x; int y; cin >> x >> y;
    cout << divide(x,y) << endl;
}