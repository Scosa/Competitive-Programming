#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cluc(int s){
    ll res=0;
    while(s>0){
        res+=s;
        s-=2;
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    if(n<3){cout<<0<<endl;return 0;}
    if(n%2==0){
        cout<<cluc(n-2)*2<<endl;
    }
    else {
        int t=n/2-1;
        cout<<cluc(n-2)*2-(n-2)<<endl;
    }
}
