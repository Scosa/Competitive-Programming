#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	bool ok=false;
	int use;
	for(int i=1;i*i<n*2;i++){
		if(i*(i+1)==n*2){use=i;ok=true;}
	}
	if(!ok){cout<<"No"<<endl;return 0;}
	else cout<<"Yes"<<endl;
	cout<<use+1<<endl;

	vector<vector<int> >vec(use+2);
	int a=use;
	int cnt=1;
	int cnt2=1;
	//cout<<use<<endl;
	
	while(true){
		for(int i=1;i<=use;i++){
		//	cout<<cnt2<<endl;
			vec[cnt2].push_back(cnt);
			vec[cnt2+i].push_back(cnt);
			cnt++;
		//	cout<<cnt<<endl;
		}
		
		if(use==1)break;
		cnt2++;
		use--;
	}
	for(int i=1;i<=a+1;i++){
		cout<<vec[i].size();
		for(int j=0;j<vec[i].size();j++){
			cout<<' '<<vec[i][j];
		}
		cout<<endl;
	}

}

