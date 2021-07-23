/*
 * Author               : Chaudhary Hamdan
 *
 * Github link          : https://github.com/hamdan-codes
 * My Algo Lab Repo     : https://github.com/hamdan-codes/Algo-lab-2021
 * My Networks Lab Repo : https://github.com/hamdan-codes/Networks-lab-2021
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define sf(x)              scanf("%d", &x)
#define pf(x)              printf("%d ", x)
#define pfn(x)             printf("%d\n", x)
#define pfc(x)             printf("%d, ", x)
#define f(i,x,y)           for(int i = x; i < y; i++)
#define fi(i,x,y,inc)      for(int i = x; i < y; i += inc)
#define rf(i,x,y)          for(int i = x; i >= y; i--)


void c_() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}


/* ************************** Your Functions and all Below ************************ */

















/* ************************** Your Functions and all Above ************************ */

int main() {

	c_();

	/* ********************* Your Main function Code Below *********************** */

	int n = 100000;
	int arr[n];

	f(i, 0, n) {
		//arr[i] = 1 + rand() % 100;
		arr[i] = i + 1;
	}


	int best = arr[(n - 1) / 2];
	int worst = arr[1];
	int avg = arr[n / 16];
	time_t strt, end;

	int lo = 0, hi = n - 1;

	strt = clock();
	while (lo < hi)
	{
		int mid = (lo + hi) / 2;

		if (arr[mid] == best) {
			end = clock();
			double t = end - strt;
			printf("Time taken for best case: %f\n", (t / CLOCKS_PER_SEC));
			break;
		}

		if (arr[mid] > best)
		{
			hi = mid;
		}
		else
		{
			lo = mid + 1;
		}
	}


	lo = 0, hi = n - 1;

	strt = clock();
	while (lo < hi)
	{
		int mid = (lo + hi) / 2;

		if (arr[mid] == avg) {
			end = clock();
			double t = end - strt;
			printf("Time taken for avg case: %f\n", (t / CLOCKS_PER_SEC));
			break;
		}

		if (arr[mid] > avg)
		{
			hi = mid;
		}
		else
		{
			lo = mid + 1;
		}
	}


	lo = 0, hi = n - 1;

	strt = clock();
	while (lo < hi)
	{
		int mid = (lo + hi) / 2;

		if (arr[mid] == worst) {
			end = clock();
			double t = end - strt;
			printf("Time taken for worst case: %f\n", (t / CLOCKS_PER_SEC));
			break;
		}

		if (arr[mid] > worst)
		{
			hi = mid;
		}
		else
		{
			lo = mid + 1;
		}
	}










	/* ********************* Your Main function Code Above *********************** */

	return 0;
}
