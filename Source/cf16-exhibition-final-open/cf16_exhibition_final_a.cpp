#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	vector<pair<int,int> >A(2*n);
	for(int i=0;i<2*n;i++){
		cin>>A[i].first;
		if(i<n)A[i].second=1;
		else A[i].second=2;
	} 

	sort(A.begin(),A.end());
	ll ans=1;
	int cnt_1=0;
	int cnt_2=0;

	for(int i=0;i<2*n;i++){
		if(A[i].second==1){
			if(cnt_2>0){
				ans*=cnt_2;
				ans%=mod;
				cnt_2--;
			}
			else {
				cnt_1++;
			}
		}
		if(A[i].second==2){
			if(cnt_1>0){
				ans*=cnt_1;
				ans%=mod;
				cnt_1--;
			}
			else {
				cnt_2++;
			}
		}
	}

	cout<<ans%mod<<endl;

  
}
