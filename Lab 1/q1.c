#include<stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int arr[n], arr2[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
		arr2[i] = arr[i];
	}

	int freq = 0;
	for (int i = 0; i < n; i++) {
		int c = 1;
		if (arr[i] != -1) {
			for (int j = i + 1; j < n; j++) {
				if (arr[i] == arr[j]) {
					arr[j] = -1;
					c++;
				}
			}
			if (c > freq) {
				freq = c;
			}
		}
	}
	printf("%d\n", freq);
	for (int i = 0; i < n; i++) {
		int c = 0;
		for (int j = i; j < n; j++) {
			if (arr2[i] == arr2[j]) {
				c++;
			}
		}
		if (c == freq) {
			printf("Number with highest frequency: %d with count = %d\n", arr[i], freq);
		}
	}


	return 0;
}
