#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N=1000000;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int l,x,y,s,d;
	cin>>l>>x>>y>>s>>d;
	if(s==d){cout<<fixed<< std::setprecision(10)<<0<<endl;return 0;}

	if(d<s){
		int dis_A=s-d;
		int dis_B=l-dis_A;
		double time=(double)dis_B/(x+y);
		if(x>=y){cout<< fixed<<std::setprecision(10)<<time<<endl;return 0;}
		else{
			time=min(time,(double)dis_A/(y-x));
			cout<<fixed<< std::setprecision(10)<<time<<endl;return 0;
		}
	}
	else{
		int dis_A=d-s;
		int dis_B=l-dis_A;
		double time=(double)dis_A/(x+y);
		if(x>=y){cout<< fixed<<std::setprecision(10)<<time<<endl;return 0;}
		else{
			time=min(time,(double)dis_B/(y-x));
			cout<<fixed<< std::setprecision(10)<<time<<endl;return 0;
		}
	}
}
