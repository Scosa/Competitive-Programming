#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> A(4);
	vector<int> B(2);
	cin>>A[0];
	cin>>A[1];
	cin>>A[2];
	cin>>A[3];
	cin>>B[0];
	cin>>B[1];
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	int ans=A[3]+A[2]+A[1]+B[1];
	cout<<ans<<endl;
}
