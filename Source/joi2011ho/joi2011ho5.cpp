#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bit1[100001];
ll bit2[100001];
ll n=100001;
int cnt[100001];



ll sum1(ll i) {
    ll s=0;
	while(i>0){
		s+=bit1[i];
		i-=i&(-i);
	}
	return s;
}

void add1(ll i, ll x) {
    while(i<=n){
		bit1[i]+=x;
		i+=i&(-i);
	}
}


ll sum2(ll i) {
    ll s=0;
	while(i>0){
		s+=bit2[i];
		i-=i&(-i);
	}
	return s;
}

void add2(ll i, ll x) {
    while(i<=n){
		bit2[i]+=x;
		i+=i&(-i);
	}
}


bool check(ll t,ll s){

	int use=sum1(t);
	//	cout<<s<<' '<<use<<endl;

	if((ll)s*use>=(ll)sum2(t))return true;
	else return false;
}


ll binary_search(ll a,ll s) {
	ll left = 1;
	ll right = a+1;
	while (right - left > 1) {
		int mid = left+(right-left)/2;
		if (check(mid,s)) left = mid;
		else right = mid;
//		cout<<left<<endl;
	}
//	cout<<right<<endl;
	ll res=sum1(left);
	ll sum=sum2(left);
	for(int i=0;i<(cnt[left+1]-1);i++){
		sum+=(left+1);
		if(sum<=(res+1)*s)res++;
		else break;
	}

	return res;
}




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int m;cin>>m;
	vector<pair<ll,ll> > vec(m);
	for(int i=0;i<m;i++) cin>>vec[i].second>>vec[i].first;
	

	sort(vec.begin(),vec.end());

	ll ans=0;

	for(int i=m-1;i>=0;i--){
		add1(vec[i].second,1);
		add2(vec[i].second,vec[i].second);
	//	cout<<sum1(vec[i].second)<<' '<<sum2(vec[i].second)<<endl;
		cnt[vec[i].second]++;
		ans=max(ans,binary_search(100000,vec[i].first));
	}



	cout<<ans<<endl;
}
