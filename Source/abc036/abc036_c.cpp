#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll INF=1000000007;
typedef pair<int,int>PII;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//input
	int n;
	cin>>n;
	vector<PII> vec(n);
	for(int i=0;i<n;i++)cin>>vec[i].first,vec[i].second=i,vec[i].first;
	sort(vec.begin(),vec.end());
	vector<int> ans(n);
	int cnt=0;
	
	
	for(int i=0;i<n;i++){
		ans[vec[i].second]=cnt;
		if(i==n-1)break;
		if(vec[i].first==vec[i+1].first) continue;
		cnt++;
	}
	for(int i=0;i<n;i++)cout<<ans[i]<<endl;


}


