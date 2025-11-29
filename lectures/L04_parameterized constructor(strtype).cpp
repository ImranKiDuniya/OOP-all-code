// Created time: 2025-11-29 17:16
#include <bits/stdc++.h>
using namespace std;
#define imran ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define size 25
class strtype{
    char *p;
    int len;
public:
    strtype(char *ptr);
    ~strtype();
    void show();
};
strtype::strtype(char *ptr){
    len = strlen(ptr);
    p = (char *)malloc(len+1);
    if(!p){
        cout<< "Allocation error" << endl;
        exit(1);
    }
    strcpy(p,ptr);
}
strtype::~strtype(){
    cout<< "Freeing p" << endl;
    free(p);
}
void strtype::show(){
    cout<< p << " - length: "<< len << endl;
}
int main() {
imran;
    strtype s1("This is a test"), s2("I like c++");
    s1.show();
    s2.show();
return 0;
}