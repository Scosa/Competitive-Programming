#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	map<ll,ll> mp;
	vector<ll> A;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		mp[k]++;
		if(mp[k]>1){
			A.push_back(k);
			mp[k]=0;
		}
	}
	if(A.size()<2){
		cout<<0<<endl;
		return 0;
	}
	sort(A.begin(),A.end(),greater<int>());
	cout<<A[0]*A[1]<<endl;
}
