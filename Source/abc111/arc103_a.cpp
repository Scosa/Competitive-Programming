#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> PII; 

/*ll binary_search() {
    ll left = -1; 
    ll right = use; 
    while (right - left > 1) {
        int mid = left + (right - left) / 2;

        if (check(mid)) right = mid;
        else left = mid;
    }

    return right;
}*/

	

	

/*long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m; 
    if (u < 0) u += m;
    return u;
}*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> odd;
	vector<int> even;
	for(int i=0;i<n/2;i++){
		int k,l;
		cin >> k >> l;
		even.push_back(k);
		odd.push_back(l);
	}
	sort(odd.begin(),odd.end());
	sort(even.begin(),even.end());

	if(n==2){
		if(odd[0]==even[0]){cout << 1 << endl;return 0;}
		else {cout << 0 << endl;return 0;}
	}
	int cnt=1;
	PII max1;
	max1.first=0;
	max1.second=-1;
	PII max2;
	max2.first=0;
	max2.second=-1;

	for(int i=0;i<n/2;i++){
		if(i==n/2-1){
			if(max1.first<cnt){max1.second=odd[i];swap(max1.first,cnt);}			
			if(max2.first<cnt){max2.second=odd[i];max2.first=cnt;}
			cnt=1;
			break;
		}
		if(odd[i]==odd[i+1]){cnt++;continue;}
		if(max1.first<cnt){max1.second=odd[i];swap(max1.first,cnt);}
		if(max2.first<cnt){max2.second=odd[i];max2.first=cnt;}
		cnt=1;
	}
	PII max3;
	max3.first=0;
	max3.second=-1;
	PII max4;
	max4.first=0;
	max4.second=-1;
	for(int i=0;i<n/2;i++){
		if(i==n/2-1){
			if(max3.first<cnt){max3.second=even[i];swap(max3.first,cnt);}
			if(max4.first<cnt){max4.second=even[i];max4.first=cnt;}
			cnt=1;
			break;
		}
		if(even[i]==even[i+1]){cnt++;continue;}
		if(max3.first<cnt){max3.second=even[i];swap(max3.first,cnt);}
		if(max4.first<cnt){max4.second=even[i];max4.first=cnt;}
		cnt=1;
	}
	//cout << max2.first << " " << max2.second << endl;
	//cout << max4.first << " "<<max4.second << endl;
	if(max3.second!=max1.second){cout << (n/2-max3.first)+(n/2-max1.first) << endl;return 0;}
	else {
		int use1=max1.first+max4.first;
		int use2=max2.first+max3.first;
		if(use1>use2)cout << n-use1 << endl;
		else cout << n-use2 << endl;
	}



}


