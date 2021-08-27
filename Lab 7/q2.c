// Author: Chaudhary Hamdan

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define sf(x)           scanf("%d", &x)
#define pf              printf
#define pfs(x)          printf("%d ", x)
#define pfn(x)          printf("%d\n", x)
#define pfc(x)          printf("%d, ", x)
#define F(i,x,y)        for(int i = x; i < y; i++)
#define FI(i,x,y,inc)   for(int i = x; i < y; i += inc)
#define RF(i,x,y)       for(int i = x; i >= y; i--)
#define pfarr(i,a,n)    for(int i = 0; i < n-1; i++) pfs(a[i]); pfn(a[n-1]);


void i_o_from_file() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}


void towerOfHanoi(int n, char s, char h, char d) {

	if (n == 1) {
		pf("Move %d from %c to %c\n", n, s, d);
		return;
	}

	towerOfHanoi(n - 1, s, d, h);
	pf("Move %d from %c to %c\n", n, s, d);
	towerOfHanoi(n - 1, h, s, d);

}






int main() {

	i_o_from_file();

	/* ********************************************* */


	int n;
	sf(n);

	towerOfHanoi(n, 'S', 'H', 'D');






	return 0;
}
