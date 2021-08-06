// Author: Chaudhary Hamdan

#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <stdlib.h>

#define sf(x)           scanf("%d", &x)
#define pf              printf
#define pfs(x)          printf("%d ", x)
#define pfn(x)          printf("%d\n", x)
#define pfc(x)          printf("%d, ", x)
#define F(i,x,y)        for(int i = x; i < y; i++)
#define FI(i,x,y,inc)   for(int i = x; i < y; i += inc)
#define RF(i,x,y)       for(int i = x; i >= y; i--)
#define pfarr(i,a,n)    for(int i = 0; i < n-1; i++) pfs(a[i]); pfn(a[n-1]);


void i_o_from_file() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}




int main() {

	i_o_from_file();

	/* ********************************************* */

	int n;
	sf(n);

	float arr[10][10];
	float a[10][10];

	F(i, 0, n) {
		F(j, 0, n) {
			scanf("%f", &arr[i][j]);
			a[i][j] = arr[i][j] - (int)(arr[i][j]);
		}
	}

	float row[n], col[n];

	F(i, 0, n) {
		float s = 0.0;
		F(j, 0, n) {
			s += a[i][j];
		}
		row[i] = s;
	}

	F(j, 0, n) {
		float s = 0.0;
		F(i, 0, n) {
			s += (arr[i][j] - (int)(arr[i][j]));
		}
		col[j] = s;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < row[i]; j++) {
			if (col[j] == 0) {
				a[i][j] = 0;
				continue;
			}
			a[i][j] = 1;
			col[j]--;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < col[i]; j++) {
			if (row[j] == 0) {
				a[j][i] = 1;
				continue;
			}
			a[j][i] = 0;
			row[j]--;
		}
	}


	pf("Rounded up matrix :\n");

	F(i, 0, n) {
		F(j, 0, n) {
			pf("%d ", (int)(arr[i][j]) + (int)(a[i][j]));
		}
		pf("\n");
	}



	return 0;
}
