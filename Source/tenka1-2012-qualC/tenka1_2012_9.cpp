#include <bits/stdc++.h>
using namespace std;

const int MAX_N=1000000;
int prime[MAX_N];//i番目の素数
bool is_prime[MAX_N+1];//is_prime[i]がtrueならiは素数

int sieve(int n){
    int p=0;
    for(int i=0;i<=n;i++) is_prime[i]=true;
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            prime[p++]=i;
            for(int j=i*2;j<=n;j+=i)is_prime[j]=false;
        }
    }
    return p;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    cout<<sieve(n-1)<<endl;
}
