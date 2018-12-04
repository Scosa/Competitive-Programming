#include <bits/stdc++.h>
using namespace std;
int dh[4]={0,0,1,-1};
int dw[4]={1,-1,0,0};

int main(){
	int h,w;
	cin>>h>>w;
	vector<string> A(h);
	for(int i=0;i<h;i++)cin>>A[i];

	
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(A[i][j]=='#'){
									bool ok=false;
				for(int s=0;s<4;s++){
					int nh=i+dh[s];
					int nw=j+dw[s];
					if(0<=nh&&nh<h&&0<=nw&&nw<w&&A[nh][nw]=='#') ok=true;
				}
				if(!ok){
						cout<<"No"<<endl;
						return 0;
				}
			}
		}
	}
	cout<<"Yes"<<endl;
}
