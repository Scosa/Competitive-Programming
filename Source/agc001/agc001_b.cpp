#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a,long long b){
if(b==0)return a;
else return GCD(b,a%b);
}

typedef long long ll;

int main(){
	ll n,x;
	cin>>n>>x;
	cout<<3*(n-GCD(n,(n-x)))<<endl;
}
