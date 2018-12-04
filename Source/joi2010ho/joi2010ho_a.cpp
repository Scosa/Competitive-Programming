#include <bits/stdc++.h>
using namespace std;
int mod=100000;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    vector<int> vec(n+1);
    vec[0]=0;
    for(int i=0;i<n-1;i++){
        int k;
        cin>>k;
        vec[i+1]=k+vec[i];
    }

    long long  ans=0;
    int old=0;int now=0;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        old=now;
        now=now+a;
        ans+=abs(vec[old]-vec[now]);
        ans%=mod;
    }

    cout<<ans<<endl;


}
