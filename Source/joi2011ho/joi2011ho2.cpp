#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N=1000000;
ll dp[11][2001];//dp[i][j]==i番目までのジャンルでJ冊売った時の最大値


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);


	int n,k;
	cin>>n>>k;
	vector<vector<ll> > array(10);
	for(int i=0;i<n;i++){
		ll s,l;
		cin>>s>>l;
		l--;
		array[l].push_back(s);
	}
	//cout<<endl;
	for(int i=0;i<10;i++){
		sort(array[i].begin(),array[i].end(),greater<int>());
		for(int j=1;j<array[i].size();j++){
			array[i][j]+=array[i][j-1];
		}
		for(int j=1;j<array[i].size();j++){
			array[i][j]+=j*(j+1);
		}
	}
	/*for(int i=0;i<10;i++){
		for(int j=0;j<array[i].size();j++) cout<<array[i][j]<<' ';
		cout<<endl;
	}*/

	
	for(int i=0;i<10;i++){
		for(int j=1;j<=k;j++){
			if(i==0){
				if(j>array[i].size())break;
				dp[i][j]=array[i][j-1];
			}
			else {
				dp[i][j]=dp[i-1][j];
				for(int s=1;s<=k;s++){
					if(s>j) break;
					if(s>array[i].size())break;
					dp[i][j]=max(dp[i][j],dp[i-1][j-s]+array[i][s-1]);
			
				}
			}
		}
	}
	/*for(int i=0;i<10;i++){
		for(int j=0;j<=k;j++){
			cout<<dp[i][j]<<' ';
		}
		cout<<endl;
	}*/

	cout<<dp[9][k]<<endl;

}
