#include <bits/stdc++.h>
using namespace std;
class prompt {
private:
    int count;
public:
    prompt(string msg);
    ~prompt();
};
prompt::prompt(string msg){
    cout<< msg;
    cin>> count;
}
prompt::~prompt(){
    for (int i = 0; i < count; i++)
    {
        cout<< "Bell" << endl;
    }
    
}
int main() {
    prompt p("Enter a number: ");
    return 0;
}
