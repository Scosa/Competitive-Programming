#include<stdio.h>
int main(){
	int N, a, c, b = 0, d = 0, e = 0, f = 0, z, aa;
	int o = 0;
	scanf("%d", &N);
	int A[N], B[N], C[N];
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (int j = 0; j < N; j++)
		scanf("%d", &B[j]);
	for (int k = 0; k < N; k++){
      d = 0; b = 0;
		for (int l = 0; l <= k; l++){
			a = A[l];
			b += a;
		}
      aa = k;
		for (int m = aa; m < N; m++){
			c = B[m];
			d += c;
		}
		z = b + d;
		if (f < z) f = z;
	}
	printf("%d", f);
}

