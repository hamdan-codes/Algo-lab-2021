// Author: Chaudhary Hamdan
// Generated at: Fri Nov 12 12:25:14 2021

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

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


void primsAlgoQ1(int graph[V][V])
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

		int min = INT_MAX, u = 0;
		F0(v, V) {
			if (mstSet[v] == false && key[v] < min) {
				min = key[v];
				u = v;
			}
		}

		mstSet[u] = true;

		F0(v, V) {

			if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) {
				parent[v] = u;
				key[v] = graph[u][v];
			}
		}
	}

	int cost = 0;
	pf("Edge \tWeight\n");
	F(i, 1, V) {
		pf("%d - %d \t%d \n", parent[i] + 1, i + 1, graph[i][parent[i]]);
		cost += graph[i][parent[i]];
	}

	pf("\nTotal Cost: %d\n", cost);
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


	primsAlgoQ1(graph);

	pf("\nTime complexity: V²\n");


	return 0;
}
