#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mas[200001];
using namespace std;





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	char dp[3][3];
	for(int i=0;i<3;i++)for(int j=0;j<3;j++){
		cin >> dp[i][j];
	}
	cout << dp[0][0] << dp[1][1] << dp[2][2]<< endl;

}
