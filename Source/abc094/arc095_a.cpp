#include <bits/stdc++.h>
using namespace std;
vector<int> vec;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<long long,long long> > x(n);
	for(int i=0;i<n;i++){cin >> x[i].first;x[i].second = i;}
	sort(x.begin(),x.end());
	long long ans1=x[(n-1)/2].first;
	long long ans2=x[n/2].first;

	for(int i=0;i<n;i++){
		if(i<n/2) {x[i].first=ans2;swap(x[i].first,x[i].second);}
		else {x[i].first=ans1;swap(x[i].first,x[i].second);}
	}
	sort(x.begin(),x.end());

	for(int i =0;i<n;i++)cout << x[i].second << endl; 

}
