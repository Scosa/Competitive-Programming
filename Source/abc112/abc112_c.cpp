#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n;
	cin >> n;
	vector<ll> X(n);
	vector<ll> Y(n);
	vector<ll> H(n);
	for(int i=0;i<n;i++)cin >> X[i] >> Y[i] >> H[i];

	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			ll hight=1;
			for(int k=0;k<n;k++){
				if(H[k]!=0){hight = H[k]+abs(i-X[k])+abs(j-Y[k]);break;}
			}
			bool check =true;
			for(int k=0;k<n;k++){
				ll hight_2=H[k]+abs(i-X[k])+abs(j-Y[k]);
				if(H[k]==0){
					if(hight_2<hight)check=false;
					continue;
				}
				if(hight_2!=hight)check=false;
			}
			if(check){cout << i  << " "<< j << " "<< hight << endl;return 0;}
		}
	}
}
