#include <bits/stdc++.h>
using namespace std;
char mas[101][101];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	string s;
	cin >> s;

	//set
	int cnt_w=0;
	int cnt_e=0;
	int cnt_n=0;
	int cnt_s=0;

	//algorithm
	for(int i=0;i<s.size();i++){
		if(s[i]=='W')cnt_w++;
		if(s[i]=='E')cnt_e++;
		if(s[i]=='S')cnt_s++;
		if(s[i]=='N')cnt_n++;
	}
	if(cnt_w>0&&cnt_e==0){cout << "No" <<endl;return 0;}
	if(cnt_w==0&&cnt_e>0){cout << "No" <<endl;return 0;}
	if(cnt_s==0&&cnt_n>0){cout << "No" <<endl;return 0;}
	if(cnt_n==0&&cnt_s>0){cout << "No" <<endl;return 0;}
	cout << "Yes" << endl;
}

