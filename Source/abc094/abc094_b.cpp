#include <bits/stdc++.h>
using namespace std;
vector<int> vec;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,x,m;
	cin  >> n >> m >>x;
	vector<int>vec(m);

	for(int i=0;i<m;i++)cin >> vec[i];

	int cnt=0;
	int cnt2=0;

	for(int i=0;i<m;i++){
		if(vec[i]<x)cnt++;
		else if(vec[i]>x) cnt2++;
	}
	cout << min(cnt,cnt2) << endl;

}
