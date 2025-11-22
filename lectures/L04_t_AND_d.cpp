#include <bits/stdc++.h>
using namespace std;
class t_and_d {
    time_t now;
    tm *current;
public:
    t_and_d(); 
    void show();
};
t_and_d::t_and_d(){
        now = time(0);
        current = localtime(&now); 
}
void t_and_d::show(){
    cout << "Current Date: "
             << (current->tm_mday) << "/"
             << (current->tm_mon + 1) << "/"
             << (current->tm_year + 1900) << endl;

        cout << "Current Time: "
             << current->tm_hour << ":"
             << current->tm_min << ":"
             << current->tm_sec << endl;
}
int main() {
    t_and_d obj;
    obj.show();
    return 0;
}
