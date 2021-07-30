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


void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}





int main() {

	i_o_from_file();

	/* ********************************************* */

	pf("n\t\tbest\t\tavg\t\t\tworst\n\n");

	int sizes;
	sf(sizes);

	F(i, 0, sizes) {
		int n;
		sf(n);

		pf("%d\t", n);
		int arr[n];
		time_t start, end;
		double time;

		// Best
		F(j, 0, n) {
			arr[j] = j + 1;
		}

		start = clock();
		bubbleSort(arr, n);
		end = clock();

		time = (end - start) / CLOCKS_PER_SEC;

		pf("%f\t", time);

		// Avg
		F(j, 0, n) {
			arr[j] = n - j;
		}

		start = clock();
		bubbleSort(arr, n);
		end = clock();

		time = (end - start) / CLOCKS_PER_SEC;

		pf("%f\t", time);


		// Worst
		F(j, 0, n) {
			arr[j] = rand() % 10000;
		}

		start = clock();
		bubbleSort(arr, n);
		end = clock();

		time = (end - start) / CLOCKS_PER_SEC;

		pf("%f\n", time);


	}











	return 0;
}
