#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s;
	cin >> s;
	sort(s.begin(),s.end());
	if(s=="abc") cout << "Yes" << endl;
	else cout << "No" << endl;
	
}
