#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod=1000000007;

const int MAX_N=100200;
class go{
	public:
	int t,x,y;
};




int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;cin>>n;
	vector<go> A(n+1);
	A[0].t=0;
	A[0].x=0;
	A[0].y=0;
	for(int i=1;i<=n;i++)cin>>A[i].t>>A[i].x>>A[i].y;
	
	for(int i=1;i<=n;i++){
		int use=abs(A[i].x-A[i-1].x)+abs(A[i].y-A[i-1].y);
		int time=A[i].t-A[i-1].t;
		if(use>time){
			cout<<"No"<<endl;
			return 0;
		}
		if((use-time)%2){
			cout<<"No"<<endl;
			return 0;
		}
	}

	cout<<"Yes"<<endl;
}
