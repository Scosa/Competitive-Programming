#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> bit(50);
ll cluc(int a){
	ll res=1;
	for(int i=0;i<a;i++){
		res*=2;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	char s;
	cin>>s;
	cout<<(s-'A')+1<<endl;
}
