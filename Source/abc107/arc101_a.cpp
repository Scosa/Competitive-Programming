#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;


int main() {
    int n,k;
	cin >> n >> k;
	vector<int> vec(n);
	for(int i=0;i<n;i++) cin >> vec[i];
	long long ans=100000000007;

	for(int i=0;i+k-1<n;i++){
		int s=vec[i];
		int g=vec[i+k-1];
		long long use;
		if(s<0&&g<0)use=abs(s);
		else if(s<0&&g>=0)use=(g-s)+min(g,abs(s));
		else use = g;

		ans = min(ans,use);
	}

	cout << ans << endl;
}


