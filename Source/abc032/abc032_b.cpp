#define _USE_MATH_DEFINES
#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<ll, int> ll_i;
typedef pair<double, int> d_i;
typedef pair<ll, ll> ll_ll;
typedef pair<double, double> d_d;
struct edge { int u, v; ll w; };

int INF = INT_MAX / 2;
ll MOD = 1234576891234601LL;
ll _MOD = 1000000009;
double EPS = 1e-10;

int main() {
	string s; cin >> s;
	int k; cin >> k;
	set<string> st;
	for (int i = 0; i + k <= s.length(); i++)
		st.insert(s.substr(i, k));
	cout << st.size() << endl;
}

