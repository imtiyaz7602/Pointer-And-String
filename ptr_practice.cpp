#include<bits/stdc++.h>
using namespace std;

int main(){
    // int i=8;
    // int *q=&i;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // int *p=0;
    // cout<<*p<<endl;
    // p=&i;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // int num=5;
    // int a=num;
    // a++;
    // cout<<num<<" a : "<<a<<endl;
    // int p=6;
    // int *b=&p;
    // cout<<*b<<endl;
    // (*b)++;
    // (*b)++;
    // (*b)= (*b)*4;

    // cout<<p<<" b : "<<(*b)<<endl;
    // int num=7;
    // int *p=&num;
    // copying a pointer  
    // int *q=p;
    // cout<<"Adress of num : "<<&num<<endl;
    // cout<<"Adress of p : "<<p<<endl;
    // cout<<"Adress of q : "<<q<<endl;
    // cout<<"Val num : "<<num<<endl;
    // cout<<"Val p : "<<*p<<endl;
    // cout<<"Val q : "<<*q<<endl;
    int i=9;
    int *t=&i;
    cout<<"Adress : "<<&i<<endl;
    cout<<"Adress : "<<t<<endl;
    t++;
    cout<<"Adress : "<<t<<endl;
    cout<<"Adress : "<<&i<<endl;
    // (*t)++;
    // (*t)=(*t)+5;
    // cout<<"i: "<<i<<" t: "<<*t<<endl;
    return 0;
}