#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=1<<30;
int dp[42][402][402];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin>>s;
	if(s.size()%2==0&&s[0]==s[s.size()-1]){
		cout<<"First"<<endl;
	}
	else if(s.size()%2==0&&s[0]!=s[s.size()-1]){
		cout<<"Second"<<endl;
	}
	else if(s.size()%2==1&&s[0]!=s[s.size()-1]){
		cout<<"First"<<endl;
	}
	else {
		cout<<"Second"<<endl;
	}
}
