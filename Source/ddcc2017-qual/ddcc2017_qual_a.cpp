#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;







int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>s;
	if(s[0]==s[1]&&s[0]!=s[2]&&s[2]==s[3])cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
