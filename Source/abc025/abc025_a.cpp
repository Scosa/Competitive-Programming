#include <bits/stdc++.h>
using namespace std;
#define bye return 0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input;
	string s;
	cin >> s;
	int n;
	cin >> n;
	int use = (n+4)/5;
	int use2=n%5;
	if(use2==0)use2=5;

	cout << s[use-1] << s[use2-1] << endl;
}
