#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,t;
	cin>>n>>t;
	int maxn=0;
	for(int i=0;i<t;i++){
		int k;cin>>k;
		maxn=max(k,maxn);
	}
	


	cout<<max(0,maxn-1-(n-maxn))<<endl;


}
