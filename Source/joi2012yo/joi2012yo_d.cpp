#include <bits/stdc++.h>
using namespace std;

int dp[101][4];
vector<int> A(101);
const int mod=10000;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int k,l;
        cin>>k>>l;
        A[k]=l;
    }

    //algorithm
    for(int i=1;i<=3;i++){
        if(A[1]!=0){
            dp[1][A[1]]=1;
            break;
        }
        dp[1][i]=1;
    }
    for(int i=1;i<=3;i++){
        if(A[2]!=0){
            dp[2][A[2]]=dp[1][1]+dp[1][2]+dp[1][3];
            break;
        }
        dp[2][i]=dp[1][1]+dp[1][2]+dp[1][3];
    }

    for(int i=3;i<=n;i++){

        if(A[i]!=0){
            int use1;
            int use2;
            if(A[i]==3)use1=1,use2=2;
            if(A[i]==2)use1=1,use2=3;
            if(A[i]==1)use1=2,use2=3;
            if(dp[i-1][A[i]]!=0)dp[i][A[i]]= dp[i-1][use1]%mod+dp[i-1][use2]%mod+dp[i-2][use1]%mod+dp[i-2][use2]%mod;
            else dp[i][A[i]]=dp[i-1][use1]%mod+dp[i-1][use2]%mod;
        }
        
        else {
            for(int j=1;j<=3;j++){
            int use1;
            int use2;
            if(j==3)use1=1,use2=2;
            if(j==2)use1=1,use2=3;
            if(j==1)use1=2,use2=3;
               if(dp[i-1][j]!=0) dp[i][j] = dp[i-1][use1]%mod+dp[i-1][use2]%mod+dp[i-2][use1]%mod+dp[i-2][use2]%mod;
               else dp[i][j]=dp[i-1][use1]%mod+dp[i-1][use2]%mod;
            }
        }
    }

    cout<<(dp[n][1]%mod+dp[n][2]%mod+dp[n][3]%mod)%mod<<endl;

    

}
