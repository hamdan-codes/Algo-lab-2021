// Author: Chaudhary Hamdan

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define sf(x)           scanf("%d", &x)
#define pf              printf
#define pfs(x)          printf("%d ", x)
#define pfn(x)          printf("%d\n", x)
#define pfc(x)          printf("%d, ", x)
#define FI(i,x,y,inc)   for(int i = x; i < y; i += inc)
#define F(i,x,y)        FI(i, x, y, 1)
#define F0(i,n)         FI(i, 0, n, 1)
#define RF(i,x,y)       for(int i = x; i >= y; i--)
#define pfarr(i,a,n)    for(int i = 0; i < n-1; i++) pfs(a[i]); pfn(a[n-1]);


void i_o_from_file();

void activitySelection(int s[], int f[], int n)
{
	int i, j;

	pf("Activities selected:-\n");

	i = 0;
	pfs(i + 1);

	for (j = 1; j < n; j++)
	{
		if (s[j] >= f[i])
		{
			pfs(j + 1);
			i = j;
		}
	}
}



int main() {

	i_o_from_file();

	/* ********************************************* */

	int n;
	sf(n);

	int s[n], f[n];

	F0(i, n) {
		sf(s[i]);
		sf(f[i]); // Giving input in sorted form wrt finish times.
	}

	activitySelection(s, f, n);



	return 0;
}



void i_o_from_file() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}

