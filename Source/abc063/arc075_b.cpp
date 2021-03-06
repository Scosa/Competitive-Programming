#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> H(101010);
ll n,a,b;
bool check(ll s){
    ll res=0;
    ll use=s*b;
    for(int i=0;i<n;i++){
        if(H[i]>use)res+=(H[i]-use+(a-b)-1)/(a-b);
    }

    return res<=s;
}


ll binary_search(ll t) {
    ll left = -1;
    ll right = t;
    while (right - left > 1) {
        ll mid = left + (right - left) / 2;
        if (check(mid)) right = mid;
        else left = mid;
    }
    return right;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>a>>b;
    
    for(int i=0;i<n;i++)cin>>H[i];

    ll ans=binary_search(1000000001);

    cout<<ans<<endl;
}
