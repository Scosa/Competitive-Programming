#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;







int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	string s;
	cin >> s;
	if(s==""){cout << "YES" << endl;return 0;}
	int check=0;
	for(int i=0;i<s.size();i++){
		if(check<0){cout << "NO" << endl;return 0;}
		if(check>1){cout << "NO" << endl;return 0;}
		if(s[i]=='c'){check++;continue;}
		if(s[i]=='h'){check--;continue;}
		if(s[i]=='o')continue;
		if(s[i]=='k')continue;
		if(s[i]=='u')continue;
		cout << "NO" << endl;return 0;
		}
		if(check){cout << "NO" << endl;return 0;}
		cout << "YES" << endl;
}

	

