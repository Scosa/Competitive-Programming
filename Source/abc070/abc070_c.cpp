#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a,long long b){
if(b==0)return a;
else return GCD(b,a%b);
}

typedef long long ll;

int main(){
	int n;
	cin>>n;
	vector<ll> vec(n);
	for(int i=0;i<n;i++)cin>>vec[i];

	if(n==1){cout<<vec[0]<<endl;return 0;}
	ll right;
	ll left=vec[0];
	ll use;
	for(int i=1;i<n;i++){
		right=vec[i];
		use=right/GCD(right,left)*left;
		left=use;
	}

	cout<<left<<endl;
}
