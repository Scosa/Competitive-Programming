#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;
vector<int> T;
bool  use[100002];



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n,l;
	cin>>n>>l;
	vector<ll> L(n);
	for(int i=0;i<n;i++)cin>>L[i];
	bool ok=false;
	int memo;
	for(int i=0;i<n-1;i++){
		if(L[i]+L[i+1]>=l){
			ok=true;memo=i;break;
		}
	}
	if(!ok)cout<<"Impossible"<<endl;
	else {
		cout<<"Possible"<<endl;
		
		for(int i=n-2;i>memo;i--){
			cout<<i+1<<endl;
		}
		for(int i=0;i<memo;i++){
			cout<<i+1<<endl;
		}
		cout<<memo+1<<endl;
	}
}
