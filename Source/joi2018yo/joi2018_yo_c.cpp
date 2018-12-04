#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int mas[28][28];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int h,w;cin>>h>>w;
	for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>mas[i][j];

	int ans=100001010;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			int cnt=0;
			for(int k=0;k<h;k++){
				for(int s=0;s<w;s++){
					cnt+=mas[k][s]*min(abs(k-i),abs(s-j));
				}
			}
			ans=min(ans,cnt);
		}
	}

	cout<<ans<<endl;

}
