#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int a,b,c;
	cin >> a >>b >> c;
	if(b==0&&a+b==c){cout << '?' << endl;return 0;}
	if(a+b==c){cout << '+' << endl;return 0;}
	else if(a-b==c){cout << '-' << endl;return 0;}
	cout << '!' << endl;
	
}
