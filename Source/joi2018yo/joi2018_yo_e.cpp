#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> P;
const ll MOD=10000;
const ll INF=1000000010;


int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int main(){
    int h,w;
    cin>>h>>w;
    int a[31][31];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }
    int dp[31][31][1000];
    for(int i=0;i<=h;i++)for(int j=0;j<=w;j++)for(int k=0;k<=h*w;k++)dp[i][j][k]=INF;
    dp[0][0][0]=0;
    for(int k=0;k<h*w-1;k++){
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                for(int l=0;l<4;l++){
                    int x=j+dx[l];
                    int y=i+dy[l];
                    if(x<0||y<0||x>=w||y>=h){
                        continue;
                    }
                    dp[y][x][k+1]=min(dp[y][x][k+1],dp[i][j][k]+(1+k*2)*a[y][x]);
                }
            }
        }
    }
    int ans=INF;
    for(int k=0;k<h*w;k++){
        ans=min(ans,dp[h-1][w-1][k]);
    }
    cout<<ans<<endl;
	return 0;
}

