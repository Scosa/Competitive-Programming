#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int k;
	cin>>k;ll ans1=0;ll ans2=0;
	for(int i=0;i<=200-k;i+=k){
		for(int j=0;j<=200-k;j+=k){
			int use1=(100-i)*(100-i)+(100-j)*(100-j);
			int use2=(100-(i+k))*(100-(i+k))+(100-j)*(100-j);
			int use3=(100-i)*(100-i)+(100-(j+k))*(100-(j+k));
			int use4=(100-(i+k))*(100-(i+k))+(100-(j+k))*(100-(j+k));
			//cout<<use1<<endl;
			if(use1<=10000&&use2<=10000&&use3<=10000&&use4<=10000)ans1++;
		}
	}
	cout<<ans1<<' ';
	for(int i=0;i<=300-k;i+=k){
		for(int j=0;j<=300-k;j+=k){
			int use1=(150-i)*(150-i)+(150-j)*(150-j);
			int use2=(150-(i+k))*(150-(i+k))+(150-j)*(150-j);
			int use3=(150-i)*(150-i)+(150-(j+k))*(150-(j+k));
			int use4=(150-(i+k))*(150-(i+k))+(150-(j+k))*(150-(j+k));
			//cout<<use1<<endl;
			if(use1<=22500&&use2<=22500&&use3<=22500&&use4<=22500)ans2++;
		}
	}
	cout<<ans2<<endl;
}
