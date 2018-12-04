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
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};


int main(){
	int n, k;
	string s;
	cin >> n >> k >> s;
 
	string t(n, '_');
	for(int i = 0; i < n; ++i)
	for(char c = 'a'; ; ++c){
		t[i] = c;
		int lack[26] = {};
		int wr = n;
		for(int j = 0; j <= i; ++j){
			if(s[j] == t[j]){
				--wr;
			}
			else{
				--lack[s[j] - 'a'];
				++lack[t[j] - 'a'];
			}
		}
		for(int j = i + 1; j < n; ++j){
			if(lack[s[j] - 'a'] > 0){
				--lack[s[j] - 'a'];
			}
			else{
				--wr;
			}
		}
		
		if(wr <= k && *max_element(lack, lack + 26) <= 0){
			break;
		}
	}
	cout << t << endl;
}
