#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	set<int> st;int cnt=0;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		if(1<=k&&k<400) st.insert(1);
		if(400<=k&&k<800) st.insert(2);
		if(800<=k&&k<1200) st.insert(3);
		if(1200<=k&&k<1600) st.insert(4);
		if(1600<=k&&k<2000) st.insert(5);
		if(2000<=k&&k<2400) st.insert(6);
		if(2400<=k&&k<2800) st.insert(7);
		if(2800<=k&&k<3200)st.insert(8);
		if(3200<=k) cnt++;
	}
	if(!st.size())cout<<1<<' '<<cnt<<endl;
	else cout<<st.size()<<' ' <<st.size()+cnt<<endl;
}
