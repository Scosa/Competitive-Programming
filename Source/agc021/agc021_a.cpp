#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;cin>>s;
	if(s.size()==1)cout<<s[0]<<endl;
	else {
		bool ok=true;
		for(int i=1;i<s.size();i++)if(s[i]!='9')ok=false;
		if(ok) cout<<9*(s.size()-1)+(s[0]-'0')<<endl;
		else cout<<9*(s.size()-1)+(s[0]-'0'-1)<<endl;
	}
}
