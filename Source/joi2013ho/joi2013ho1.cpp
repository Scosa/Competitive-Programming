#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


vector<int> Vans;
int cnt;
int memo=2;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(memo==a){
            Vans.push_back(cnt);
            cnt=0;
        }
        memo=a;
        cnt++;
    }
    Vans.push_back(cnt);

    int ans=0;
    if(Vans.size()==1){cout<<Vans[0]<<endl;return 0;}
    if(Vans.size()==2){cout<<Vans[0]+Vans[1]<<endl;return 0;}
    for(int i=0;i<Vans.size()-2;i++){
        ans=max(ans,Vans[i]+Vans[i+1]+Vans[i+2]);
    }

    cout<<ans<<endl;

   

    
}
