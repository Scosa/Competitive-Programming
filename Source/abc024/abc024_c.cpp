#include <bits/stdc++.h>
using namespace std;
vector<long long> l;
vector<long long> r;
vector<long long> s;
vector<long long> t;

void check(int x,int y){
	long long cnt=0;
	while(true){
		if(x==y)break;
		if(l[cnt]<=x&&x<=r[cnt]){
			if(x<y){x=r[cnt];if(x>=y)x=y;}
			else {x=l[cnt];if(x<=y)x=y;}
		}
		cnt++;
	}
	cout << cnt << endl;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n,d,k;
	cin >> n >> d >> k;
	for(int i=0;i<d;i++){
		int a,b;
		cin >> a>> b;
		l.push_back(a);
		r.push_back(b);
	}
	for(int i=0;i<k;i++){
		int a,b;
		cin >> a>> b;
		s.push_back(a);
		t.push_back(b);
	}

	for(int i=0;i<k;i++)check(s[i],t[i]);
	
}
