#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	vector<int>vec(3);
	for(int i=0;i<3;i++)cin >> vec[i];
	sort(vec.begin(),vec.end());

	cout << vec[2]-vec[0] << endl;

	
}
