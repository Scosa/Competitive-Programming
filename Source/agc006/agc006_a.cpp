#include <bits/stdc++.h>
using namespace std;
#define bye return 0;
int n;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input;
	cin >> n;
	string s,t;
	cin >> s >> t;
	int ans=0;
	//check;
	for(int i=n;i<=2*n;i++){
		if(i==2*n){cout << 2*n << endl;return 0;}
		string k=s.substr(i-n,2*n-i);
		string l =t.substr(0,2*n-i);
		if(k==l){cout << i << endl;bye;}
		
	}
	
}
