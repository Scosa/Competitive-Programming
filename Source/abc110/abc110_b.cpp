#include <bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n,m,x,y;
	cin >> n >> m >> x >> y;
	vector<int> vec(n);
	vector<int>vecv(m);
	for(int i=0;i<n;i++)cin >> vec[i];
	for(int i= 0;i<m;i++)cin >>vecv[i];

	if(x>=y){cout << "War" << endl;return 0;}

	sort(vec.begin(),vec.end());
	sort(vecv.begin(),vecv.end());

	if(vec[n-1]<y &&  vecv[0]>x && vec[n-1] < vecv[0]){cout << "No War" << endl;return 0;}
	cout << "War" << endl;
	
	
}

