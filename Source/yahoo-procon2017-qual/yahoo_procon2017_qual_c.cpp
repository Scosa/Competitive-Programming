#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;
vector<int> A(10000020,0);


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,k;cin>>n>>k;
	int memo;
	for(int i=0;i<k;i++){int s;cin>>s;s--;A[s]=1;memo=s;}
	vector<string> S(n);
	for(int i=0;i<n;i++)cin>>S[i];
	if(n==k){cout<<""<<endl;return 0;}


	string use=S[memo];
	int cnt1=use.size();
	int cnt2=0;
	for(int i=0;i<n;i++){
		if(A[i]){
			int cnt=0;
			for(int j=0;j<min(use.size(),S[i].size());j++){
				if(use[j]==S[i][j])cnt++;
				else break;
			}
			cnt1=min(cnt,cnt1);
		}
		else{
			int cnt=0;
			for(int j=0;j<min(use.size(),S[i].size());j++){
				if(use[j]==S[i][j])cnt++;
				else break;
			}
			cnt2=max(cnt,cnt2);
		}
	}


	if(!(cnt2<cnt1))cout<<-1<<endl;

	else {
		for(int i=0;i<cnt2+1;i++)cout<<use[i];
		cout<<endl;
	}
}
