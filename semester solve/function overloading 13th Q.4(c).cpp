#include<bits/stdc++.h>
using namespace std;

class geom{
public:
    double area(double radius){ return 2 * 3.14 * radius;   }
    double area(double length , double width){  return length*width;    }
};
int main(){
    geom g;
    cout << g.area(5) << " " << g.area(4,5) << endl;
}