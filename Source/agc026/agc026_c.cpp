#include <bits/stdc++.h>
using namespace std;
typedef long long ll;unordered_map <string,int> mp;





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;string s;
	cin>>n>>s;

	string t=s.substr(n,n);
	
	for(int i=0;i<n;i++){
		s[n+i]=t[n-i-1];
	}
	//cout<<s<<endl;

	ll ans=0;
	
	for(int i=0;i<(1<<n);i++){
		string a,b;
		for(int j=0;j<n;j++){
			if(i&(1<<j))a.push_back(s[j]);
			else b.push_back(s[j]);
		}
		//cout<<a+'.'+b<<' ';
		mp[a+'.'+b]++;
		
	}
	//cout<<endl;
	for(int i=0;i<(1<<n);i++){
		string a,b;
		for(int j=0;j<n;j++){
			if(i&(1<<j))a.push_back(s[j+n]);
			else b.push_back(s[j+n]);
		}
		ans+=mp[a+'.'+b];
		//	cout<<a+'.'+b<<' ';
		
	}

	cout<<ans<<endl;

}
