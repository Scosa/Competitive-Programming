#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long a,b,c;
	cin >> a >> b >> c;
	if(a%2==0||b%2==0||c%2==0){cout << 0 << endl;return 0;}
	long long ans,ans1,ans2,ans3;
	ans1=b*c;
	ans2=a*c;
	ans3=a*b;
	ans=min(ans1,min(ans2,ans3));
	cout << ans << endl;
	
}

