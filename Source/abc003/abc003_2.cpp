#include<vector>
#include<cmath>
#include<map>
#include<cstdlib>
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<set>
#include<stack>
#include<bitset>
#include<functional>
#include<ctime>
#include<queue>
#include<deque>
#include<complex>
using namespace std;
#define pb push_back
#define pf push_front
typedef long long lint;
typedef complex<double> P;
#define mp make_pair
#define fi first
#define se second
typedef pair<int,int> pint;
#define All(s) s.begin(),s.end()
#define rAll(s) s.rbegin(),s.rend()
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
string s="atcoder";
bool ok(char a){
		rep(i,7){if(a==s[i]) return true;}return false;
}
int main()
{
	string a,b;cin>>a;cin>>b;int f=0,n=a.size();
	rep(i,n){
		if(a[i]!=b[i]){
			if(a[i]!='@' && b[i]!='@') f=1;
			if(a[i]!='@' && !ok(a[i])) f=1;
			if(b[i]!='@' && !ok(b[i])) f=1;
		}
	}
	if(f<1) cout<<"You can win"<<endl;else cout<<"You will lose"<<endl;
}

