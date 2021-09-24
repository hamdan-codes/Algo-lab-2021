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



int binSearch(int *a, int s, int e, int k) {

	if (s > e) {
		return -1;
	}

	int m = (s + e) / 2;

	if (k < a[m]) {
		return binSearch(a, s, m - 1, k);
	}
	if (k > a[m]) {
		return binSearch(a, m + 1, e, k);
	}

	return m;


	return 0;
}













int main() {

	i_o_from_file();

	/* ********************************************* */

	pf("n\t\t| Found\t  |\tTime Taken\n________|_________|___________\n\t\t|\n");

	int sizes;
	sf(sizes);

	int n;
	int arr[100005];

	F(i, 0, sizes) {
		sf(n);

		pf("%d\t|\t", n);
		time_t start, end;
		double time;

		F(j, 0, n) {
			arr[j] = 1 + j;
		}

		start = clock();
		pf("%d | ", binSearch(arr, 0, n - 1, 105));
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\n", time);
		// pfa(i, arr, n);

	}

	pf("\nComplexity: log(n) for all the three cases.\n");



	return 0;
}
