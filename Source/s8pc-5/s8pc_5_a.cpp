#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int n,t;
	cin >> n >> t;
	vector<int> vec(n);
	for(int i=0;i<n;i++)cin >> vec[i];
	long long ans=vec[0];
	for(int i=1;i<n;i++){
		if(vec[i-1]>vec[i]){
			while(vec[i-1]>vec[i]){
				vec[i]+=t;
			}
		}
	}

	cout << vec[n-1] << endl;

	
}
