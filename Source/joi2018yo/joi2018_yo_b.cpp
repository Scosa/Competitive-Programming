#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;cin>>n;
	int cnt=0;
	vector<int> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int ans=1;
	for(int i=0;i<n;i++){
		if(!A[i]) ans=max(ans,cnt+1),cnt=0;
		else cnt++;
	}
	ans=max(ans,cnt+1);
	cout<<ans<<endl;

}
