#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	string s;
	cin >> s;

	for(int i=0;i<s.size();i++){
		string k=s.substr(0,s.size()-i-1);
		if(k.size()%2==1)continue;
		else {
			if(k.substr(0,k.size()/2)==k.substr(k.size()/2,k.size()/2)){
				cout << k.size() << endl;
				return 0;
			}
		}
	}

	
}
