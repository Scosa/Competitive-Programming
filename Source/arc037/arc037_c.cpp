#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <string>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <map>
#include <set>
#include <iostream>
#include <sstream>
#include <cctype>
#define fi first
#define se second
#define rep(i,n) for(int i = 0; i < n; ++i)
#define rrep(i,n) for(int i = 1; i <= n; ++i)
#define drep(i,n) for(int i = n-1; i >= 0; --i)
#define gep(i,g,j) for(int i = g.head[j]; i != -1; i = g.e[i].next)
#define each(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();it++)
#define rng(a) a.begin(),a.end()
#define maxs(x,y) x = max(x,y)
#define mins(x,y) x = min(x,y)
#define pb push_back
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcount
#define snuke srand((unsigned)clock()+(unsigned)time(NULL));
using namespace std;
typedef long long int ll;
typedef pair<int,int> P;
typedef vector<int> vi;
inline int in() { int x; scanf("%d",&x); return x;}
inline void priv(vi& a) { rep(i,sz(a)) printf("%d%c",a[i],i==sz(a)-1?'\n':' ');}

const int MX = 100005, INF = 1000010000;
const ll LINF = 1000000000000000000ll;
const double eps = 1e-10;
const int di[] = {-1,0,1,0}, dj[] = {0,-1,0,1}; //^<v>

int n, k;
ll a[MX], b[MX];

ll f(ll x) {
  ll res = 0;
  rep(i,n) {
    ll d = x/a[i];
    int p = lower_bound(b,b+n,d+1)-b;
    res += p;
  }
  return res;
}

int main(){
  scanf("%d%d",&n,&k);
  rep(i,n) scanf("%lld",&a[i]);
  rep(i,n) scanf("%lld",&b[i]);
  sort(a,a+n);
  sort(b,b+n);
  ll l = -1, r = LINF, c;
  while (l+1<r) {
    c = (l+r)>>1;
    if (f(c) < k) l = c; else r = c;
  }
  cout << r << endl;
  return 0;
}





