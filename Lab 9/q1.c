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

void buildHeap(int *arr, int n)
{
	int startIdx = (n / 2) - 1;

	for (int i = startIdx; i >= 0; i--) {
		heapify(arr, n, i);
	}
}

int extract_maximum(int *arr, int n) {

	int m = *arr;

	arr[0] = arr[n - 1];

	heapify(arr, n - 1, 0);

	return m;
}

int kthMax(int *arr, int n, int k) {

	int ans = 0;

	F(i, 0, k) {
		ans = extract_maximum(arr, n);
		n--;
	}

	return ans;

}


int main() {

	i_o_from_file();

	/* ********************************************* */

	pf("n\t\t|\tElement |\tTime\n________|___________|______________\n");

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

		buildHeap(arr, n);

		time_t start, end;
		double time;

		// Time

		start = clock();
		pfs(kthMax(arr, n, 5));
		pf("\t|\t");
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\n", time);


	}





	return 0;
}
