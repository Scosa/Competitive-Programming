#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;







int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>s;
	stack<char> st;

	for(int i=0;i<s.size();i++){
		if(s[i]=='*'||s[i]=='/'||s[i]=='-'||s[i]=='+'){
			st.push(s[i]);
			continue;
		}
		else if(s[i]==')') st.pop();
		else if(s[i]==','){
			cout<<st.top();
			continue;
		}
		cout<<s[i];
	}
	cout<<endl;
}
