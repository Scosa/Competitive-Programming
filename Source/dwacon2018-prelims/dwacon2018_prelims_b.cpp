#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	string s;
	cin >> s;

	/*int cnt_2=0;
	int cnt_5=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='2'){cnt_2++;continue;}
		else if(s[i]=='5'){cnt_5++;continue;}
		else {
			cout << -1 << endl;return 0;
		}
	}

	if(cnt_2!=cnt_5){cout << -1 << endl;return 0;}*/
	int ans=0;
	int check=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!='2'&&s[i]!='5'){cout << -1 << endl;return 0;}
		if(s[i]=='2')check++;
		if(s[i]=='5')check--;
		if(check<0){cout << -1 << endl;return 0;}
		ans=max(ans,abs(check));
	}

	if(check!=0){cout << -1 << endl;return 0;}
	cout <<  ans << endl;
	

	
}
