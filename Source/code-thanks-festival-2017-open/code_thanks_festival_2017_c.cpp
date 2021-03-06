#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> PII;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,k;
	cin >> n >> k;
	priority_queue<PII,vector<PII>,greater<PII> > que;
	for(int i=0;i<n;i++){
		PII x;
		cin >> x.first >> x.second;
		que.push(x);
	}
	ll ans=0;
	
	for(int i=0;i<k;i++){
		PII time = que.top();
		//cout<<time.first << endl;
		que.pop();
		ans+=time.first;
		time.first+=time.second;
		que.push(time);
	}

	cout << ans << endl;


}
