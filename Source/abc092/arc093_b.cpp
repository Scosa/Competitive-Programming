#include <bits/stdc++.h>
using namespace std;
char mas[101][101];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b;
	cin >> a >> b;
	for(int i=0;i<100;i++)for(int j=0;j<100;j++){
		if(j<50)mas[i][j]='#';
		else mas[i][j]='.';
	}

	a--;
	b--;
	int cnt=0;
	bool update = false;
	for(int i=0;i<100;i+=2){for(int j = 0;j<50;j+=2){
		if(cnt==a){update=true;break;}
		mas[i][j]='.';
		cnt++;
	}if(update) break;}
	cnt = 0;
	update = false;
	for(int i=0;i<100;i+=2){for(int j = 51;j<100;j+=2){
		if(cnt==b){update=true;break;}
		mas[i][j]='#';
		cnt++;
	}if(update) break;}
	cout << 100 << ' ' << 100 <<endl;

	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++) cout << mas[i][j];
		cout << endl;
	}
}

