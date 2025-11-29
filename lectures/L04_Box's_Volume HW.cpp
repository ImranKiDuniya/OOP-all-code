#include <bits/stdc++.h>
using namespace std;
class box {
    double length, width, height,volume;
public:
    box(double l, double w, double h);
    void vol();
};
box::box(double l, double w, double h){
        length = l;
        width = w;
        height = h;
        volume = length * width * height; 
}
void box::vol(){
    cout<< "Volume of the box: "<< volume<< endl;
}
int main() {
    box b(5.5, 3.2, 4.0);
    b.vol();
    return 0;
}
