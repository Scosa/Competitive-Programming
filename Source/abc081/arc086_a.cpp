#include <bits/stdc++.h>
using namespace std;
vector<int> vec(200000);


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n,k;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		int l;
		cin >> l;
		vec[l]+=1;
	}
	
	//alogorithm
	sort(vec.begin(),vec.end());
	int ans=0;
	int cnt=0;

	for(int i=0;i<200001-k-1;i++){
		if(vec[i]==0)continue;
		ans+=vec[i];
	//	if(cnt==k)break;
	//	cnt++;
	}
	cout <<  ans << endl;
}
