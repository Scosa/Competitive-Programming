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

	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		k--;
		vec[k]=i;
	}
	int ans=1;
	int cnt=1;
	for(int i=0;i<n;i++){
		if(i==n-1){ans=max(ans,cnt);break;}
		if(vec[i]<vec[i+1]){cnt++;continue;}
		ans=max(ans,cnt);
		cnt=1;
	}

	cout << n-ans << endl;



}


