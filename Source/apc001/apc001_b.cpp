#include <bits/stdc++.h>
using namespace std;


using namespace std;
typedef long long ll; 







int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n;\
	cin >> n;
	vector<ll> A(n);
	vector<ll> B(n);
	ll sum_A=0;
	ll sum_B=0;
	for(int i=0;i<n;i++)cin >> A[i],sum_A+=A[i];
	for(int i=0;i<n;i++)cin >> B[i],sum_B+=B[i];
	ll fun=sum_B-sum_A;
	ll ans1=0;
	ll ans2=0;

	for(int i=0;i<n;i++){
		if(((B[i]-A[i])+1)/2<0)continue;
		 ans2+=((B[i]-A[i])+1)/2;
	}

	if(fun>=ans2)cout << "Yes" << endl;
	else cout << "No" << endl;
}



