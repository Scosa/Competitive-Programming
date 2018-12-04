#include <bits/stdc++.h>
using namespace std;


int w, v;
map<int, int> f[100];
int main() {
    int N, W;
    int cnt = 0;
    cin >> N >> W;
    f[0][0] = 0;
    for (int i = 0; i < N; i++) {
        cin >> w >> v;
        f[i+1] = f[i];
        for (pair<int, int> a: f[i]) {
            if (a.first + w <= W) {
                int k = max(a.second + v,f[i+1][a.first + w]);
                f[i+1][a.first+w] = k;
                if (k > cnt)
                    cnt = k;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}


