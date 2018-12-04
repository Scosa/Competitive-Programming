#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;





std::vector<ll> enum_div(ll n)//nの約数を列挙
{
	std::vector<ll> ret;
	for(int i=1 ; i*i<=n ; ++i)
	{
		if(n%i == 0)
		{
			ret.push_back(i);
			if(i!=1 && i*i!=n)
			{
				ret.push_back(n/i);
			}
		}
	}
	return ret;
}

int main()
{	ll n,m;
	cin >> n >> m;
	std::vector<ll> r = enum_div(m);
	sort(r.begin(),r.end());
	r.push_back(m);
	for(int i=0;i<r.size();i++){
		//cout << r[i] << endl;
		if(r[i]>=n){cout << m/r[i] << endl;return 0;}
	}
	return 0;
}
