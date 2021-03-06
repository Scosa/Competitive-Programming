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
class control{
  public:
  int nowx;
  int nowy;
  int cnt;
};

int main(){
  int h,w;
  bool use[3][501][501];

  PII s,g;
  char dp[501][501];
  cin >> h >> w;
  REP(k,3)REP(i,h)REP(j,w) use[k][i][j]=false;
  REP(i,h)REP(j,w) {
    cin >> dp[i][j] ;
    if(dp[i][j]=='s') {
      s.first = i;
      s.second = j;
      use[0][i][j] = true;
    }
    else {
      if (dp[i][j]=='g'){
      g.first = i;
      g.second = j;
      }
    }
    
  }

  control start;
  start.nowx = s.first;
  start.nowy = s.second;
  start.cnt = 0;
  queue<control> que;
  que.push(start);
  while(!que.empty()){
    control l = que.front();
    que.pop();
    if(l.nowx == g.first && l.nowy == g.second){
      cout << "YES" << endl;
      return 0;
    }
    REP(i,4){
      int a = l.nowx+dx[i];
      int b = l.nowy+dy[i];
      int c = l.cnt;
      if(0<=a && a<=h-1 && 0<=b && b<=w-1 && use[c][a][b]==false &&dp[a][b]!='#'){
        control f;
        f.nowx = a;
        f.nowy = b;
        f.cnt = l.cnt;
        use[c][a][b] = true;
        que.push(f);
      }
      else if(0<=a && a<=h-1 && 0<=b && b<=w-1 && l.cnt<2 && dp[a][b]=='#'&&use[c][a][b]==false){
        control f;
        f.nowx = a;
        f.nowy = b;
        f.cnt = l.cnt+1;
        que.push(f);
        use[c][a][b]=true;
      }
    }
  }
  cout << "NO" << endl;
}
