#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a[1000200];
int main() {
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    ll maxn=0,cnt=0;
    for(int i=0;i<n;i++){
      if(maxn<a[i]){maxn=a[i];cnt++;}
    }
    cout<<cnt<<endl;
	return 0;
}

