#include <bits/stdc++.h>
using namespace std;
int s_alph[26];
int t_alph[26];
	vector<int> vec(26);
	vector<int> vec2(26);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	string s,t;
	cin >> s >> t;

	//set
	for(int i = 0;i<s.size();i++){
		for(int j=0;j<26;j++){
			if(s[i]=='a'+j) vec[j]++;
			if(t[i]=='a'+j) vec2[j]++;
		}
	}
	/*vector<int> vec(26);
	vector<int> vec2(26);*/

	/*for(int i=0;i<26;i++){
		vec[i]=s_alph[i];
		vec2[i]=t_alph[i];
	}*/
	sort(vec.begin(),vec.end());
	sort(vec2.begin(),vec2.end());

	bool check=true;

	for(int i=0;i<26;i++){
		if(vec[i]!=vec2[i])check=false;
	}

	if(check) cout << "Yes" << endl;
	else cout << "No" << endl;
}

