#include<bits/stdc++.h>
using namespace std;
int sum(int *arr, int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=*(arr+i);
    }
    return ans;
}
void update(int *ptr){
    *ptr=*ptr+6;
}
int main(){
    int x=8;
    int *i=&x;
    update(i);
    cout<<*i<<endl;
    cout<<x<<endl;

//    int arr[10]={0,6,8,9,11,4};
//    for(int i=0;i<6;i++){
//     cout<<i[arr]<<"\t";
//    }cout<<endl;
//    cout<<sum(arr,6)<<endl;
//    cout<<"adress of first element : "<<arr<<endl;
//    cout<<"adress of first element : "<<&arr[0]<<endl;
//    cout<<"adress of first element : "<<&arr[1]<<endl;
//    cout<<"adress of first element : "<<arr+1<<endl;
//    cout<<"adress of first element : "<<&arr[2]<<endl;
//    cout<<"adress of first element : "<<arr+2<<endl;
//    cout<<"value : "<<arr[0]<<endl;
//    cout<<"Value : "<<*arr<<endl;
//    cout<<"Value at 1: "<<*(arr+1)<<endl;
//    cout<<"Val : "<<*(arr+3)<<endl;
//    for(int i=0;i<6;i++){
//     cout<<*(arr+i)<<" ";
//    }cout<<endl;
//    int i=9;
//    int *ptr=&i;
//    cout<<"Size : "<<sizeof(ptr)<<" "<<sizeof(&i)<<endl;
//    int temp[10];
//    cout<<"Size "<<sizeof(temp)<<endl;
//    int temp[10]={9,3,4};
//    int *ptr=temp;
//    cout<<&temp<<endl;
//    cout<<*temp<<endl;
//    cout<<*ptr<<endl;
//    cout<<ptr<<endl;
//    cout<<&ptr<<endl;
//    cout<<temp<<endl;
//    int i=9;
//    int *p;
//    p=&i;
//    cout<<&i<<endl;
//    cout<<p<<endl;
//    cout<<&p<<endl;
 
//   int temp[10]={0};
//   int *ptr=temp;
//   int *q=&temp[0];
//   cout<<ptr<<endl;
//   cout<<q<<endl;
  
   int arr[5]={1,2,3,4,5};
   char ch[6]="abcde";
//    cout<<arr<<endl;
//    cout<<ch<<endl; 
   char *ptr= &ch[0];
//    cout<<ptr<<endl;
   
   return 0;
}