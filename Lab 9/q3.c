// Author: Chaudhary Hamdan

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define sf(x)              scanf("%d", &x)
#define pf                 printf
#define pfs(x)             printf("%d ", x)
#define pfn(x)             printf("%d\n", x)
#define pfc(x)             printf("%d, ", x)
#define F(i,x,y)           for(int i = x; i < y; i++)
#define FI(i,x,y,inc)      for(int i = x; i < y; i += inc)
#define RF(i,x,y)          for(int i = x; i >= y; i--)
#define pfa(i,a,n)         for(int i = 0; i < n-1; i++) printf("%d ",a[i]); printf("%d\n", a[n-1]);


void i_o_from_file() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}

int max(int a, int b) {

	if (a > b) {
		return a;
	}
	return b;

}


int getMax(int *a, int i, int n) {

	if (i == n - 2) {

		return max(a[i], a[i + 1]);

	}

	return max(a[i], getMax(a, i + 1, n));

}

int min(int a, int b) {

	if (a < b) {
		return a;
	}
	return b;

}


int getMin(int *a, int i, int n) {

	if (i == n - 2) {

		return min(a[i], a[i + 1]);

	}

	return min(a[i], getMax(a, i + 1, n));

}



int main() {

	i_o_from_file();

	/* ********************************************* */

	pf("n\t\t| MAX\t  |\tTime Taken\n________|_________|___________\n\t\t|\n");

	int sizes;
	sf(sizes);

	int n;
	int arr[1000005];

	F(i, 0, sizes) {
		sf(n);

		pf("%d\t|\t", n);
		int arr[n];
		time_t start, end;
		double time;

		F(j, 0, n) {
			arr[j] = 1 + j;
		}

		start = clock();
		pf("%d | ", getMax(arr, 0, n));
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\n", time);
		// pfa(i, arr, n);

	}

	pf("\nComplexity: n for all the three cases.\n");


	pf("\n\n");

	pf("n\t\t| MIN\t  |\tTime Taken\n________|_________|___________\n\t\t|\n");

	F(i, 0, sizes) {

		pf("%d\t|\t", n);
		int arr[n];
		time_t start, end;
		double time;

		F(j, 0, n) {
			arr[j] = 1 + j;
		}

		start = clock();
		pf("%d | ", getMin(arr, 0, n));
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\n", time);
		// pfa(i, arr, n);

	}

	pf("\nComplexity: n for all the three cases.\n");



	return 0;
}
