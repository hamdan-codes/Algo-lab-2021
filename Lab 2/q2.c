/*
 * Author               : Chaudhary Hamdan
 *
 * Github link          : https://github.com/hamdan-codes
 * My Algo Lab Repo     : https://github.com/hamdan-codes/Algo-lab-2021
 * My Networks Lab Repo : https://github.com/hamdan-codes/Networks-lab-2021
 */

#include <stdio.h>


#define sf(x)              scanf("%d", &x)
#define pf(x)              printf("%d ", x)
#define pfn(x)             printf("%d\n", x)
#define pfc(x)             printf("%d, ", x)
#define f(i,x,y)           for(int i = x; i < y; i++)
#define fi(i,x,y,inc)      for(int i = x; i < y; i += inc)
#define rf(i,x,y)          for(int i = x; i >= y; i--)


void c_() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}


/* ************************** Your Functions and all Below ************************ */








/* ************************** Your Functions and all Above ************************ */

int main() {

	c_();

	/* ********************* Your Main function Code Below *********************** */


	int n;
	sf(n);

	int non_zero = 0;
	int sum_above = 0;
	int pro_diag = 1;

	int mat[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sf(mat[i][j]);
			if (mat[i][j]) {
				non_zero++;
			}
			if (i == j) {
				pro_diag *= mat[i][j];
			}
			if (j > i) {
				sum_above += mat[i][j];
			}
		}
	}





	printf("Number of non zero elements: %d\n", non_zero);
	printf("Sum of elements above diagonal: %d\n", sum_above);
	printf("Product of diagonal elements: %d\n", pro_diag);
	printf("Minor diagonal elements: ");


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sf(mat[i][j]);
			if (i + j == n - 1) {
				pfc(mat[i][j]);
			}
		}
	}
















	/* ********************* Your Main function Code Above *********************** */

	return 0;
}
