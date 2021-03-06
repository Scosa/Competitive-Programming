#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod=1000000007;
const int MAX_N=200010;
int k;
ll bit[MAX_N+1],n;
//[1,n]

ll sum(int i){
	ll s=0;
	while(i>0){
		s+=bit[i];
		i-=i&-i;
	}
	return s;
}

void add(int i,int x){
	while(i<=n){
		bit[i]+=x;
		i+=i&-i;
	}
}


bool check(int s){
	if(sum(s)>=k) return true;
	else return false;
}


int binary_search(int n) {
	int left = -1;
	int right = n;
	while (right - left >1) {
		int mid = left + (right - left) / 2;
		if (check(mid)) right = mid;
		else left = mid;
	}
	add(right,-1);
	return right;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int q;n=MAX_N;
	cin>>q;
	for(int i=0;i<q;i++){
		int t;cin>>t;
		if(t==1){
			int a;cin>>a;
			add(a,1);
		}
		if(t==2){
			cin>>k;
			cout<<binary_search(n)<<endl;
		}
	}
}
