#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000;
typedef long long ll;
int n,k;
vector<ll> W;
vector<int> P;
bool check(double s){
	vector<double> D;
	for(int i=0;i<n;i++){
		D.push_back((double)W[i]*P[i]*0.01-(double)W[i]*s*0.01);
	}
	sort(D.begin(),D.end());
	double sum=0;
	for(int i=0;i<k;i++){
		sum+=D[n-i-1];
		if(sum<0)return false;
	}
	return true;
}


double binary_search(double n) {
	int cnt=0;
	double left = 0;
	double right = n+1;
	while (true) {
		double mid = left + (double)((right - left) / 2.0);
		if (check(mid)) left = mid;
		else right = mid;
		cnt++;
		if(cnt==50)	return right;
	}

}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);


	cin>>n>>k;

	for(int i=0;i<n;i++){
		ll a,b;
		cin>>a>>b;
		W.push_back(a);
		P.push_back(b);
	}
    double ans= binary_search((double)100);

    cout<<fixed<<setprecision(10)<<ans<<endl;


}
