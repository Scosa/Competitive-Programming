#include <iostream>
#include <algorithm>


using namespace std;

int main(){
   long long int a,ans,ave;
   ans = 0;
    cin >> a;
    for (int i = 1;i <= a;i++) ans += 10000*i;
    cout << ans/a << "\n";
}
  
