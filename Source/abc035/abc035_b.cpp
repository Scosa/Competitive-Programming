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
	int nowx=0;
	int nowy=0;
	int cnt=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='?'){cnt++;continue;}
		if(s[i]=='L')nowx--;
		if(s[i]=='R')nowx++;
		if(s[i]=='D')nowy--;
		if(s[i]=='U')nowy++;
	}

	//output
	int a;
	cin >> a;
	if(a==1){cout << cnt+abs(nowx)+abs(nowy) << endl;return 0;}
	else {
		int use = abs(nowx)+abs(nowy);
		if(use>=cnt)cout << use-cnt << endl;
		else if((cnt-use)%2==0)cout << 0 << endl;
		else cout << 1 << endl;
		return 0;
	}
	
}


