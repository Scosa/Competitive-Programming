#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
bool used[10001];



	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,k;
	cin >> n >> k;
	vector<int>vec(k);
	vector<int>vec2(k);
	for(int i=0;i<k;i++)cin >> vec[i] >> vec2[i];

	for(int i=0;i<k;i++){
		vec[i];
		int use = min(vec[i],min(vec2[i],min(n-vec[i]+1,n-vec2[i]+1)));
		int ans = use%3;
		if(!ans)ans+=3;
		cout << ans << endl;
	}


	
}



