#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,k,x,y;
	cin >> n >> k >> x >> y;
	if(n<=k)cout<<x*n<<endl;
	else cout<<(n-k)*y+k*x<<endl;

	
}

