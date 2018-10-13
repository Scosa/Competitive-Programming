#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

#define rep(i, n) for(int i=0; i<(n);i++)

int main(){
    int n, k;
    int l[60];
    cin >> n >> k;
    rep(i, n) cin >> l[i];
    sort(l, l+n);
    int i;
    int ans = 0;
    for(i = n-1; i >= n - k; i--){
        ans = ans + l[i];
    }
    cout << ans << endl;
    return 0;
}
