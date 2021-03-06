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
typedef pair< int, int> PII;
 
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


int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}


int main(){
  LL h,w;
  cin >> h >> w;
  if(h%3==0||w%3==0){
    cout << 0 << endl;
    return 0;
  }
  LL ans = INF;
   
for(LL i=1;i<h;i++){
 
    LL A = w*i;
    LL B = ((h-i+1ll)/2ll)*w;
    LL C = ((h-i)/2ll)*w;
 
    ans=min(ans ,  max( A,max(B,C) )-min( A,min(B,C) ) );
}
  for(LL i =0;i<h+1;i++){
    LL a = i*w;
    LL b = (h-i)*(w/2LL);
    LL c = (h-i)*w-b;
    LL minm = min(a,min(b,c));
    LL maxx = max(a,max(b,c));
    ans = min(ans,maxx-minm);
  }
  swap(h,w);
  for(LL i=1;i<h;i++){
 
    LL A = w*i;
    LL B = ((h-i+1ll)/2ll)*w;
    LL C = ((h-i)/2ll)*w;
 
    ans=min(ans ,  max( A,max(B,C) )-min( A,min(B,C) ) );
}
  for(LL i =0;i<h+1;i++){
    LL a = i*w;
    LL b = (h-i)*(w/2LL);
    LL c = (h-i)*w-b;
    LL minm = min(a,min(b,c));
    LL maxx = max(a,max(b,c));
    ans = min(ans,maxx-minm);
  }
  cout << ans <<endl;

}
  

