#include <bits/stdc++.h>
using namespace std;
const int MAX_V=100100;
typedef long long ll;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int k;cin>>k;
    vector<ll> sum(n+1);
    sum[0]=0;
    for(int i=1;i<=n;i++) {
        int s;
        cin>>s;
        sum[i]=s+sum[i-1];
    }

    vector<ll> use;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            use.push_back(sum[j]-sum[i]);
        }
    }

   // for(int i=0;i<use.size();i++) cout<<use[i]<<endl;

    vector<ll> ans=use;
    int cnt=0;
  for(ll i=40;i>=0;i--){
      vector<ll> V;
      cnt++;
      for(ll j=0;j<ans.size();j++){
        //  cout<<ans[j]<<' ';
          if((ll)ans[j]&(ll)((ll)1<<i)) V.push_back(ans[j]);
      }
     // for(int i=0;i<V.size();i++)cout<<V[i]<<' '; 
     // cout<<endl;
      if(k<V.size()) {
          ans.clear();
          ans=V;
      }
      else if(V.size()==k){
          ans.clear();
          ans=V;
          break;
      }
      V.clear();
  }
  //cout<<cnt<<endl;
  ll anss=2199023255552-1;
  //sort(ans.begin(),ans.end(),greater<ll> ());
  for(int i=0;i<k;i++){
   // cout<<ans[i];
      anss=(anss&ans[i]);
      //cout<<anss<<endl;
  }

    cout<<anss<<endl;
}

