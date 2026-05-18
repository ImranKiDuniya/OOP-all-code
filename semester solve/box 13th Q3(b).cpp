#include<bits/stdc++.h>
using namespace std;

class box{
    double height, width, depth;
public:
    box(){
        height = 0;     width = 0;      depth = 0;
    }
    box(double h, double w, double d){
        height = h;     width = w;      depth = d;
    }
    void show(){
        cout << height << " " << width << " " << depth << endl;
    }
};
int main(){
    box ob;
    ob.show();
    box obj(2.3, 3.4, 4.5);
    obj.show();
}