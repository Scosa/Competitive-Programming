#include <bits/stdc++.h>
using namespace std;
#define int long long




signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int l, n;
  cin >> l >> n;
  vector<int> A(n), B(2 * n);
 

  for(int i = 0; i < n; i++) {
    cin >> A[i];
    if(i > 0){
      B[i] = A[i] - A[i - 1];
      B[n + i] = B[i];
    }
  }
  B[0] = A[0] + (l - A[n - 1]);
  B[n] = B[0];

  /*for(int i = 0; i < 2 * n; i++){
    cout << B[i] << ' ';
  }*/
  //cout << endl;
  int cnt2;
  int ans = 0;
  int right = n + 1;
  int left = n;
  cnt2 = A[0];
   for(int i = 0; i < n - 1; i++){
    if(i % 2 == 0) {
      if(i == n - 2) {
        int use = 0;
        for(int j = left; j <=right - 1; j++) {
          use += B[j];
        }
        //cout << use << endl;
        cnt2 += max(use, l - use);
      }
      else cnt2 += (n - 2 - i) * B[left];
      left--;
    }
    else {
      if(i == n - 2) {
        int use = 0;
        for(int j = left + 1; j <=right; j++) {
          use += B[j];
        }
        //cout << use << endl;
        cnt2 += max(use, l - use);
      }
      else cnt2 += (n - 2 - i) * B[right];
      right++;
    }
    //cout << left << ' ' << right << ' ' << cnt2 << endl;
  }
  ans = max(ans, cnt2);
  
  left = n;
  right = n + 1;
  cnt2 = A[0];
  for(int i = 0; i < n - 1; i++){
    if(i % 2 == 1) {
      if(i == n - 2) {
        int use = 0;
        for(int j = left; j <=right - 1; j++) {
          use += B[j];
        }
        //cout << use << endl;
        cnt2 += max(use, l - use);
      }
      else cnt2 += (n - 2 - i) * B[left];
      left--;
    }
    else {
      if(i == n - 2) {
        int use = 0;
        for(int j = left + 1; j <=right; j++) {
          use += B[j];
        }
        //cout << use << endl;
        cnt2 += max(use, l - use);
      }
      else cnt2 += (n - 2 - i) * B[right];
      right++;
    }
    //cout << left << ' ' << right << ' ' << cnt2 << endl;
  }
  ans = max(cnt2, ans);

  right = n;
  left = n - 1;
  cnt2 = l - A[n - 1];
   for(int i = 0; i < n - 1; i++){
    if(i % 2 == 0) {
      if(i == n - 2) {
        int use = 0;
        for(int j = left; j <=right - 1; j++) {
          use += B[j];
        }
        //cout << use << endl;
        cnt2 += max(use, l - use);
      }
      else cnt2 += (n - 2 - i) * B[left];
      left--;
    }
    else {
      if(i == n - 2) {
        int use = 0;
        for(int j = left + 1; j <=right; j++) {
          use += B[j];
        }
        //cout << use << endl;
        cnt2 += max(use, l - use);
      }
      else cnt2 += (n - 2 - i) * B[right];
      right++;
    }
    //cout << left << ' ' << right << ' ' << cnt2 << endl;
  }
  ans = max(ans, cnt2);
  
  left = n - 1;
  right = n;
  cnt2 = l - A[n - 1];
  for(int i = 0; i < n - 1; i++){
    if(i % 2 == 1) {
      if(i == n - 2) {
        int use = 0;
        for(int j = left; j <=right - 1; j++) {
          use += B[j];
        }
        //cout << use << endl;
        cnt2 += max(use, l - use);
      }
      else cnt2 += (n - 2 - i) * B[left];
      left--;
    }
    else {
      if(i == n - 2) {
        int use = 0;
        for(int j = left + 1; j <=right; j++) {
          use += B[j];
        }
        //cout << use << endl;
        cnt2 += max(use, l - use);
      }
      else cnt2 += (n - 2 - i) * B[right];
      right++;
    }
    //cout << left << ' ' << right << ' ' << cnt2 << endl;
  }
  ans = max(cnt2, ans);
  cout << ans << endl;
}