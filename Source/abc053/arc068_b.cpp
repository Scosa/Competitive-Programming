#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    unordered_map<long long ,int> mp;
    for(int i=0;i<n;i++){
        long long k;
        cin>>k;
        mp[k]++;
    }
    int ans=0;
    int count=0;
    for(auto i:mp){
        count+=i.second-1;
    }


    ans+=(count+1)/2;

    cout<<n-ans*2<<endl;

}
