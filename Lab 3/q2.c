/*
 * Author               : Chaudhary Hamdan
 *
 * Github link          : https://github.com/hamdan-codes
 * My Algo Lab Repo     : https://github.com/hamdan-codes/Algo-lab-2021
 * My Networks Lab Repo : https://github.com/hamdan-codes/Networks-lab-2021
 */

#include <stdio.h>
#include <time.h>


#define sf(x)              scanf("%d", &x)
#define pf                 printf
#define pfs(x)             printf("%d ", x)
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



int gcd(int n, int m) {
	while (n > 0) {
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}











/* ************************** Your Functions and all Above ************************ */

int main() {

	c_();

	/* ********************* Your Main function Code Below *********************** */


	time_t start, end;
	int n, m;
	sf(n);
	sf(m);


	start = clock();
	pfn(gcd(n, m));
	end = clock();
	double t = end - start;
	printf("Time taken: %f\n", (t / CLOCKS_PER_SEC));












	/* ********************* Your Main function Code Above *********************** */

	return 0;
}
