
#include <bits/stdc++.h>
using namespace std;

const int MAX_V=10000000;
const int inf=1<<30;
typedef pair<int,int> P;//firstは最短距離、secondは頂点の番号



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int x1,y1,x2,y2,t,v;
	cin>>x1>>y1>>x2>>y2>>t>>v;
	int n;
	cin>>n;
	vector<P> vec(n);
	for(int i=0;i<n;i++)cin>>vec[i].first>>vec[i].second;

	int limit=t*v;
	for(int i=0;i<n;i++){
		double use=sqrt((vec[i].first-x1)*(vec[i].first-x1)+(vec[i].second-y1)*(vec[i].second-y1))+sqrt((vec[i].first-x2)*(vec[i].first-x2)+(vec[i].second-y2)*(vec[i].second-y2));
		if(use<=limit){cout << "YES" << endl;return 0;}
	}
	cout << "NO" << endl;
}
