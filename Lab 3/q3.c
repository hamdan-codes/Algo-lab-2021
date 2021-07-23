/*
 * Author               : Chaudhary Hamdan
 *
 * Github link          : https://github.com/hamdan-codes
 * My Algo Lab Repo     : https://github.com/hamdan-codes/Algo-lab-2021
 * My Networks Lab Repo : https://github.com/hamdan-codes/Networks-lab-2021
 */

#include <stdio.h>
#include <stdlib.h>
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


void insertionSortAsc(int arr[], int n)
{
	int key, j;

	f(i, 1, n) {

		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {

			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = key;
	}
}


void insertionSortDesc(int arr[], int n)
{
	int key, j;

	f(i, 1, n) {

		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] < key) {

			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = key;
	}
}


void printArray(int arr[], int n)
{
	int i;

	f(i, 0, n) {
		pfs(arr[i]);
	}

	pf("\n");
}








/* ************************** Your Functions and all Above ************************ */

int main() {

	c_();

	/* ********************* Your Main function Code Below *********************** */

	time_t start, end;
	double t;
	int n;
	sf(n);
	int arr[n];

	insertionSortAsc(arr, n);

	int ch = 1;

	while (ch) {

		sf(ch);

		switch (ch) {
		case 0:
			break;
		case 1:
			f(i, 0, n) {
				arr[i] = 1 + rand() % 100;
			}
			pf("Vals Inserted\n");
			break;
		case 2:
			printArray(arr, n);
			break;
		case 3:
			insertionSortAsc(arr, n);
			pf("Sorted in asc\n");
			break;
		case 4:
			insertionSortDesc(arr, n);
			pf("Sorted in desc\n");
			break;
		case 5:
			f(i, 0, n) {
				arr[i] = 1 + rand() % 100;
			}
			start = clock();
			insertionSortAsc(arr, n);

			end = clock();

			t = end - start;
			printf("Time taken rand: %f\n", (t / CLOCKS_PER_SEC));

			break;
		case 6:
			f(i, 0, n) {
				arr[i] = 1 + rand() % 100;
			}
			insertionSortAsc(arr, n);

			start = clock();
			insertionSortAsc(arr, n);

			end = clock();

			t = end - start;
			printf("Time taken asc: %f\n", (t / CLOCKS_PER_SEC));

			break;
		case 7:
			f(i, 0, n) {
				arr[i] = 1 + rand() % 100;
			}
			insertionSortDesc(arr, n);

			start = clock();
			insertionSortAsc(arr, n);

			end = clock();

			t = end - start;
			printf("Time taken desc: %f\n", (t / CLOCKS_PER_SEC));

			break;

		case 8:

			f(i, 0, n) {
				arr[i] = 1 + rand() % 100;
			}
			insertionSortAsc(arr, n);

			start = clock();
			insertionSortAsc(arr, n);

			end = clock();

			t = end - start;
			printf("Time taken asc: %f\n", (t / CLOCKS_PER_SEC));


			f(i, 0, n) {
				arr[i] = 1 + rand() % 100;
			}
			insertionSortDesc(arr, n);

			start = clock();
			insertionSortAsc(arr, n);

			end = clock();

			t = end - start;
			printf("Time taken desc: %f\n", (t / CLOCKS_PER_SEC));


			f(i, 0, n) {
				arr[i] = 1 + rand() % 100;
			}
			start = clock();
			insertionSortAsc(arr, n);

			end = clock();

			t = end - start;
			printf("Time taken random: %f\n", (t / CLOCKS_PER_SEC));
			break;

		default:
			pf("Wrong choice try again\n");
		}



	}









	/* ********************* Your Main function Code Above *********************** */

	return 0;
}
