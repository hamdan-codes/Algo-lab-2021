/*
 * Author               : Chaudhary Hamdan
 *
 * Github link          : https://github.com/hamdan-codes
 * My Algo Lab Repo     : https://github.com/hamdan-codes/Algo-lab-2021
 * My Networks Lab Repo : https://github.com/hamdan-codes/Networks-lab-2021
 */

#include <stdio.h>


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



void swap(int *x, int *y) {
	int temp = *x;
	*x =  *y;
	*y = temp;
}













/* ************************** Your Functions and all Above ************************ */

int main() {

	c_();

	/* ********************* Your Main function Code Below *********************** */


	int a, b, c;
	sf(a); sf(b); sf(c);

	pfc(a); pfc(b); pfn(c);


	swap(&a, &b);
	swap(&a, &c);

	pfc(a); pfc(b); pfn(c);







	/* ********************* Your Main function Code Above *********************** */

	return 0;
}
