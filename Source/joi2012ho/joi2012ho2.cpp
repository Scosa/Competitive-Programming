#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > cnt(1010);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    for(int i = 0; i < a; i++){
        int k;
        cin >> k;
        cnt[k].push_back(i);
    }
    vector<int> B(b);
    int ans = 0;
    for(int i = 0; i < b; i++) cin >> B[i];

    for(int i = 0; i < b; i++){
        vector<vector<int> > use = cnt;
        int counter = 0;
        int check = -1;
        for(int j = i; j < b; j++) {
            if(use[B[j]].empty()) break;
            bool ok = true;
            for(int k = 0; k < use[B[j]].size(); k++) {
                int s;
                s = use[B[j]][k];
           //     cout << s << ' ';
                if(s > check) {
                    use[B[j]].erase(use[B[j]].begin(),use[B[j]].begin() + k + 1);
                    check = s;
                    break;
                }
                if(k == use[B[j]].size() - 1) ok = false;
            }
         //   cout << endl;
            //cout << check << ' ';
            if(!ok) break;
            
            counter++;
        }
         //cout << counter << endl;;
        //cout << endl;
        ans = max(ans, counter);
        //cout << endl;
    }
    cout << ans << endl;
}
