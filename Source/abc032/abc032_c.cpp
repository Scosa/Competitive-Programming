#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<long long,long long> PII; 

/*ll binary_search() {
    ll left = -1; 
    ll right = use; 
    while (right - left > 1) {
        int mid = left + (right - left) / 2;

        if (check(mid)) right = mid;
        else left = mid;
    }

    return right;
}*/

	

	

/*long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m; 
    if (u < 0) u += m;
    return u;
}*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n;
	ll k;
	cin >> n >> k;
	vector<ll> vec(n);
	bool check=false;
	bool check2=true;
	for(int i=0;i<n;i++){
		cin >> vec[i];
		if(vec[i]==0)check=true;
		if(vec[i]<=k)check2=false;
	}


	if(check){cout << n << endl;return 0;}
	if(check2){cout << 0 << endl;return 0;}
	int ans =0;
	int left=0;
	int right=1;
	ll sum=1;
	for(int i=0;i<n;i++){
		sum*=vec[i];
		//cout << sum << endl;
		if(sum<=k)right=i+1;
		else{ans=max(ans,right-left);while(sum>k){sum/=vec[left];left++;};//if(left>=right)right=left+1;}
		}
	  //cout << left << ' ' << right << endl;
	}
	ans=max(ans,right-left);

	cout << ans << endl;
}


