#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,l;string s;
	cin>>n>>l>>s;
	int cnt=1;
	int ans=0;
	for(int i=0;i<n;i++){
		if(s[i]=='+')cnt++;
		else cnt--;

		if(cnt>l)ans++,cnt=1;
	}

	cout<<ans<<endl;
}
