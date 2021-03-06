//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef long long LL;
typedef pair<int, int> PII;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const LL INF =1000000000007;
const int inf = 10000007;
LL f(LL b,LL n){
  if(n<b) return n;
  else return f(b,n/b)+(n%b);
}

int main(){
  int n,m;
  cin >> n >> m;
  LL x,y;
  cin >> x >> y;
  vector<LL> A(n);
  vector<LL> B(m);
  REP(i,n)cin >> A[i];
  REP(i,m)cin >> B[i];
  LL ntime = 0;
  char flag = 'A';
  LL ans =0;
  while(true){
    if(flag =='A'&&lower_bound(ALL(A),ntime)== A.end())break;
    else if(flag=='A'){ntime+=x+*lower_bound(ALL(A),ntime)-ntime;flag = 'B';}
    if(flag =='B'&&lower_bound(ALL(B),ntime)== B.end())break;
    else if(flag=='B'){ntime+=y+*lower_bound(ALL(B),ntime)-ntime;flag='A';}
    ans++;
  }
  cout << ans << endl;
}

