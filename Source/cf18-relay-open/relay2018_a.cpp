#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	vector<string> ans;
	for(int i=0;i<n;i++){
		string a;cin>>a;
		if(a=="Mon") ans.push_back("Tue");
		if(a=="Tue") ans.push_back("Wed");
		if(a=="Wed") ans.push_back("Thu");
		if(a=="Thu") ans.push_back("Fri");
		if(a=="Fri") ans.push_back("Sat");
		if(a=="Sat") ans.push_back("Sun");
		if(a=="Sun") ans.push_back("Mon");
	}
	for(int i=0;i<n;i++)cout<<ans[i]<<endl;
}
