#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<string> vec(n);
	for(int i=0;i<n;i++)cin >> vec[i];
	//algorithm
	for(int i=0;i<n;i++)for(int j=i+1;j<n;j++){
		if(j==i+1&&vec[i][vec[i].size()-1]!=vec[j][0]){cout << "No" << endl;return 0;}
		if(vec[i]==vec[j]){cout << "No " <<endl;return 0;}
	}

	cout << "Yes" << endl;
}
