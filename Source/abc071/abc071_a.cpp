#include <bits/stdc++.h>
using namespace std;
const int MAX_V=100100;
typedef long long ll;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
   
   int x, a,b;
   cin>>x>>a>>b;
   if(abs(a-x)<=abs(b-x))cout<<"A"<<endl;
   else cout<<"B"<<endl;
}

