#include <bits/stdc++.h>
using namespace std;
typedef long long ll;






int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,x;cin>>n>>x;ll sum=0;
	int maxn=0;
	for(int i=0;i<n;i++){
		int k,l;cin>>k>>l;
		maxn=max(maxn,l);
		sum+=k*l;
	}
	cout<<sum+maxn*x<<endl;
	
}
