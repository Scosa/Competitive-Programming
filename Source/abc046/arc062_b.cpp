#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=1<<30;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin>>s;
	int ans=0;
	int cnt_g=0;
	int cnt_p=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='g')cnt_g++;
		if(s[i]=='p')cnt_p++;
	}
	ans=(cnt_g-cnt_p)/2;

	cout<<ans<<endl;
}
