#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<long long> vec(n);
	for(int i=0;i<n;i++)cin >> vec[i];
	if(n==1){cout << 1 << endl;return 0;}

	int flag=0;
	int ans=0;
	for(int i=0;i<n-1;i++){
		if(vec[i]==vec[i+1])continue;
		if(flag!=-1&&vec[i]<vec[i+1]){flag=1;continue;}
		else if(flag==1&&vec[i]<vec[i+1]){flag=0;ans++;}
		else if(flag!=1&&vec[i]>vec[i+1]){flag=-1;continue;}
		else {flag=0;ans++;}
	}
	cout << ans+1 << endl;


}
