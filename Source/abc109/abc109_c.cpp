#include <bits/stdc++.h>
using namespace std;
unsigned euclidean_gcd(unsigned a, unsigned b) {
  if(a < b) euclidean_gcd(b, a);
  unsigned r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}


int main(){
	int n;
	long long x;
	cin >> n >> x;
	vector<unsigned> vec(n);
	for(int i=0;i<n;i++){
		long long k;
		cin >> k;
		vec[i]=abs(k-x);
	}
	unsigned ans=vec[0];
	for(int i=1;i<n;i++)ans = euclidean_gcd(ans,vec[i]);

	cout << ans  << endl;
}
