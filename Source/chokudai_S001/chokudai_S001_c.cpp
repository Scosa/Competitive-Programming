#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	string ans;
	for(int i=0;i<n;i++){
		string  k;cin>>k;
		ans+=k;
		if(i==n-1)break;
		ans.push_back(',');
	}
	cout<<ans<<endl;
}
