#include <bits/stdc++.h>
using namespace std;
vector<int> vec(200000);


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n;
	cin >> n;
	vector<int> A(n);
	vector<int> B(n);
	vector<int> C(n);

	for(int i=0;i<n;i++)cin >> A[i]; 
	for(int i=0;i<n;i++)cin >> B[i]; 
	for(int i=0;i<n;i++)cin >> C[i]; 
	long long ans=0;
	sort(A.begin(),A.end());
	sort(C.begin(),C.end());
	
	for(int i=0;i<n;i++){
		long long a=C.end()-lower_bound(C.begin(),C.end(),B[i]+1);
		long long b=upper_bound(A.begin(),A.end(),B[i]-1)-A.begin();
		ans+=a*b;
	}

	cout << ans << endl;
}

