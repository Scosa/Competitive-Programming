#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a,b;
	cin>>a>>b;
	if(a>0&&b>0)cout<<abs(a-b)<<endl;
	else if(a<0&&b<0)cout<<abs(a-b)<<endl;
	else{
		cout<<abs(a-b)-1<<endl;
	}

}
