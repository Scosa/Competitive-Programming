#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;







int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string l="CODEFESTIVAL2016";
	string s;cin>>s;
	int ans=0;for(int i=0;i<s.size();i++)if(s[i]!=l[i])ans++;

	cout<<ans<<endl;
}
