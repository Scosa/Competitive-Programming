#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	vector<int> vec(3);
	cin >> vec[0] >> vec[1] >> vec[2];
	sort(vec.begin(),vec.end());

	cout << vec[0]+vec[1]+10*vec[2] << endl;
	
	
}

