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
  int n,m;
  int ans = 0;
  cin >> n >> m;
  int dp[9][9];
  memset(dp,-1,sizeof(dp));
  REP(i,m){
    int k,l;
    cin >> k >>l;
    dp[k][l] = 0;
    dp[l][k] = 0;
  }
  vector <int> v(8);
 REP(i,8){
   v[i] = i+1;
 }
  do{
    bool update = true;
    if(v[0] == 1){REP(i,n-1){
      if(dp[v[i]][v[i+1]] == -1) {
        update = false;
        break;
      }
    }
     if(update) ans++;
    }
  }while(next_permutation(v.begin(),v.begin()+n));
  cout << ans << endl;
}
