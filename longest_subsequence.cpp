#include<bits/stdc++.h>
using namespace std;
void solve(string str, string ptr){
    int n=str.size();
    int m=ptr.size();
    vector<vector<int>>dp(n+1, vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str[i-1]==ptr[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int len=dp[n][m];
    string ans="";
    int i=n, j=m;
    while(i>0 && j>0){
         if(str[i-1]==ptr[j-1]){
                ans.push_back(str[i-1]);
                i--;
                j--;
                
         }else if(dp[i-1][j]> dp[i][j-1]){
            i--;
         }else{
            j--;
         } 
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
    
}
int main(){
    string str="abdcfg";
    string ptr="acefg";
    solve(str,ptr);

    return 0;
}