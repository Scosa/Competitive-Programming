#include<iostream> 
#include<vector>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	int maxn=10101010;
  	int need=0; 
  	for(int i=0;i<m;i++){
      	int a,b;cin>>a>>b;
      	maxn=min(maxn,a);
      	need+=max(n-a,0);
    }
  cout<<need-max(n-maxn,0)<<endl;
}
  	

