#include <bits/stdc++.h>
using namespace std;
int V[13][191913];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++) cin >> V[j][i];
	}

	for(int i = 0; i < n; i++) {
		int ans = 0;
		for(int j = 0; j < 3; j++){
			int cnt = 0;
			for(int k = 0; k < n; k++){
				if(V[j][k] == V[j][i]) cnt++;
			}
			if(cnt <= 1) ans += V[j][i]; 
		}
		cout << ans << endl;
	}
}
