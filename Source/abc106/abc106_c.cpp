#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;


int main() {
    string s;
	long long k;
	cin >> s >> k;
	char ans;
	for(int i=0;s.size();i++){
		if(s[i]!='1') {ans=s[i];break;}
		if(i+1==k){cout << 1 << endl;return 0;}
	}
	cout << ans << endl;
}


