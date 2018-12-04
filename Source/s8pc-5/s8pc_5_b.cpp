#include <bits/stdc++.h>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n,m;
	cin >> n >> m;
	vector<int> X(n);
	vector<int> Y(n);
	vector<int> R(n);
	int mimm=1000000;
	for(int i=0;i<n;i++)cin >> X[i] >> Y[i] >> R[i],mimm=min(mimm,R[i]);
	if(m==0){cout << mimm << endl;return 0;}

	vector<int> A(m);
	vector<int> B(m);
	for(int i=0;i<m;i++)cin >> A[i]  >> B[i];
	
	//allgorirhm
	double ans=1000001;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int use1=X[i]-A[j];
			int use2=Y[i]-B[j];
			ans=min(ans,sqrt(use1*use1+use2*use2)-R[i]);
		}
	}

	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			int use1=A[i]-A[j];
			int use2=B[i]-B[j];
			//cout << use1 << " "<< use2 << endl;
			ans=min(ans,(sqrt(use1*use1+use2*use2)/2));
		}
	}

	cout << std::setprecision(18)<<ans << endl;
}
