#include <bits/stdc++.h>
using namespace std;
const long long md=1000000007;
vector<int> vec(1001);

bool is_prime(int n){//素数判定
	for(int i=1;i*i<=n;i++)if(n%i==0)return false;
	return true;
}

vector<int> divisor(int n){//約数列挙
	vector<int> res;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			res.push_back(i);
			if(i!=n/i)res.push_back(n/i);
		}
	}
	sort(res.begin(),res.end());
	return res;
}

map<int,int> prime_factor(int n){
	map<int,int> res;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			++res[i];
			n/=i;
		}
	}
	if(n!=1)res[n]=1;
	return res;
}

int main(){
	int a;
	cin>>a;
	
	for(int i=1;i<=a;i++){
		map<int,int> use=prime_factor(i);
		for(auto i:use){
			vec[i.first]+=i.second;
		}
	}
	long long ans=1;
	for(int i=1;i<=a;i++){
		int use=vec[i]+1;
		ans*=use%md;
		ans%=md;
	}
	cout<<ans<<endl;
}
