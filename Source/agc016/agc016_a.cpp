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
typedef pair<LL, LL> PII;

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
const LL INF =10000000007;
const int inf = 10000007;
vector<int>vec(27);

   
int main(){
    string s;
    cin >> s;
    int n = (int)s.size();
  
    REP(i,n-1){
      if(s[i]!=s[i+1])break;
      if(i==n-2){cout << 0 << endl; return 0;}
    }
    bool use[27];
    REP(i,26)use[i]=false;
    REP(i,26){
      int flag = 0;
      REP(j,n){
      if(s[j]==(char)('a'+i)){if(flag!=0){vec[i]=max(vec[i],j-flag-1);flag = j;use[i]=true;}
      else {vec[i]=max(vec[i],j-flag);flag = j;use[i]=true;}}
      if(use[i]==true&&j==n-1)vec[i]=max(vec[i],n-1-flag);
    }
  }
    
    int ans = inf;
    REP(i,26){
      if(use[i]) ans = min(ans,vec[i]);
    }
    cout << ans <<endl;
}


