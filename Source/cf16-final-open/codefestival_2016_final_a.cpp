#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;
typedef long long ll;




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int h,w;
	cin>>h>>w;
	int a,b;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			string s;
			cin>>s;
			if(s=="snuke"){
				a=i;b=j;
			}
		}
	}

	cout<<(char)('A'+b)<<a+1<<endl;
}
