#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N=1000000;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	if(n==0){cout<<7<<endl;return 0;}
	cout<<1;
	for(int i=0;i<n-1;i++){
		cout<<0;
	}
	cout<<7<<endl;;
}
