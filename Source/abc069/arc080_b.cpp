#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> ans;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int h,w,n;
	cin>>h>>w>>n;
	for(int i=0;i<n;i++){
		int k;cin>>k;
		for(int j=0;j<k;j++)ans.push_back(i+1);
	}

	for(int i=0;i<h;i++){
		if(i%2==0){
			for(int j=0;j<w;j++){
				cout<<ans[w*i+j];
				if(j==w-1)cout<<endl;
				else cout<<' ';
			}
		}
		if(i%2==1){
			for(int j=w-1;j>=0;j--){
				cout<<ans[w*i+j];
				if(j==0)cout<<endl;
				else cout<<' ';
			}
		}
	}


}
