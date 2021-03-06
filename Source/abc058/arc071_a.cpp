#include <bits/stdc++.h>
using namespace std;
bool use[27];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	map<char,int> mp;
	for(int i=0;i<27;i++)use[i]=true;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(!i) {
			for(int j=0;j<s.size();j++) mp[s[j]]++;
			for(int j=0;j<26;j++) if(!mp['a'+j]) use[j]=false;
		}
		else {
			map<char,int> mp2;
			for(int j=0;j<s.size();j++)mp2[s[j]]++;
			for(auto t:mp2){
				mp[t.first]=min(mp[t.first],t.second);
			}
			for(int j=0;j<26;j++) if(!mp2['a'+j]) use[j]=false; 
		}
	}
	for(auto i:mp){
		if(use[i.first-'a'])for(int j=0;j<i.second;j++) cout<<i.first;
	}
	cout<<endl;
}
