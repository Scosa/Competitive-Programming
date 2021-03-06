#include <bits/stdc++.h>
using namespace std;
int mod=100000;
typedef long long ll;
int J[1001][1001];
int O[1001][1001];
int I[1001][1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    int h,w,n;
    cin>>h>>w>>n;
    vector<string> vec(h+1);
    for(int i=0;i<w+1;i++)vec[0].push_back('0');

    for(int i=0;i<h;i++){
        cin>>vec[i];
    }
    for(int i=1;i<=w;i++){
        if(i>0)J[1][i]+=J[1][i-1];
        if(i>0)I[1][i]+=I[1][i-1];
        if(i>0)O[1][i]+=O[1][i-1];
        if(vec[0][i-1]=='J'){J[1][i]++;}
        if(vec[0][i-1]=='O'){O[1][i]++;}
        if(vec[0][i-1]=='I'){I[1][i]++;}
    }
     if(vec[0][0]=='J')J[1][1]--;
     if(vec[0][0]=='O')O[1][1]--;
     if(vec[0][0]=='I')I[1][1]--;
    for(int i=1;i<=h;i++){
        if(i>0)J[i][1]+=J[i-1][1];
        if(i>0)I[i][1]+=I[i-1][1];
        if(i>0)O[i][1]+=O[i-1][1];
        if(vec[i-1][0]=='J'){J[i][1]++;}
        if(vec[i-1][0]=='O'){O[i][1]++;}
        if(vec[i-1][0]=='I'){I[i][1]++;}
    }

    for(int i=2;i<=h;i++){
        for(int j=2;j<=w;j++){
            J[i][j]=J[i][j-1]+J[i-1][j]-J[i-1][j-1];
            O[i][j]=O[i][j-1]+O[i-1][j]-O[i-1][j-1];
            I[i][j]=I[i][j-1]+I[i-1][j]-I[i-1][j-1];
            if(vec[i-1][j-1]=='J')J[i][j]++;
            if(vec[i-1][j-1]=='O')O[i][j]++;
            if(vec[i-1][j-1]=='I')I[i][j]++;
        }
    }
   
    

    for(int i=0;i<n;i++){
        int k,l,s,t;
        cin>>k>>l>>s>>t;
        k--;l--;
        cout<<J[s][t]-(J[k][t]+J[s][l]-J[k][l])<<" ";
        cout<<O[s][t]-(O[k][t]+O[s][l]-O[k][l])<<" ";
        cout<<I[s][t]-(I[k][t]+I[s][l]-I[k][l])<<endl;
    }


}
