#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> vec;
int n;
int cnt;
void count2(int l,int r,vector<int> c){
	if(l<0||n<=r)return;
	int right=r;
	int left=l;
	if(c[r]!=c[l])return;
	for(int i=r;i<n-1;i++){
		if(c[i]!=c[i+1]) break;
		else right=i+1;
	}
	for(int j=l;j>0;j--){
		if(c[j]!=c[j-1])break;
		else left=j-1;
	}
	//cout<<right<<" "<<left<<endl;
	if((right-r+1)+(l-left+1)>=4){
		cnt+=(right-r+1)+(l-left+1);
		//c.erase(c.begin()+left,c.begin()+right);
		count2(left-1,right+1,c);
	}
}

void count(int s,int t,vector<int> co){
	co[s]=t;
	int right=s;
	int left=s;
	for(int i=s;i<n-1;i++){
		if(co[i]!=co[i+1]) break;
		else right=i+1;
	}
	for(int j=s;j>0;j--){
		if(co[j]!=co[j-1])break;
		else left=j-1;
	}
	//cout<<left<<' '<<right<<endl;;
	if(right-left+1>=4){
		cnt+=right-left+1;
		//co.erase(co.begin()+left,co.begin()+right);
		count2(left-1,right+1,co);
	}
} 


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);


	cin>>n;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		vec.push_back(k);
	}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=1;j<4;j++){
			cnt=0;
			count(i,j,vec);
			ans=max(ans,cnt);
		}
	}

	//count(5,2,vec);

	cout<<n-ans<<endl;


	 
}
