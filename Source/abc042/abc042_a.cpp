#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=100000000007;
vector<ll> F(2);





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> V(3);
	cin>>V[0]>>V[1]>>V[2];
	sort(V.begin(),V.end());
	if(V[0]==5&&V[1]==5&&V[2]==7){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
