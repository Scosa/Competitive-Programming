#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll a,b,k;
	cin>>a>>b>>k;

	for(int i=0;i<k;i++){
		if(i%2==0){
			if(a%2==0){
				b+=a/2;
				a/=2;
			}
			else {
				a--;
				b+=a/2;
				a/=2;
			}
		}
		if(i%2==1){
			if(b%2==0){
				a+=b/2;
				b/=2;
			}
			else {
				b--;
				a+=b/2;
				b/=2;
			}
		}
	}
	cout<<a<<' '<<b<<' '<<endl;
}

