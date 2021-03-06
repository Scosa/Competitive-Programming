#include <bits/stdc++.h>
using namespace std;
int mod=100000;
typedef long long ll;
ll dp[102][21];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    dp[1][vec[0]]=1;

    for(int i=2;i<n;i++){
        for(int j=0;j<=20;j++){
            if(j-vec[i-1]<0){  dp[i][j]=dp[i-1][j+vec[i-1]];continue;}
            if(j+vec[i-1]>20){  dp[i][j]=dp[i-1][j-vec[i-1]];continue;}
            dp[i][j]=dp[i-1][j-vec[i-1]]+dp[i-1][j+vec[i-1]];

        }
    }

    cout<<dp[n-1][vec[n-1]]<<endl;

}
