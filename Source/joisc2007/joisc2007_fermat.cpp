#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int check[10001];
int num[10001];
ll mod_pow(ll x,ll n,ll mod){
    if(n==0)return 1;
    ll res=mod_pow(x*x%mod,n/2,mod);
    if(n&1)res=res*x%mod;
    return res;
}


	


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,p;
    cin>>p>>n;
    for(int i=0;i<p;i++){
        int use=mod_pow(i,n,p);
        check[use]++;
        num[i]=use;
    }
    
    ll ret1=0;
    ll ret2=0;
    for(int i=0;i<p;i++){
        ret2+=check[(num[i]+num[i])%p];
        for(int j=i+1;j<p;j++){
            ret1+=check[(num[i]+num[j])%p];
        }
    }

    cout<<ret1*2+ret2<<endl;
}
