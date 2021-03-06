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
#include <queue>
 
 
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
typedef pair<int, int> PII;
typedef long long LL;
 
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
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl
 
const LL INF = 10000000007;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
class sett{
  public:
  int nowx;
  int nowy;
  int dis;
};

int main(){
  sett start;
  int gx,gy,h,w;
  char dp[51][51];
  int n,m,s,t;
  cin >>h>>w>> n >> m >> s >> t;
  start.nowx=n-1;
  start.nowy = m-1;
  start.dis = 0;
  gx = s-1;
  gy = t-1;
  REP(i,h)REP(j,w){
    cin >> dp[i][j];
  }
  int use[51][51];
  memset(use,-1,sizeof(use));
  use[start.nowx][start.nowy] = 0;
  queue<sett> que;
  que.push(start);
  while(!que.empty()){
    sett k = que.front();
    que.pop();
    if(k.nowx == gx&&k.nowy == gy) {
      cout << k.dis << endl;
      return 0;
    }
    REP(i,4){
      sett a;
      a.nowx = k.nowx + dx[i];
      a.nowy = k.nowy + dy[i];
      if(dp[a.nowx][a.nowy] == '.' && use[a.nowx][a.nowy] == -1){
        a.dis = k.dis+1;
        que.push(a);
        use[a.nowx][a.nowy] = 0;
      }
    }
  }
}
