#include <bits/stdc++.h>
using namespace std;


using namespace std;
typedef long long ll; 







int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(n==4*i+7*j){cout << "Yes" << endl;return 0;}
		}
	}
	cout << "No" << endl;
}



