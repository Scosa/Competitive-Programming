#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,c,k;
	cin >> n >> c >> k;
	vector<int>vec(n);
	for(int i=0;i<n;i++){
		cin >> vec[i];
	} 

	sort(vec.begin(),vec.end());
	int cnt=0;
	int ans=0;
	while(cnt<n){
		int ch=cnt;
		while(ch<n&&vec[ch]<=vec[cnt]+k&&ch<cnt+c) ch++;
		ans++;
		cnt=ch;
	}

	cout << ans  << endl;
	
}



