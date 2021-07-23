#include<stdio.h>

int main() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif


	int n, tot = 1;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
		tot *= arr[i];
	}

	for (int i = 0; i < n - 1; i++) {
		printf("%d, ", tot / arr[i]);
	}
	printf("%d\n", tot / arr[n - 1]);



	return 0;
}
