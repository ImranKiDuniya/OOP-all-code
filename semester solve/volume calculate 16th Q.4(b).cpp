#include<bits/stdc++.h>
using namespace std;

class box{
    double height, weight, length;
public:
    box(double h, double w, double l){
        height = h;     weight = w;     length = l;
    }
    double vol(){  return height * weight * length;    }
};
int main(){
    box ob(2.3, 3.4, 4.5), ob2(1.2,2.4, 2.7);
    cout << ob.vol() << " " << ob2.vol() << endl;
}