#include <bits/stdc++.h>
using namespace std;

#define N 1000000

using namespace std;
int n;
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
	int a=0;
	for(int i = 2; i < N; i++){
		if(a==n)break;
		if(arr[i]){
			if(i%5==1){cout << i << endl;a++;}
			
		}
	}
}




int main(){
	cin >> n;	
	Eratosthenes();
	return 0;
}


