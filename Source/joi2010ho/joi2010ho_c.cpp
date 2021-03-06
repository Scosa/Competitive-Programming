#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> T(1000010);



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<pair<int,int> > H(n+2);
    H[0].first=0;
    H[0].second=0;
    H[n+1].first=0;
    vector<int> H2(n+2);
    H2[0]=0;
    H2[n+1]=0;
    H[n+1].second=n+1;
    for(int i=1;i<=n;i++){cin>>H[i].first;H[i].second=i;H2[i]=H[i].first;}

    sort(H.begin(),H.end());

    for(int i=0;i<n;i++){
        pair<int,int> s=H[n+1-i];
        if(s.first==0)continue;
        int now=s.second;
        int left=s.second-1;
        int right=s.second+1;
        if(H2[left]!=0&&H2[left]<H2[now]){
            T[left]=max(T[left],T[now]+k-H2[now]);
        }
        if(H2[right]!=0&&H2[right]<H2[now]){
            T[right]=max(T[right],T[now]+k-H2[now]);
        }

    }
    int ans=0;
    for(int i=1;i<=n;i++){
        //cout<<T[i]<<endl;
        ans=max(ans,T[i]+k-H2[i]);
    }

    cout<<ans<<endl;

    
}
