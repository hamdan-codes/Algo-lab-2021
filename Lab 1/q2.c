#include<stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
	}

	int key, flag = 1;
	scanf("%d", &key);

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int a = arr[i] * arr[i] + arr[j] * arr[j];
			if (a == key) {
				flag = 0;
				printf("Pair : %d, %d\n", arr[i], arr[j]);
			}
		}
	}

	if (flag) {
		printf("No pairs found\n");
	}

	return 0;
}
