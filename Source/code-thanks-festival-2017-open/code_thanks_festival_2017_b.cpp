#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string t){
	int n=t.size();
	bool ok=true;
	for(int i=0;i<n/2;i++){
		if(t[i]!=t[n-1-i])ok=false;
	}
	return ok;
}

int main(){
	string s;cin>>s;

	for(int i=0;;i++){
		string t=s;
		for(int j=i-1;j>=0;j--){
			t+=s[j];
		}

		if(check(t)){
			cout<<t.size()-s.size()<<endl;return 0;
		}
	}
}
