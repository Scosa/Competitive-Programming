#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int A[20][20];
int dp[(1<<16)+1][17];


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int ans=0;

	int a,b,c,x;cin>>a>>b>>c>>x;
	for(int i=0;i<=a;i++){
		for(int j=0;j<=b;j++){
			for(int k=0;k<=c;k++) if(500*i+100*j+50*k==x){
				ans++;
			}
		}
	}

	cout<<ans<<endl;

	
	
}

