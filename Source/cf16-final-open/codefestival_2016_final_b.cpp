#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	int sum=0;
	int check;
	int made;
	for(int i =1;;i++){
		sum+=i;
		if(sum >= n ){check=sum-n;made=i;break;}
	}
	for(int i=1;i<=made;i++){
		if(i==check) continue;
		cout << i << endl;
	}

}
