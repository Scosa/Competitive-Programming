#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt[100011];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];
	
	int left=0;
	int ans=0;
	for(int i=0;i<n;i++){
		if(cnt[A[i]]==0)cnt[A[i]]++;
		else{
			cnt[A[i]]++;
			while(cnt[A[i]]==2){
				cnt[A[left]]--;
				left++;
			}
		}
		ans=max(ans,i-left+1);
	}

	cout<<ans<<endl;

}
