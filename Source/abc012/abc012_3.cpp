#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
void rekyo(int a){
	for(int i=1;i<=a;i++){
		if(a%i==0){
			if(i>9||a/i>9)continue;
			cout << i << " x " << a/i<<endl;
		}

	}
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int n;
	cin >> n;
	n=2025-n;
	rekyo(n);



	

	
}
