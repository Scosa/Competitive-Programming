#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
int sumX[100001];
int sumY[100001];



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int n,k;
	cin >> n >> k;
	int ans =100000000;

	for(int bit=0;bit<(1<<n);bit++){
		int use=1;
		for(int i=0;i<n;i++){
			if(bit&(1<<i))use*=2;
			else use+=k;
		}
		ans=min(ans,use);
	}

	cout << ans << endl;

	
}
