#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,t;cin>>n>>t;
	vector<ll> x(n);
	vector<ll> y(n);
	vector<ll> X;
	vector<ll> Y;
	for(int i=0;i<n;i++){
		cin >> x[i] >> y[i];
		X.push_back(x[i]);
		Y.push_back(y[i]);
	}

	sort(X.begin(),X.end());
	sort(Y.begin(),Y.end());
	
	ll ans=(ll)7919129230021010123;


	for(int i = 0; i < n; i++){
		for(int j = i + 1;j < n; j++){
			for(int s = 0; s < n; s++){
				for(int k= s + 1; k < n; k++){
					ll xl = X[i];
					ll xr = X[j];
					ll yd = Y[s];
					ll yu = Y[k];
					int cnt = 0;
					for(int d=0;d<n;d++){
						if(xl <= x[d] && x[d] <= xr && yd <= y[d] && y[d] <= yu) cnt++;
					}

					if(cnt >= t)ans = min(ans, (ll)(xr-xl) * (yu-yd));
				}
			}
		}
	}

	cout << ans << endl;
}

