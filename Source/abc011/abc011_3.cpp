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
typedef long long LL;
typedef pair< LL, LL> PII;
 
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
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
 
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

#define MP        make_pair
 
const LL INF = 10000000007;
const int inf = 100000000;

int dx[4] = {1,0};
int dy[4] = {0,1};
int ng1;
int ng2;
int ng3;
int cnt;


bool dp[301][101];


int main(){
  int n;
  cin >> n >> ng1 >> ng2 >>ng3;
  if(n==ng1||n==ng2||n==ng3) {cout << "NO" <<endl;return 0;}
  FOR(i,0,4)FOR(j,1,101)dp[i][j]=true;
  FOR(i,4,n+1)FOR(j,1,101){
    if(i==ng1||i==ng2||i==ng3)continue;
    if(dp[i-1][j-1]==true) {dp[i][j] = true;continue;}
    else if(dp[i-2][j-1] == true) {dp[i][j]=true;continue;}
    else if(dp[i-3][j-1] == true) {dp[i][j]=true;continue;}
  } 
  if(dp[n][100]) cout << "YES" << endl;
  else cout << "NO" << endl;
}

