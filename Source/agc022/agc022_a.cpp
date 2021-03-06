#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
using namespace std;
 
#ifdef LOCAL
	#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
	#define eprintf(...) 42
#endif
 
typedef long long ll;
typedef pair<int, int> pii;
#define mp make_pair
 
const int A = 26;
bool used[A];
 
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
 
	string s;
	cin >> s;
	for (char c : s)
		used[c - 'a'] = 1;
	if (s.length() < A) {
		cout << s;
		for (char c = 'a';; c++) {
			if (!used[c - 'a']) {
				cout << c << endl;
				return 0;
			}
		}
	}
 
	for (int i = s.length() - 2; i >= 0; i--) {
		used[s[i + 1] - 'a'] = 0;
		for (int x = 0; x < A; x++) {
			if (used[x]) continue;
			if ('a' + x > s[i]) {
				cout << s.substr(0, i) << (char)('a' + x) << endl;
				return 0;
			}
		}
	}
	cout << -1 << endl;
 
	return 0;
}
