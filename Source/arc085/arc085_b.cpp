#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod=1000000007;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,z,w,use1,use2;
	cin>>n>>z>>w;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		if(i==n-2) use1=k;
		if(i==n-1) use2=k;
	}
	if(n==1)cout<<abs(w-use2)<<endl;
	else cout<<max(abs(w-use2),abs(use2-use1))<<endl;
	
}
