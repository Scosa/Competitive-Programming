#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> vec(3);
	int k;
	cin >> vec[0] >> vec[1] >> vec[2]>> k;
	sort(vec.begin(),vec.end());
	

	for(int i=0;i<k;i++){
		vec[2]*=2;
	}
	cout << vec[0]+vec[1]+vec[2] << endl;
}
