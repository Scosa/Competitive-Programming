#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=10000000000000;
typedef long long ll;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
string use(int a){
	string res="";
	int cnt=0;
	int s=a;
	//cout<<s<<endl;
	while(s>0){
		s/=10;
		cnt++;
	}
//	cout<<cnt<<endl;
	for(int i=0;i<(6-cnt);i++){
		res.push_back('0');
	}
	res+=toString(a);
	return res;
}
vector<string> ans2(100020);


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n,m;
	cin>>n>>m;
	vector<vector< pair<ll,ll> > > vec(n+1);
	for(int i=0;i<m;i++){
		int k,l;
		cin>>k>>l;
		pair<ll,ll>s;
		s.first=l;s.second=i;
		vec[k].push_back(s);
	}
	for(int i=1;i<=n;i++){
		sort(vec[i].begin(),vec[i].end());
	}

	for(int i=1;i<=n;i++){
		for(int j=0;j<vec[i].size();j++){
			string ans=use(i)+use(j+1);
			ans2[vec[i][j].second]=ans;
		}
	}
	for(int i=0;i<m;i++){
		cout<<ans2[i]<<endl;
	}
//	cout<<use(50)<<endl;
}
