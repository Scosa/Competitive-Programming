#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1000000
int counttt[N];
using namespace std;

int arr[N];

//エラトステネスの篩
void Eratosthenes(){
	for(int i = 0; i < N; i++){
		arr[i] = 1;
	}
	for(int i = 2; i < sqrt(N); i++){
		if(arr[i]){
			for(int j = 0; i * (j + 2) < N; j++){
				arr[i *(j + 2)] = 0;
			}
		}
	}

	for(int i = 2; i < N; i++){
		if(arr[i]){
			//cout << i << endl;
		}
	}
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	//input
	int q;
	cin >> q;
	Eratosthenes();
	arr[0]=0;
	arr[1]=0;
	for(int i=1;i<100003;i++){
		counttt[i]=counttt[i-1];
		if(arr[i]==true&&arr[(i+1)/2]==true)counttt[i]++;
	}
	//for(int i=0;i<100;i++){cout << counttt[i] << endl;}
	//cout << arr[0] << endl;

	for(int i=0;i<q;i++){
		int k,l;
		cin >> k >> l;
		cout << counttt[l]-counttt[k-1] << endl;
	}

}
