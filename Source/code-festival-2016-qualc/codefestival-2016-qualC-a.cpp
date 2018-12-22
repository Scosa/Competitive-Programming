#include <bits/stdc++.h>
using namespace std;

int main(){
      string s;
      cin >> s;
      bool ok1 = false;
      bool ok2 = false;
      for(int i = 0; i < s.size(); i++){
            if(s[i] == 'C') ok1 = true;
            if(ok1 && s[i] == 'O') ok2 = true;
      }
      if(ok2) cout << "YES" << endl;
      else cout << "NO" << endl;
}