// DFS algorithm in C

#include <stdio.h>
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





void i_o_from_file() {

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\KIIT\\input", "r", stdin);
    freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}







struct node {
    int vertex;
    struct node* next;
};

struct node* createNode(int v);

struct Graph {
    int numVertices;
    int* visited;

    // We need int** to store a two dimensional array.
    // Similary, we need struct node** to store an array of Linked lists
    struct node** adjLists;
};

// DFS algo
void DFS(struct Graph* graph, int vertex) {
    struct node* adjList = graph->adjLists[vertex];
    struct node* temp = adjList;

    graph->visited[vertex] = 1;
    printf("Visited %d \n", vertex);

    while (temp != NULL) {
        int connectedVertex = temp->vertex;

        if (graph->visited[connectedVertex] == 0) {
            DFS(graph, connectedVertex);
        }
        temp = temp->next;
    }
}

// Create a node
struct node* createNode(int v) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Create graph
struct Graph* createGraph(int vertices) {
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    graph->adjLists = malloc(vertices * sizeof(struct node*));

    graph->visited = malloc(vertices * sizeof(int));

    int i;
    for (i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}

// Add edge
void addEdge(struct Graph* graph, int src, int dest) {
    // Add edge from src to dest
    struct node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;
}


int main() {


    i_o_from_file();

    /* ********************************************* */

    int v;
    sf(v);


    struct Graph* graph = createGraph(v);

    while (1) {
        int a, b;
        sf(a);

        if (a == -1) {
            break;
        }

        sf(b);
        addEdge(graph, a, b);
    }




    DFS(graph, 2);

    return 0;
}
