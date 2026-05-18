/*
    Coded by AHSANUL IMAM OVI
    MUH2201024M
 */
#include<bits/stdc++.h>
using namespace std;
class Time
{
public:
    int hour, minute;

    void set(int h,int m)
    {
        hour=h;
        minute=m;
    }
    void show()
    {
        cout<<"Hour: "<<hour<<" Minutes: "<<minute<<'\n';
    }
};
int main()
{
    Time t[4];
    cout<<"Enter times: "<<'\n';
    for(int i=1;i<=2;i++)
    {
        cout<<"Hour & Minute: "<<'\n';
        int tt,m; cin>>tt>>m;
        t[i].set(tt,m);
    }
    Time res;
    int tot_h=t[1].hour+t[2].hour;
    tot_h+=(t[1].minute+t[2].minute)/60;
    int tot_m = (t[1].minute + t[2].minute) - (60*((t[1].minute + t[2].minute) / 60));
    res.set(tot_h,tot_m);
    res.show();
}