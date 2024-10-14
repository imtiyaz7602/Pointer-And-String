#include<bits/stdc++.h>
using namespace std;
int count(char ch[]){
    // char name[50];
    int cnt=0;
    // cin>>name;
    // cout<<"Len : "<<strlen(name)<<endl;
    int i=0;
    while(ch[i]!='\0'){
        cnt++;
        i++;
    }
    return cnt;
    // cout<<"Length is : "<<cnt;
}
bool palind(char ch[]){
    int s=0;
    int e=count(ch)-1;
    while(s<=e){
        if(ch[s]!=ch[e]){
            return false;
        }else{
            s++;
            e--;
        }
    }
    return true;

}
void convert(char ch[]){
    int n=count(ch);
    for(int i=0;i<n;i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-'a'+'A';
        }
    }
}
void convertC(char ch[]){
    int n=count(ch);
    for(int i=0;i<n;i++){
        ch[i]=ch[i]-'A'+'a';
    }
}
int main(){
   
   char ch[100];
//    cin.getline(ch,100);
//    convert(ch);
    
    // string str="MdImtiyaz123";
    // cout<<str<<endl;
//     string st;
//     getline(cin,st);
//    cout<<st.substr(4,8);
    string a="Khan shab is a great men his original name is Imtiyaz";
    string b="Imtiyaz";
    // if(a.compare(b)==0){
    //     cout<<"Equal "<<endl;
    // }else{
    //     cout<<"Nope"<<endl; 
    // }
    a.replace(0,4,b);
    cout<<a<<endl;
    if(a.find(b)==string::npos){
        cout<<"Not found "<<endl;
    }else{
        cout<<a.find(b)<<endl;
    }
    b.erase(2,1);
    cout<<b;
    return 0;
}