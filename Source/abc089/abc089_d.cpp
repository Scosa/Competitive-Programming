#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<int,int>  Coordinate[90002];
ll sum[90002];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int h,w,d;
	cin>>h>>w>>d;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			int k;
			cin>>k;
			Coordinate[k].first=i;
			Coordinate[k].second=j;
		}
	}

	for(int i=0;i<d;i++){
		for(int j=i+d;j<=w*h;j+=d){
			int ny=Coordinate[j].first;
			int nx=Coordinate[j].second;
			int ox=Coordinate[j-d].second;
			int oy=Coordinate[j-d].first;
			sum[j]=sum[j-d]+abs(nx-ox)+abs(ny-oy);
		}
	}

	int q;
	ll ans=0;
	cin>>q;
	for(int i=0;i<q;i++){
		int k,l;
		cin>>k>>l;
		cout<<sum[l]-sum[k]<<endl;
	}

}
