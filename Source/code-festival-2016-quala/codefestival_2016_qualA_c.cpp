#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s;
	int k;
	cin>>s>>k;
	

	for(int i=0;i<s.size();i++){
		//cout<<k<<endl;
		if(i==s.size()-1){s[i]=(char)('a'+((s[i]-'a')+k%26)%26);break;}
		if(s[i]=='a')continue;
		if(26-(s[i]-'a')<=k){k-=(26-(s[i]-'a'));s[i]='a';}
	}

	cout<<s<<endl;
}
