#include <bits/stdc++.h>
using namespace std;
vector<int> vec;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b,x;
	cin >> a >> b >> x;
	if(a<=x&&(a+b)>=x)cout << "YES" << endl;
	else cout << "NO" << endl;
}
