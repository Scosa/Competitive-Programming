#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,a,b;
	cin>>n>>a>>b;
	string s;
	cin>>s;

	int cnt_A=0;
	int cnt_B=0;

	for(int i=0;i<n;i++){
		if(s[i]=='c')cout<<"No"<<endl;
		else if(s[i]=='a'){
			if(cnt_A+cnt_B<a+b)cnt_A++,cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		else{
			if(cnt_B+cnt_A<a+b&&cnt_B<b)cnt_B++,cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	//	cout<<cnt_A<<' '<<cnt_B<<endl;
		
	}

}

