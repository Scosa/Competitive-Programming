#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


/*ll binary_search() {
    ll left = -1; 
    ll right = use; 
    while (right - left > 1) {
        int mid = left + (right - left) / 2;

        if (check(mid)) right = mid;
        else left = mid;
    }

    return right;
}*/

	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	string s;
	cin >> s;

	//count
	vector<int> cnt;
	cnt.push_back(0);
	for(int i=0;i<s.size();i++)if(s[i]=='+')cnt.push_back(i);
	cnt.push_back(s.size());
	//algorithm
	int ans=0;
	for(int i=0;i<cnt.size()-1;i++){
		for(int j=cnt[i];j<cnt[i+1];j++){
			if(s[j]=='0') break;
			if(j==cnt[i+1]-1)ans++;
		}
	}

	//output
	cout << ans<< endl;
}



