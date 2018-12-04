#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<long long,long long> PII; 
const ll INF = 1000000007;

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
}

ll comb(ll s,ll t){
	if(t>s/2)t=s-t;
	ll use=1;ll use2=1;
	for(int i=0;i<t;i++){
		use*=(s-i);
		use2*=(i+1);
		use%=INF;
		use2%=INF;
	}
	//cout << use  << ' ' << use2 << endl;

	return use*modinv(use2,INF)%INF;

}*/

	

	


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n,m;
    cin >> n >> m;
    vector<int> vec(n);
    for(int i =0;i<n;i++)cin >> vec[i];

    for(int i=1;i<m+1;i++){
        for(int j=0;j<n;j++){
            if(j==n-1)continue;
            if(vec[j]%i>vec[j+1]%i)swap(vec[j],vec[j+1]);
        }
    }

    for(int i=0;i<n;i++)cout << vec[i] << endl;
}


