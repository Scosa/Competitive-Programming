#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll x,y;
	cin>>x>>y;
	if(x%y==0){cout<<-1<<endl;return 0;}

	for(ll i=x;i<1000000000000000001;x+=x){
		if(x%y!=0){
			cout<<x<<endl;return 0;
		}
	}

}
