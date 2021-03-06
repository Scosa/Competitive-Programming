#include <bits/stdc++.h>
using namespace std;

void check(long long s,long long t){
	if(s==t||s+1==t){cout << 2*s-2 << endl;return;}
	
	long long cnt=sqrt(s*t);
	if(cnt*cnt==s*t) cnt--;

	if(cnt*(cnt+1)>=s*t) {cout << 2*cnt-2 << endl;return ;}
	cout << 2*cnt-1 << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	
	for(int i=0;i<n;i++){
		long long a,b;
		cin >> a >> b;
		if(a>b)swap(a,b);
		check(a,b);
	}
}
