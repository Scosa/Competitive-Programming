#include <bits/stdc++.h>
using namespace std;
#define bye return 0;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input;
	int n;
	cin >> n;
	vector<long long> A(n);
	vector<long long> B(n);
	for(int i = 0; i < n; ++ i) {
        cin >> A[i] >> B[i];
    	}
    	long long sum = 0;
    	for(int i = n - 1; i >= 0; -- i) {
        	A[i] += sum;
        	if (A[i] % B[i]) {
            	sum += B[i] - A[i]%B[i];
        	}
    	}
    cout << sum << endl;
}
