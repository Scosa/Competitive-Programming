#include <bits/stdc++.h>

using namespace std;

const int N = 1234567;

char st[N];
string s;

int main() {
  cin >> s;
  int n = s.length();
  int e = 0;
  for (int i = 0; i < n; i++) {
    if (e > 0 && st[e - 1] == 'S' && s[i] == 'T') {
      e--;
    } else {
      st[e++] = s[i];
    }
  }
	cout << e << endl;
  return 0;
}

