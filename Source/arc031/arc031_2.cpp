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

using namespace std;

int main(){
  int cnt = 0;
  int n = 10;
  char dp[11][11];
  REP(i,n)REP(j,n){
    cin >> dp[i][j];
    if(dp[i][j]== 'o')cnt++;
  }

  REP(i,n)REP(j,n){
    if(dp[i][j] == 'x'){
      bool use[11][11];
      REP(e,11)REP(r,11){
        use[e][r] = false;
      }
      use[i][j]=true;
      stack <PII> que;
      PII s;
      s.first = i;
      s.second = j;
      que.push(s);
      int now = 0;
      while(!que.empty()){
        PII l;
        l = que.top();
        que.pop();
        int x,y;
        x=l.first;
        y=l.second;
        REP(k,4){
          int a = x + dx[k];
          int b = y + dy[k];
          if(0<=a&&a<=10&&0<=b&&b<=10&&dp[a][b]=='o'&&use[a][b]==false){
            PII h;
            h.first = a;
            h.second = b;
            que.push(h);
            use[a][b]=true;
            now++;
          }
        }
      }
      if(now == cnt){
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
}
