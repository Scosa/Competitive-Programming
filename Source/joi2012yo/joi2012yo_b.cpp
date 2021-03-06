#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	vector<pair<int,int> > A(n+1);
	A[0].first=-1;
	for(int i=1;i<=n;i++)A[i].first=0;
	
	for(int i=0;i<n*(n-1)/2;i++) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(c==d){
			A[a].first+=1;
			A[b].first+=1;
		}
		else if(c>d){
			A[a].first+=3;
		}
		else{
			A[b].first+=3;
		}
	}
	for(int i=0;i<=n;i++)A[i].second=i;
	sort(A.begin(),A.end());
	vector<int> ans(n+1,0);
	ans[A[n].second]=1;
	int cnt=1;
	for(int i=n-1;i>0;i--){
		if(A[i+1].first!=A[i].first) ans[A[i].second]=ans[A[i+1].second]+cnt,cnt=1;
		else  ans[A[i].second]=ans[A[i+1].second],cnt++;
	}
	for(int i=1;i<=n;i++)cout<<ans[i]<<endl;
}
