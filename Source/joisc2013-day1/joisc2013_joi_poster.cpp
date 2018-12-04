#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double EPS=0.000000000001;




int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,w,h;
    cin>>n>>w>>h;
    vector<int> X(n);
    vector<int> Y(n);
    for(int i=0;i<n;i++)cin>>X[i]>>Y[i];
    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i) continue;
            for(int k=0;k<n;k++){
                if(j==k||i==k) continue;
                for(int l=0;l<n;l++){
                    if(j==l||i==l||k==l) continue;
                    double dis_b=sqrt((X[i]-X[j])*(X[i]-X[j])+(Y[i]-Y[j])*(Y[i]-Y[j]));
                    double dis_s=sqrt((X[k]-X[l])*(X[k]-X[l])+(Y[k]-Y[l])*(Y[k]-Y[l]));
                    if(dis_b>X[i]||dis_b>Y[i])continue;
                    if(dis_b+X[i]>w||dis_b+Y[i]>h)continue;
                    if(dis_s>X[k]||dis_s>Y[k])continue;
                    if(dis_s+X[k]>w||dis_s+Y[k]>h)continue;
                    if(dis_s>=dis_b) continue;
                    double dis=sqrt((X[i]-X[k])*(X[i]-X[k])+(Y[i]-Y[k])*(Y[i]-Y[k]));
                    if(dis_s+dis+EPS<dis_b)ans++;

                }
            }
        }

    }

    cout<<ans<<endl;
}

