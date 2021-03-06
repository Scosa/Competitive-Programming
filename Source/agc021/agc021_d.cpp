#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int memo[302][302][302];
string s;
int dfs(int l,int r,int k){
	if(memo[l][r][k])return memo[l][r][k];
	int res=0;
	if(l==r) res=1;
	else if(r-l==1){
		if(s[r]==s[l]||k>0) res=2;
		else res=1;
	}
	else {
		res=max(dfs(l,r-1,k),dfs(l+1,r,k));
		if(s[l]==s[r]) res=max(res,dfs(l+1,r-1,k)+2);
		else if(k>0) res=max(res,dfs(l+1,r-1,k-1)+2);
	}
	return memo[l][r][k]=res;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin>>s>>t;
	cout<<dfs(0,s.size()-1,t)<<endl;
}
