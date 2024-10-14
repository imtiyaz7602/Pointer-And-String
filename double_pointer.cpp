#include<bits/stdc++.h>
using namespace std;
void update (int **p2){
    // *p2=*p2+1;
    **p2=**p2+1;
}
int main(){
    int i=7;
    int *p=&i;
    int **p2=&p;
    cout<<"Before "<<endl<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    update(p2);
    cout<<"After "<<endl;
     cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    // cout<<"Adress of i : "<<&i<<endl;
    // cout<<"Printing p : "<<ptr<<endl;
    // cout<<"Adress of p : "<<&ptr<<endl;
    // cout<<"**P "<<*p<<endl;
    // cout<<p<<endl;
    // cout<<&ptr<<endl;
    // cout<<i<<endl;
    // cout<<*ptr<<endl;
    // cout<<**p<<endl;
    return 0;
}