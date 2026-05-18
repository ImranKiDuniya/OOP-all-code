#include<bits/stdc++.h>
using namespace std;

class box{
  double length;  double height;  double weight;
public:
  box(double l, double h, double w){
    length = l; height = h; weight = w;
  }
  void displayByValue(box b){
  double vol = b.length * b.height * b.weight;
  cout << vol << endl;
  }
  void displayByRef(box &b){
  double vol = b.length * b.height * b.weight;
  cout << vol << endl;
  }
};

int main(){
    box ob(2.5, 3.5, 4.5);
    ob.displayByRef(ob);
    ob.displayByValue(ob);
}