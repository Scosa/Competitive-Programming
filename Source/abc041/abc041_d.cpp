#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//int use[100010];
const int mod=1000000007;
ll dp[(1<<16)+1];//dp[i]=集合iにたいするトポソの通り数
//dp[i]=sum(dp[i])
bool isok[17];




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);


	int n,m;cin>>n>>m;
	vector<vector<int> > edge(n); 
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;x--;y--;
		edge[x].push_back(y);
	}
	dp[0]=1;
	for(int i=1;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				bool ok=true;
				for(int k=0;k<edge[j].size();k++){
					if(i&(1<<edge[j][k])) ok=false;
				}
				if(ok) isok[j]=true;
			}
		}
		/*if(i==2){
			for(int j=0;j<3;j++) cout<<isok[j]<<' ';
		}*/
		for(int j=0;j<n;j++){
			if(i&(1<<j)&&isok[j]) dp[i]+=dp[i^(1<<j)],isok[j]=false;
		}
	}
	//cout<<endl;
	cout<<dp[(1<<n)-1]<<' ';
}
