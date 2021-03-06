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
const int inf = 100000000;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int h,w;
 
 
 
int main(){
  char dp[51][51];
  int dis[51][51];
  int x,y;
  int cnt = 0;
  cin >> h >> w;
  REP(i,h)REP(j,w){
    cin >> dp[i][j];
    if(dp[i][j]=='.') ++cnt;
  }
  REP(i,h)REP(j,w){
	dis[i][j]=inf;
  }
   dis[0][0] = 0;
  queue<PII> que;
  que.push(PII(0,0));
  while(que.size()){
    PII s = que.front();
    que.pop();
    x = s.first;
    y = s.second;
    if(x==h-1 && y==w-1) {
      cout <<  cnt - dis[x][y] -1 << endl;
      return 0;
    }
    REP(i,4){
    int s = x+dx[i];
    int t = y+dy[i];
    if(0<=s && s<=h-1 && 0<=t && t<=w-1 && dp[s][t]!='#' && dis[s][t]==inf){
      que.push(PII(s,t));
      dis[s][t] = dis[x][y]+1;
    }
    } 
  }
  cout << "-1" << endl;
  return 0;
}
