#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;
typedef long long ll;





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin>>s;
	
	int cnt_A=0;
	int cnt_B=0;
	int cnt_C=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='a')cnt_A++;
		if(s[i]=='b')cnt_B++;
		if(s[i]=='c')cnt_C++;
	}
	vector<int> V;
	V.push_back(cnt_A);
	V.push_back(cnt_B);
	V.push_back(cnt_C);
	sort(V.begin(),V.end());
	
	if(V[2]-V[1]==1&&V[1]==V[0])cout<<"YES"<<endl;
	else if(V[1]-V[0]==1&&V[1]==V[2])cout<<"YES"<<endl;
	else if(V[0]==V[1]&&V[1]==V[2])cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
