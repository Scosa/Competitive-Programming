#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	string s;
	cin >> s;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int l,r;
		cin >> l >> r;
		l--;
		r--;
		string t=s.substr(l,r-l+1);
		//cout << t << endl;
		for(int j=0;j<t.size();j++){
			s[l+j]=t[t.size()-j-1];
		}
	}
	cout << s << endl;
}
