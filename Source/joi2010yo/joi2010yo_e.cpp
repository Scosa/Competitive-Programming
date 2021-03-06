#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int md=100000;

std::vector<std::vector<long long> > comb(int n, int r) {
  std::vector<std::vector<long long> > v(n + 1,std::vector<long long>(n + 1, 0));
  for (int i = 0; i < v.size(); i++) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int j = 1; j < v.size(); j++) {
    for (int k = 1; k < j; k++) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k])%md;
    }
  }
  return v;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int w,h;
	cin>>w>>h;
	int use1=min(w-1,h-1);
	int use2=min(w-1,h-2);
	int use3=min(w-2,h-1);

	vector<vector<ll> >vec=comb(200,100);
	ll ans=0;

	for(int i=1;i<=use1;i++){
		ans+=2*vec[w-i-1][i-1]*vec[h-i-1][i-1]%md;
	}

	for(int i=1;i<=use2;i++){
		ans+=vec[w-i-1][i]*vec[h-i-2][i-1]%md;
	}
	for(int i=1;i<=use3;i++){
		ans+=vec[w-i-2][i-1]*vec[h-i-1][i]%md;
	}
	cout<<ans%md<<endl;
}
