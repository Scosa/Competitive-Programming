#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
int sumX[100001];
int sumY[100001];



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int a,b, c, d;
	cin >> a >> b >> c >> d;


	if(b<=c||d<=a){cout << 0 << endl;return 0;}
	vector<int> vec;
	vec.push_back(a);
	vec.push_back(b);
	vec.push_back(c);
	vec.push_back(d);
	sort(vec.begin(),vec.end());
	cout << vec[2]-vec[1] << endl;

	
}
