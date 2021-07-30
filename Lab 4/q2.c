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

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}

		swap(&arr[min_idx], &arr[i]);
	}
}





int main() {

	i_o_from_file();

	/* ********************************************* */

	pf("n\t\tbest\t\tavg\t\t\tworst\n");

	int sizes[10] = {5000, 10000, 15000, 20000, 25000, 30000, 35000, 40000, 45000, 50000};

	F(i, 0, 10) {
		int n = sizes[i];
		pf("%d\t", n);
		int arr[n];
		time_t start, end;
		double time;

		// Best
		F(j, 0, n) {
			arr[j] = j + 1;
		}

		start = clock();
		selectionSort(arr, n);
		end = clock();

		time = (end - start) / CLOCKS_PER_SEC;

		pf("%f\t", time);


		// Avg
		F(j, 0, n) {
			arr[j] = rand() % 10000;
		}

		start = clock();
		selectionSort(arr, n);
		end = clock();

		time = (end - start) / CLOCKS_PER_SEC;

		pf("%f\t", time);


		// Worst
		F(j, 0, n) {
			arr[j] = n - j;
		}

		start = clock();
		selectionSort(arr, n);
		end = clock();

		time = (end - start) / CLOCKS_PER_SEC;

		pf("%f\n", time);


	}











	return 0;
}
