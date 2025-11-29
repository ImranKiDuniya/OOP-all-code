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
    strtype();
    ~strtype();
    void set(char *ptr);
    void show();
};
strtype::strtype(){
    p = (char *)malloc(size);
    if(!p){
        cout<< "Allocation error" << endl;
        exit(1);
    }
    *p = '\0';
    len = 0;
}
strtype::~strtype(){
    cout<< "Freeing p" << endl;
    free(p);
}
void strtype::set(char *ptr){
    if(strlen(ptr) >= size){
        cout<< "String is too big" << endl;
        return;
    }
    strcpy(p,ptr);
    len = strlen(p);
}
void strtype::show(){
    cout<< p << " - length: "<< len << endl;
}
int main() {
imran;
    strtype s1, s2;
    s1.set("This is a test");
    s2.set("I like c++");
    s1.show();
    s2.show();
return 0;
}