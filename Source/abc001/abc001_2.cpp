#include <iostream>
#include <algorithm>

using namespace std;

int main(){
   long int a,ans;
    cin >> a;
    if (a < 100){
       cout << '0';
       ans = 0;
    } 
    else if (100 <= a && a < 1000) {
        cout << '0';
        ans = a / 100;
    }
    else if (1000 <= a && a <= 5000){
        ans = a/100;
    }
    else if (6000 <= a && a <= 30000) ans = a/1000 + 50;
    else if (35000 <= a && a <= 70000) ans = (a/1000 -30)/5 + 80;
    else ans = 89;

    cout << ans << "\n";
}
  
