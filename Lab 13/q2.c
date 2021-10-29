// Author: Chaudhary Hamdan
// Generated at: Fri Oct 29 12:42:30 2021

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

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



void i_o_from_file() {

#ifndef ONLINE_JUDGE
	freopen("C:\\Users\\KIIT\\input", "r", stdin);
	freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}


/* **************************************************************** */


int V;


int minKey(int key[], bool mstSet[])
{
	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++) {
		if (mstSet[v] == false && key[v] < min) {
			min = key[v], min_index = v;
		}
	}

	return min_index;
}

int printMST(int parent[], int graph[V][V])
{
	printf("Edge \tWeight\n");
	F(i, 1, V) {
		printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
	}
}

void primsMST(int graph[V][V])
{
	int parent[V];
	int key[V];
	bool mstSet[V];

	F0(i, V) {
		key[i] = INT_MAX;
		mstSet[i] = false;
	}

	key[0] = 0;
	parent[0] = -1;

	F0(cnt, V - 1) {

		int u = minKey(key, mstSet);

		mstSet[u] = true;

		F0(v, V) {

			if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) {
				parent[v] = u;
				key[v] = graph[u][v];
			}
		}
	}

	printMST(parent, graph);
}

int main() {

	i_o_from_file();

	/* ********************************************* */

	sf(V);

	int graph[V][V];

	F0(i, V) {
		F0(j, V) {
			sf(graph[i][j]);
		}
	}


	primsMST(graph);

	return 0;
}
