#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> ans;
const int mod=1000000007;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	string use;

	for(int i=0;i<n;i++){
		if(s[i]==t[i])use.push_back('A');
		else{
			use.push_back('B');
			i++;
		}
	}
	ll ans=1;
	if(use[0]=='A')ans*=3;
	if(use[0]=='B') ans*=6;

	for(int i=1;i<use.size();i++){
		if(use[i-1]=='A'&&use[i]=='A')ans*=2;
		else if(use[i-1]=='A'&&use[i]=='B')ans*=2;
		else if(use[i-1]=='B'&use[i]=='A')ans*=1;
		else ans*=3;
		ans%=mod;
	}

	cout<<ans<<endl;

}
