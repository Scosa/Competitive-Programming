#include <bits/stdc++.h>
using namespace std;
#define bye return 0;

int n,c;
int S[100001];
int T[100001];  
int C[100001];
int sum[200010];
int table[200010];
int main (){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> c;

	for (int i=0;i<n;i++)cin >> S[i] >> T[i] >> C[i];
	for (int i=1;i<=c;i++){
		for (int j=0;j<200001;j++) table[j]=0;


		for ( int j=0;j<n;j++) if(C[j]==i) {
			table[S[j]*2-1]++;table[T[j]*2]--;
		}
		for ( int j =1; j <200001; j ++) table[j]+= table[j -1];
		for ( int j =0; j <200001; j ++) if (table[j] >0) sum[j]++;
	}
	int ans =0;
	for (int j=0;j<200002;j++) ans=max(sum[j],ans);

	cout << ans << endl;
}



