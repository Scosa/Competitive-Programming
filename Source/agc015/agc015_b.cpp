#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;







int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>s;
	ll ans=2*(s.size()-1);
	for(int i=1;i<s.size()-1;i++){
		if(s[i]=='U'){
			ans+=s.size()-i-1;
			ans+=2*i;
		}
		else{
			ans+=i;
			ans+=2*(s.size()-1-i);
		}
	}

	cout<<ans<<endl;
}
