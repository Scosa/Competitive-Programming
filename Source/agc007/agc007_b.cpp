#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mas[200001];
using namespace std;





int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i=0;i<n;i++)cin >> vec[i];

	for(int i=0;i<n;i++)cout << i*40000+1 << ' ';
	cout << endl;

	for(int i=0;i<n;i++)mas[i]=(n-i-1)*40000+1;

	for(int i=0;i<n;i++)mas[vec[i]-1]+=i;

	for(int i=0;i<n;i++)cout << mas[i] << ' ';
	cout << endl;

}
