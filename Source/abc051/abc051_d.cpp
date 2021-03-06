#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int>vint;
typedef pair<int,int>pint;
typedef vector<pint>vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define pb push_back
#define fi first
#define se second
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}

int N,M;
int A[1111],B[1111],C[1111];

const int INF=1001001001001001001ll;
int D[111][111];

signed main(){
    cin>>N>>M;
    rep(i,M)cin>>A[i]>>B[i]>>C[i],A[i]--,B[i]--;


    fill_n(*D,111*111,INF);
    rep(i,N)D[i][i]=0;
    rep(i,M){
        chmin(D[A[i]][B[i]],C[i]);
        chmin(D[B[i]][A[i]],C[i]);
    }

    rep(k,N)rep(i,N)rep(j,N)chmin(D[i][j],D[i][k]+D[k][j]);


    int ans=0;
    rep(i,M){
        bool ok=true;
        rep(j,N)rep(k,N)if(D[j][A[i]]+C[i]+D[B[i]][k]==D[j][k]||D[j][B[i]]+C[i]+D[A[i]][k]==D[j][k])ok=false;
        if(ok)ans++;
    }
    cout<<ans<<endl;
    return 0;
}

