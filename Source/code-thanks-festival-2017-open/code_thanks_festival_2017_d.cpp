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
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	unsigned int n,m;
	cin >> n >> m;
	cout << m-euclidean_gcd(n,m) << endl;
}
