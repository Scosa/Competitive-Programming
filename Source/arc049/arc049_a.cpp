#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s;int a,b,c,d;
	cin>>s>>a>>b>>c>>d;

	s.insert(s.begin()+a,'"');
	s.insert(s.begin()+b+1,'"');
	s.insert(s.begin()+c+2,'"');
	s.insert(s.begin()+d+3,'"');

	cout<<s<<endl;

}
