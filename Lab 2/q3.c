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


	int best = arr[0];
	int worst = arr[n - 1];
	int avg = arr[n / 2];
	time_t strt, end;

	strt = clock();
	f(i, 0, n) {
		if (best == arr[i]) {
			end = clock();
			double t = end - strt;
			printf("Time taken for best case: %f\n", (t / CLOCKS_PER_SEC));
			break;
		}
	}

	strt = clock();
	f(i, 0, n) {
		if (avg == arr[i]) {
			end = clock();
			double t = end - strt;
			printf("Time taken for avg case: %f\n", (t / CLOCKS_PER_SEC));
			break;
		}
	}

	strt = clock();
	f(i, 0, n) {
		if (worst == arr[i]) {
			end = clock();
			double t = end - strt;
			printf("Time taken for worst case: %f\n", (t / CLOCKS_PER_SEC));
			break;
		}
	}














	/* ********************* Your Main function Code Above *********************** */

	return 0;
}
