#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i=0;i<n;i++)cin >>vec[i];
	int ans=0;
	int cnt=1;
	for(int i=1;i<n;i++){
		if(vec[i]!=vec[i-1]){ans+=cnt/2;cnt=1;}
		else cnt++;
	}
	ans+=cnt/2;
	cout << ans << endl;

}



