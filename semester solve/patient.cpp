#include<bits/stdc++.h>
using namespace std;

class patient{
    string name;
    int age;
    string medHistory;
public:
    void setName(string n){ name = n;   }
    string getName(){   return name;    }
    void setAge(int a){
        if(a >= 0) age = a;
        else cout << "Error" << endl;
    }
    int getAge(){   return age; }
    void setMedHistory(string his){ medHistory = his;   }
    string getMedHistory(){    return medHistory;  }
    void displayBasicInfo(){   cout << name << endl << age << endl; }
};
int main(){
    patient p;
    p.setName("imran");
    p.setAge(20);
    p.setMedHistory("no history");
    p.displayBasicInfo();

}