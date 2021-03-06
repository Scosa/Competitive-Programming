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
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

#define MP        make_pair
 
const LL INF = 10000000007;
const int inf = 100000000;
int ans;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};



int main(){
  int a,b,c,d,e,f;
  cin >> a >> b >> c >> d >> e >>f;
  a *= 100;
  b*= 100;
  vector<PII> vec;
  REP(i,(f+a-1)/a+1)REP(j,(f-a*i+b-1)/b+1){
    if(i == 0&&j==0)continue;
    if(a * i + b * j > f)continue;
    int water = a * i + b * j;
    int lest = f - water;
    int k =e* water/100;
    //cout << water << " " << lest << " " << k << endl;
    REP(m,(lest+c-1)/c+1)REP(l,(lest-c*m+d-1)/d+1) {
      int solt = c*m+d*l ;
      if(solt <= lest &&solt <= k ) 
      vec.push_back(MP(water,solt));
    }
  }
  double ans = 0;
  PII ans2;
  REP(i,vec.size()){
    //cout << vec[i].first << " " << vec[i].second << endl;
    double p = (double)vec[i].second*100/(vec[i].first+vec[i].second);
    if(ans <= p){
      ans = p;
      ans2.first = vec[i].first;
      ans2.second = vec[i].second;
    }
  }
  cout << ans2.first+ans2.second << " " << ans2.second << endl;
}
