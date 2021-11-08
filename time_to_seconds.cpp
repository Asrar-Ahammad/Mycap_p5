#include<iostream>
using namespace std;

class time{
    public:
        int h,m,s;
        
};


int main(){
    class time ti;
    cout<<"Enter time :";
    cout<<"\nHours :";
    cin>>ti.h;
    cout<<"Minutes :";
    cin>>ti.m;
    cout<<"Seconds :";
    cin>>ti.s;
    cout<<"\nThe time entered :"<<ti.h<<":"<<ti.m<<":"<<ti.s;
    cout<<"\nThe total seconds :"<<(ti.h*60*60)+(ti.m*60)+ti.s;
    return 0;
}