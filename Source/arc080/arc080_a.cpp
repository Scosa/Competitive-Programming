#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1000000007;
typedef long long ll;
int cnt[502];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];

	int cnt_4=0;
	int cnt_2=0;
	for(int i=0;i<n;i++){
		if(A[i]%4==0) cnt_4++;
		else if(A[i]%2==0) cnt_2++;
	}
	//cout<<cnt_4<<' '<<cnt_2<<endl;

	if(cnt_4>=n/2){
		cout<<"Yes"<<endl;
		return 0;
	}

	if(cnt_4*2+cnt_2>=n){
		cout<<"Yes"<<endl;
		return 0;
	}

	cout<<"No"<<endl;
}
