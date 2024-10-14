#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=5;
    cout<<"Number is "<<num<<endl;
    cout<<"Addreds is : "<<(&num)<<endl;
    int *ptr=&num;
    cout<<ptr<<endl;
    // cout<<ptr<<endl;
    cout<< (*ptr)<<endl;
    double p2=4.3;
    // cout<<"Size of p2 : "<<sizeof(p2)<<endl;
    double *pt=&p2;
    cout<<"Size of integer : "<<sizeof(num)<<endl;
    cout<<"Size of ptr : "<<sizeof(ptr)<<endl;
     cout<<"Size of double : "<<sizeof(p2)<<endl;
    cout<<"Size of pt : "<<sizeof(pt)<<endl;
    cout<<"VAlue is : "<<*pt<<endl;
    return 0;
}