#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,a,b;
	cin >> n >> m  >> a >> b;
	vector<pair<int,int> >s(m);
	for(int i=0;i<m;i++)cin >> s[i].first >> s[i].second;
	int cnt = 0;
	for(int i=1;i<n+1;i++){
		bool update = false;
		for(int j=0;j<m;j++){
		if(s[j].first<=i&&s[j].second>=i )update=true;
	
	}
	if(update)cnt++;
	}
	cout << cnt*a+(n-cnt)*b << endl;
}
