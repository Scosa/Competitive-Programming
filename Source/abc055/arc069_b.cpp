#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;string s;cin>>s;

	string ans="SS";
	for(int i=1;i<n;i++){
		if(s[i]=='o'&&ans[i]=='S')ans.push_back(ans[i-1]);
		else if(s[i]=='o'&&ans[i]=='W'){
			if(ans[i-1]=='S')ans.push_back('W');
			else ans.push_back('S');
		}
		else if(s[i]=='x'&&ans[i]=='W')ans.push_back(ans[i-1]);
		else {
			if(ans[i-1]=='S')ans.push_back('W');
			else ans.push_back('S');
		}
	}
	bool ok=true;
	if(s[0]=='o'&&ans[0]=='S') {if(ans[1]!=ans[n-1])ok=false;}
	else if(s[0]=='o'&&ans[0]=='W') {if(ans[1]==ans[n-1])ok=false;}
	else if(s[0]=='x'&&ans[0]=='W') {if(ans[1]!=ans[n-1])ok=false;}
	else if(ans[1]==ans[n-1])ok=false;

	if(ans[n]!=ans[0])ok=false;
	if(ok){
		for(int i=0;i<n;i++)cout<<ans[i];
		cout<<endl;
		return 0;
	}

	ans="WS";
	for(int i=1;i<n;i++){
		if(s[i]=='o'&&ans[i]=='S')ans.push_back(ans[i-1]);
		else if(s[i]=='o'&&ans[i]=='W'){
			if(ans[i-1]=='S')ans.push_back('W');
			else ans.push_back('S');
		}
		else if(s[i]=='x'&&ans[i]=='W')ans.push_back(ans[i-1]);
		else {
			if(ans[i-1]=='S')ans.push_back('W');
			else ans.push_back('S');
		}
	}
	 ok=true;
	if(s[0]=='o'&&ans[0]=='S') {if(ans[1]!=ans[n-1])ok=false;}
	else if(s[0]=='o'&&ans[0]=='W') {if(ans[1]==ans[n-1])ok=false;}
	else if(s[0]=='x'&&ans[0]=='W') {if(ans[1]!=ans[n-1])ok=false;}
	else if(ans[1]==ans[n-1])ok=false;

	if(ans[n]!=ans[0])ok=false;
	if(ok){
		for(int i=0;i<n;i++)cout<<ans[i];
		cout<<endl;
		return 0;
	}

	ans="SW";
	for(int i=1;i<n;i++){
		if(s[i]=='o'&&ans[i]=='S')ans.push_back(ans[i-1]);
		else if(s[i]=='o'&&ans[i]=='W'){
			if(ans[i-1]=='S')ans.push_back('W');
			else ans.push_back('S');
		}
		else if(s[i]=='x'&&ans[i]=='W')ans.push_back(ans[i-1]);
		else {
			if(ans[i-1]=='S')ans.push_back('W');
			else ans.push_back('S');
		}
	}
	ok=true;
	if(s[0]=='o'&&ans[0]=='S') {if(ans[1]!=ans[n-1])ok=false;}
	else if(s[0]=='o'&&ans[0]=='W') {if(ans[1]==ans[n-1])ok=false;}
	else if(s[0]=='x'&&ans[0]=='W') {if(ans[1]!=ans[n-1])ok=false;}
	else if(ans[1]==ans[n-1])ok=false;

	if(ans[n]!=ans[0])ok=false;
	if(ok){
		for(int i=0;i<n;i++)cout<<ans[i];
		cout<<endl;
		return 0;
	}

	ans="WW";
	for(int i=1;i<n;i++){
		if(s[i]=='o'&&ans[i]=='S')ans.push_back(ans[i-1]);
		else if(s[i]=='o'&&ans[i]=='W'){
			if(ans[i-1]=='S')ans.push_back('W');
			else ans.push_back('S');
		}
		else if(s[i]=='x'&&ans[i]=='W')ans.push_back(ans[i-1]);
		else {
			if(ans[i-1]=='S')ans.push_back('W');
			else ans.push_back('S');
		}
	}
	ok=true;
	if(s[0]=='o'&&ans[0]=='S') {if(ans[1]!=ans[n-1])ok=false;}
	else if(s[0]=='o'&&ans[0]=='W') {if(ans[1]==ans[n-1])ok=false;}
	else if(s[0]=='x'&&ans[0]=='W') {if(ans[1]!=ans[n-1])ok=false;}
	else if(ans[1]==ans[n-1])ok=false;

	if(ans[n]!=ans[0])ok=false;
	if(ok){
		for(int i=0;i<n;i++)cout<<ans[i];
		cout<<endl;
		return 0;
	}

		
	/*for(int i=1;i<n;i++){
		if(s[i]=='o'&&ans[i]=='W'){
			if(ans[i-1]!=ans[i+1]) {
				ok=false;break;
			}
		}
		else if(s[i]=='o'&&ans[i]=='S'){
			if(ans[i-1]==ans[i+1]){
				ok=false;break;
			}
		}
		else if(s[i]=='x'&&ans[i]=='S'){
			if(ans[i-1]==ans[i+1]){
				ok=false;break;
			}
		}
		else{
			if(ans[i-1]!=ans[i+1]) {
				ok=false;break;
			}
		}
	}*/
	cout<<-1<<endl;
}
