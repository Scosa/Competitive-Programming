#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int> A;
vector<int> B;
vector<int> C;
vector<int> T;
int n,m;
const int MAX_E=100000;
const int MAX_N=100000;
int par[MAX_N];//親
int  deep[MAX_N];//木の深さ

//n要素で初期化
void init(int y){
    for(int i=0;i<y;i++){
        par[i]=i;
         deep[i]=0;
    }
}

//木の根を求める
int find(int x){
    if(par[x]==x){
        return x;
    }
    else{
        return par[x]=find(par[x]);
    }
}

//xとyの属する集合を併合
void unit(int x,int y){
    x=find(x);
    y=find(y);
    if(x==y)return;

    if( deep[x]< deep[y]){
        par[x]=y;
    }
    else{
        par[y]=x;
        if(deep[x]== deep[y]) deep[x]++;
    }
}

//xとyが同じ集合に属するかいなか
bool same(int x,int y){
    return find(x)==find(y);
}

class edge{
    public:
    int from,to;
    double cost;
};
int V,E;
vector<edge> es;

bool comp(const edge& e1,const edge& e2){
    return e1.cost<e2.cost;
}

double kruskal(){
    sort(es.begin(),es.end(),comp);
    init(V);
    double ret=0;
    for(int i=0;i<es.size();i++){
        edge e=es[i];
        //cout<<e.cost<<endl;
        if(!same(e.from,e.to)){
            unit(e.from,e.to);
            ret+=e.cost;
        }
    }

    return ret;
}			

bool check(double w){
    es.clear();
    double res=0;
    for(int i=0;i<m;i++){
        if((double)(C[i]-w*T[i])<=0){
            res+=(double)(w*T[i]-C[i]);
            edge e;e.from=A[i];e.to=B[i];e.cost=0;
            es.push_back(e);    
        }
        else{
            edge e;e.from=A[i];e.to=B[i];e.cost=(double)(C[i]-w*T[i]);
            es.push_back(e);
        }
    }
   // cout <<res<<' '<<kruskal()<<endl;
    return res>=kruskal();
}


double binary_search(double s) {
    int cnt=0;
    double left = 0;
    double right = s;
    while (true) {
        double mid = left + (right - left) / 2.0;
        //cout<<mid<<endl;
        if (check(mid)) right = mid;
        else left = mid;
        if(cnt==50)return right;
        cnt++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    cin>>n>>m;
    for(int i=0;i<m;i++){
        int k,l,s,t;
        cin>>k>>l>>s>>t;
        A.push_back(k);
        B.push_back(l);
        C.push_back(s);
        T.push_back(t);
    }
    V=n;
    //cout<<check(1.5625)<<check(3.125)<<endl;
    cout<<fixed<<setprecision(5)<<binary_search(100000020.0)<<endl;

    
}
