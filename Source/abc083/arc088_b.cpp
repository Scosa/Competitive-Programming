#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin>>s;
	int n=s.size();
	int ans=n;
	for(int i=0;i<n-1;i++){
		if(s[i]!=s[i+1]){
			int k=i+1;
			ans=min(max(k,n-k),ans);
		}
	}
	/*if(ans==0){
		if(s[0]=='0')cout<<0<<endl;
		else cout<<1<<endl;
		return 0;
	}*/

	cout<<ans<<endl;

}

