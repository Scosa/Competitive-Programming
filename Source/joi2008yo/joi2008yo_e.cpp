#include <bits/stdc++.h>
using namespace std;
int mas[11][100010];






int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++ ){
            cin>>mas[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<(1<<n);i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            int one=0;
            int zero=0;
            for(int k=0;k<n;k++){
                int use;
                if(mas[k][j]==1)use=(1<<k);
                else use=0;


                if(((use^i)>>k)&1)one++;
                else zero++;
            }
             cnt+=max(one,zero);
        }
        ans=max(cnt,ans);
        
    }
    cout<<ans<<endl;
}
