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


void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


int partition (int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}




int main() {

	i_o_from_file();

	/* ********************************************* */

	pf("n\t\t|\tworst\t\tavg\t\t\tbest\n________|____________________________________\n");

	int sizes;
	sf(sizes);

	F(i, 0, sizes) {
		int n;
		sf(n);

		pf("%d\t|\t", n);
		int arr[n];
		time_t start, end;
		double time;

		// Worst
		F(j, 0, n) {
			arr[j] = j + 1;
		}

		start = clock();
		quickSort(arr, 0, n - 1);
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\t", time);

		// Avg
		F(j, 0, n) {
			arr[j] = n - j;
		}

		start = clock();
		quickSort(arr, 0, n - 1);
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\t", time);


		// Best
		F(j, 0, n) {
			arr[j] = rand() % 10000;
		}

		start = clock();
		quickSort(arr, 0, n - 1);
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\n", time);


	}


	return 0;
}
