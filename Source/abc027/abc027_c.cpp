#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin  >> n;
	long long flag= 0;

	n++;
	while(true){
		if(n==1)break;
		if(n%2==0) n=n/2;
		else if(flag%2 ==0) n=(n+1)/2;
		else n=n/2;
		flag++;
	}
	if(flag%2!=0)cout << "Aoki" << endl;
	else cout << "Takahashi" << endl;
}

