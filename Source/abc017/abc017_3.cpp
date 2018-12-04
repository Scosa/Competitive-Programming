#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
vector<long long> imos(1000002);



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int n,m;
	cin >>n >> m;
	vector<int> L(n);
	vector<int> R(n);
	vector<int> S(n);
	long long sum=0;
	for(int i=0;i<n;i++)cin>>L[i] >> R[i] >> S[i],sum+=S[i];


	for(int i=0;i<n;i++){
		imos[L[i]]+=S[i];
		imos[R[i]+1]-=S[i];
	}

	for(int i=0;i<m;i++){
		imos[i+1]+=imos[i];
	}
	long long mimm=10000000000000;

	for(int i=1;i<m+1;i++){
		mimm=min(mimm,imos[i]);
	}
	cout  << sum-mimm << endl;

	

	
}
