#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
bool used[10001];



	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	string s;
	cin >> n >> s;
	int m=s.size();
	int ans =0;
	for(int i =0;i<n;i++){
		string t;
		cin >> t;
		for(int j=0;j<t.size();j++){
			for(int k=1;j+(m-1)*k<t.size();k++){
				for(int l=0;l<m;l++){
					if(t[j+k*l]!=s[l]) goto fail;
				}
				ans++;
				goto next;
				fail:;
			}
		}
		next:;
	}


	cout << ans<< endl;


	
}



