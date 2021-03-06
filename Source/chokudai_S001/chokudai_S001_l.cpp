#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N=100010;
ll bit[MAX_N+1],n;


ll sum(int i){
	ll s=0;
	while(i>0){
		s+=bit[i];
		i-=i&-i;
	}
	return s;
}

void add(int i,int x){
	while(i<=n){
		bit[i]+=x;
		i+=i&-i;
	}
}







int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>n;
	vector<int> A(n);
	vector<int> B(n);
	for(int i=0;i<n;i++)cin>>A[i],B[i]=A[i];
	sort(B.begin(),B.end());
	

	ll ans=0;
	for(int j=0;j<n;j++){
		int p=lower_bound(B.begin(),B.end(),A[j])-B.begin();add(p+1,1);
		ans+=sum(p+1)-j;
	}

	if(ans%2)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
