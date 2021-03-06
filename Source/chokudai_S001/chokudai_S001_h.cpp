#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=1<<30;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i]; 
	vector<int> dp(n+1,INF);
	for(int i=0;i<n;i++){
		*lower_bound(dp.begin(),dp.end(),A[i])=A[i];
	}

	cout<<lower_bound(dp.begin(),dp.end(),INF)-dp.begin()<<endl;
}
