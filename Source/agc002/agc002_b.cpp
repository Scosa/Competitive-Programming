#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
typedef long long ll;
int cnt[100002];
int check[100002];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin>>n>>m;
	cnt[1]=1;

	for(int i=1;i<=n;i++)check[i]=1;
	for(int i=0;i<m;i++){
		int k,l;
		cin>>k>>l;
		check[k]--;
		check[l]++;
	
		if(cnt[k])cnt[l]=1;
		if(check[k]==0)cnt[k]=0;
	}

	int ans=0;
	for(int i=1;i<=n;i++)if(cnt[i]&&check[i])ans++;

	cout<<ans<<endl;
}
