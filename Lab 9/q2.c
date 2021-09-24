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



int binSearch(int *a, int s, int e, int x) {

	if (s > e) {
		return -1;
	}

	int m = (s + e) / 2;

	if (a[m] == x)
		return m;

	if (a[m] > x)
		return binSearch(a, s, m - 1, x);

	if (a[m] < x)
		return binSearch(a, m + 1, e, x);

}













int main() {

	i_o_from_file();

	/* ********************************************* */


	pf("n\t\t|\tworst\t\t\tavg\t\t\t\tbest\n________|_____________________________________________\n");

	int sizes;
	sf(sizes);

	F(i, 0, sizes) {
		int n;
		sf(n);

		pf("%d\t|\t", n);
		int arr[n];
		F(j, 0, n) {
			arr[j] = 1 + j;
		}
		time_t start, end;
		double time;

		// Worst

		start = clock();
		pfs(binSearch(arr, 0, n - 1, 1));
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\t", time);

		// Avg

		start = clock();
		pfs(binSearch(arr, 0, n - 1, 1000));
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\t", time);

		// Best

		start = clock();
		pfs(binSearch(arr, 0, n - 1, (n - 1) / 2));
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\n", time);


	}


	return 0;
}
