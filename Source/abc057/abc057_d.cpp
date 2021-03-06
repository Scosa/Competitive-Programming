#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=1<<30;
std::vector<std::vector<long long> > comb(int n, int r) {
  std::vector<std::vector<long long> > v(n + 1,std::vector<long long>(n + 1, 0));
  for (int i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++) {
    for (int k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
    }
  }
  return v;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,a,b;
	cin>>n>>a>>b;
	vector<ll> V(n);

	for(int i=0;i<n;i++)cin>>V[i];


	sort(V.begin(),V.end(),greater<ll>());
	ll sum_V=0;
	for(int i=0;i<a;i++){
		sum_V+=V[i];
	}
	double cnt=(double)sum_V/a;
	cout<<fixed<<setprecision(10)<<cnt<<endl;
	vector<vector<ll> >NCR=comb(50,4);

	if(V[0]!=V[a-1]){
		int cnt_A=0;
		int cnt_B=0;
		for(int i=0;i<n;i++){
			if(V[a-1]==V[i])cnt_A++;
		}
		for(int i=0;i<a;i++){
			if(V[a-1]==V[i])cnt_B++;
		}
		cout<<NCR[cnt_A][cnt_B]<<endl;
	}
	else{
		int cnt_A=0;
			for(int i=0;i<n;i++){
			if(V[a-1]==V[i])cnt_A++;
		}
		ll ans=0;
		for(int i=a;i<=b;i++){
			if(cnt_A<i)break;
			ans+=NCR[cnt_A][i];
		}
		cout<<ans<<endl;
	}

}
