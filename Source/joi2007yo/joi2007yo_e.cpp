#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> A(4002); 
vector<int> B(4002); 
vector<int> C(4002); 

class un{
    public:
    int num ,a,b,c;
};
bool comp(un a,un b){
    return a.num<b.num;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a_s,b_s,c_s;
    cin>>a_s>>b_s>>c_s;
    for(int i=0;i<4000;i++){
        A[i]=2;
        B[i]=2;
        C[i]=2;
    }
    int m;
    cin>>m;
    vector<un>vec(m);
    for(int i=0;i<m;i++){
        un s;
        cin>>s.a>>s.b>>s.c>>s.num;
       vec[i]=s;
    }
    sort(vec.begin(),vec.end(),comp);

    for(int i=0;i<m;i++){
        un s=vec[m-i-1];
        if(s.num==1){
            A[s.a]=1;
            B[s.b]=1;
            C[s.c]=1;
        }
        else{
            if(A[s.a]==1&&B[s.b]==1)C[s.c]=0;
            if(C[s.c]==1&&B[s.b]==1)A[s.a]=0;
            if(A[s.a]==1&&C[s.c]==1)B[s.b]=0;
        }
    }

    for(int i=1;i<=a_s;i++){
        cout<<A[i]<<endl;
    }
    for(int i=a_s+1;i<=a_s+b_s;i++){
        cout<<B[i]<<endl;
    }
    for(int i=a_s+b_s+1;i<=a_s+b_s+c_s;i++){
        cout<<C[i]<<endl;
    }

   

    
}
