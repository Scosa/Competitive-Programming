#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;
typedef long long ll;
int check[100010];





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s,t;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]!='x')t.push_back(s[i]);
	}
	

	bool ok=true;
	for(int i=0;i<t.size()/2;i++){
		if(t[i]!=t[t.size()-1-i])ok=false;
	}
	if(!ok){cout<<-1<<endl;return 0;}
	
	int ans = 0;
	int l = 0, r = s.length() - 1;
	while(l < r){
		if(s[l] == s[r]){
			l++; r--;
		}else if(s[l] == 'x'){
			l++;
			ans++;
		}else{
			r--;
			ans++;
		}
	}
	cout << ans << endl;
}
