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

void heapify(int *arr, int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && arr[l] > arr[largest])
		largest = l;

	if (r < n && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr + i, arr + largest);

		heapify(arr, n, largest);
	}
}

void heapSort(int *arr, int n) {

	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i > 0; i--) {
		swap(arr + 0, arr + i);
		heapify(arr, i, 0);
	}
}


int main() {

	i_o_from_file();

	/* ********************************************* */

	pf("n\t\t|\tTime Taken\n________|_____________\n\t\t|\n");

	int sizes;
	sf(sizes);

	F(i, 0, sizes) {
		int n;
		sf(n);

		pf("%d\t|\t", n);
		int arr[n];
		time_t start, end;
		double time;

		F(j, 0, n) {
			arr[j] = rand() % 100000;
		}

		start = clock();
		heapSort(arr, n);
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\n", time);
		// pfa(i, arr, n);

	}

	pf("\nComplexity: nlog(n) for all the three cases.\n");

	return 0;
}
