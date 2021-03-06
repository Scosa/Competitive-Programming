#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> memo_A(300100);
vector<ll> memo_B(300100);


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	vector<ll> A(3*n);
	priority_queue<int> back;
	priority_queue<int,vector<int> ,greater<int> > front;
	ll sum_A=0;
	ll sum_B=0;
	for(int i=0;i<3*n;i++){
		cin>>A[i];
		if(i<n){
			front.push(A[i]);
			sum_A+=A[i];
		}
		else if(i>=2*n){
			back.push(A[i]);
			sum_B+=A[i];
		}
	}
	memo_A[n-1]=sum_A;
	memo_B[2*n]=sum_B;

	for(int i=n;i<2*n;i++){
		front.push(A[i]);
		sum_A+=A[i];
		int use=front.top();
		sum_A-=use;
		front.pop();
		memo_A[i]=sum_A;
	}
	for(int i=2*n-1;i>=n;i--){
		back.push(A[i]);
		sum_B+=A[i];
		int use=back.top();
		sum_B-=use;
		back.pop();
		memo_B[i]=sum_B;
	}
	ll ans=10000000000000000;
	ans=-ans;
	for(int i=n-1;i<2*n;i++){
		//cout<<memo_A[i]<<' '<<memo_B[i+1]<<endl;
		ans=max(ans,memo_A[i]-memo_B[i+1]);
	}
	cout<<ans<<endl;

}
