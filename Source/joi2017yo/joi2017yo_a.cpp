#include<iostream>
using namespace std;
 
 int main(){
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  int ans=0;
  if(a<0)ans+=d;
  ans+=max(0,0-a)*c;
  ans+=min(b-a,b-0)*e;
  cout<<ans<<endl;
}

