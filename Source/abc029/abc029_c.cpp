#include <bits/stdc++.h>
using namespace std;

void dfs(int n, string s){
	if(n <= 1){
		cout << s+"a" << endl;
		cout << s+"b" << endl;
		cout << s+"c" << endl;
	}
	else{
		dfs(n-1, s+"a");
		dfs(n-1, s+"b");
		dfs(n-1, s+"c");
	}
}

int main(){
	int n;
	cin >> n;
	dfs(n, "");

	return 0;
}

