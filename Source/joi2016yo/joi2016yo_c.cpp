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

	
char dp[51][51];
int  W[51];
int B[51];
int R[51];
	


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int a,b;
    cin >> a >> b;
    for(int i=0;i<a;i++)for(int j=0;j<b;j++){
        cin >> dp[i][j];
        if(dp[i][j]=='W')W[i]++;
        if(dp[i][j]=='R')R[i]++;
        if(dp[i][j]=='B')B[i]++;
    }
    int ans =100000000;
    for(int i=0;i<a-2;i++){
        int use=0;
        //for(int l=0;l<=i;i++)use+=b-W[l];

        for(int j=i+1;j<a-1;j++){
            //for(int s=i+1;s<=j;s++)use+=b-B[s];


                for(int l=0;l<=i;l++)use+=b-W[l];
                for(int s=i+1;s<=j;s++)use+=b-B[s];
                for(int t=j+1;t<a;t++)use+=b-R[t];
                 ans=min(ans,use);
                 use=0;

        }
       
    }

    cout << ans << endl;


}


