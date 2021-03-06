#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
ll pos[100010];
double A[100010];
double B[100010];

const int MAX_N = 1 << 17;
ll n;
pair<double,double> dat[2*MAX_N-1];


//初期化
void init(int n_){
	n=1;
	while(n<n_) n*=2;
	for(int i=0;i<2*n-1;i++){
		dat[i].first=1;
		dat[i].second=0;
	}
}

//k番目の値をaに変更
void update(int k,double a,double b){
	//葉の節点
	k+=n-1;
	dat[k].first=a;
	dat[k].second=b;
	while(k>0){
		k=(k-1)/2;
		dat[k].first=dat[2*k+1].first*dat[2*k+2].first;
		dat[k].second=dat[2*k+1].second*dat[2*k+2].first+dat[2*k+2].second;
	}
}

//[a,b)の最小値を求める
//後ろのほうの引数は、計算の簡単のための引数
//kは節点の番号、l,rはその節点が[r,l)に対応づいていることを表す
//したがって、外からquery(a,b,0,0,n)として呼ぶ



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	
	ll m;cin>>n>>m;
	vector<ll> V;
	for(int i=0;i<m;i++){
		ll p;cin>>p>>A[i]>>B[i];
		pos[i]=p-1;
		V.push_back(pos[i]);
	}

	sort(V.begin(),V.end());
	V.erase(unique(V.begin(),V.end()),V.end());
	map<ll,int> mp;
	for(int i=0;i<V.size();i++){
		mp[V[i]]=i;
	}
	init(V.size());





	double minn=1.0;
	double maxn=1.0;
	for(int i=0;i<m;i++){
		update(mp[pos[i]],A[i],B[i]);
		double use=dat[0].first+dat[0].second;
		minn=min(minn,use);
		maxn=max(maxn,use);
	}
	cout<<fixed<<setprecision(10)<<minn<<endl;
	cout<<fixed<<setprecision(10)<<maxn<<endl;
  
}
