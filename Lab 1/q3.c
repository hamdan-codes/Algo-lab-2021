#include<stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));

		if (i && (arr[i] < arr[i - 1])) {
			printf("Index : %d", (i - 1));
			break;
		}
	}


	return 0;
}
