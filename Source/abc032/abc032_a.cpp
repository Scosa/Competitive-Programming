#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
unsigned euclidean_gcd(unsigned a, unsigned b) {
  if(a < b) euclidean_gcd(b, a);
  unsigned r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}

	
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	//input
	int a,b,c;
	cin >> a >> b >> c;
	long long use =a*b/ euclidean_gcd(a,b);
	for(int i =1;;i++){
		if(use*i>=c) {cout << use*i<<endl;return 0;}
	}
	
	
}



