#include <bits/stdc++.h>
using namespace std;
const int MAX_V=100100;
typedef long long ll;
const ll inf=1010101010100101010;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> A(n);
    int sum=0;
    for(int i=0;i<n;i++)cin>>A[i],sum+=A[i];

    double ave=(double)sum/n;
    int ans=0;
    for(int i=0;i<n;i++){
        if((double)abs(A[ans]-ave)>(double)abs(A[i]-ave))ans=i;
    }

    cout<<ans<<endl;
}
