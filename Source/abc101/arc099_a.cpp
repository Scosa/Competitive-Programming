#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll INF=1000000007;


int main(){
	int n,k;
	cin>>n>>k;
	vector<int> vec(n);
	int cnt;
	for(int i=0;i<n;i++){cin>>vec[i];if(vec[i]==1)cnt=i;}
	int ans=100000004;
	for(int i=-k+1;i<=0;i++){
		int left=cnt+i;
		int right=left+k-1;
		//cout<<left<<' '<<right<<endl;
		if(left<0||right>=n)continue;
		int k1=k-1;
		int use=(left+k1-1)/k1+((n-right-1+k1-1)/k1)+1;
		ans=min(use,ans);
	}

	cout<<ans<<endl;


}


