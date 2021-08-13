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

int find_max(int arr[], int s, int e) {

	if (s > e) {
		return -(1 << 30);
	}

	if (s == e) {
		return arr[s];
	}

	int rem = find_max(arr, s + 1, e);

	return ((arr[s] > rem) ? arr[s] : rem);

}


int find_min(int arr[], int s, int e) {

	if (s > e) {
		return -(1 << 30);
	}

	if (s == e) {
		return arr[s];
	}

	int rem = find_max(arr, s + 1, e);

	return ((arr[s] < rem) ? arr[s] : rem);


}


int main() {

	i_o_from_file();

	/* ********************************************* */

	pf("n\t\t|\tTime\t\tMax\t\tMin\n");

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
			arr[j] = rand() % 5000 + 1;
		}

		start = clock();
		int ans1 = find_max(arr, 0, n - 1);
		int ans2 = find_min(arr, 0, n - 1);
		end = clock();

		time = (end - start) * 1.0 / CLOCKS_PER_SEC;

		pf("%f\t%d\t%d\n", time, ans1, ans2);

	}


	return 0;
}
