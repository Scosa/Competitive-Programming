#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,a,b,a_c;
	cin>>n>>a>>b>>a_c;
	double ans=(double)a_c/a;
	ll ca=a_c;
	ll dol=a;
	vector<int> vec(n);
	for(int i=0;i<n;i++)cin>>vec[i];
	sort(vec.begin(),vec.end());

	for(int i=n-1;i>=0;i--){
		dol+=b;
		ca+=vec[i];
		ans=max(ans,(double)(ca/dol));
	}

	cout<<(int)ans<<endl;
}
