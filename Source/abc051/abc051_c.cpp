#include <bits/stdc++.h>
using namespace std;
const int MAX_V=100100;
typedef long long ll;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
   
   int sx,sy,tx,ty;
   cin>>sx>>sy>>tx>>ty;
   int use1=tx-sx;
   int use2=ty-sy;
   string ans;
   for(int i=0;i<use1;i++)ans.push_back('R');
   for(int i=0;i<use2;i++)ans.push_back('U');
   for(int i=0;i<use1;i++)ans.push_back('L');
   for(int i=0;i<use2;i++)ans.push_back('D');
   ans.push_back('D');
   for(int i=0;i<use1+1;i++)ans.push_back('R');
   for(int i=0;i<use2+1;i++)ans.push_back('U');
   ans.push_back('L');
   ans.push_back('U');
   for(int i=0;i<use1+1;i++)ans.push_back('L');
   for(int i=0;i<use2+1;i++)ans.push_back('D');
   ans.push_back('R');
   cout<<ans<<endl;
}

