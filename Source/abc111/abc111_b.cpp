#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


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

	string s;
	cin >> s;
	string t;

	for(int i=0;i<s.size();i++){
		t.push_back(s[0]);
	}
	
	if(t==s)cout << t << endl;
	else if(t>s)cout << t << endl;
	else{
		for(int i=0;i<s.size();i++){
			cout << char(t[i]+1);
		}	cout << endl;
	}

}


