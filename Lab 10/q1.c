// Author: Chaudhary Hamdan
// Generated: Fri Oct 1 12:22:06 2021

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

int main() {

    i_o_from_file();

    /* ********************************************* */

    int capacity, no_items, cur_weight, item;
    int used[10];
    float total_profit;
    int i;
    int weight[10];
    int value[10];

    sf(capacity);

    sf(no_items);

    F0(i, no_items) {
        sf(weight[i]);
        sf(value[i]);
    }

    F0(i, no_items) {
        used[i] = 0;
    }

    cur_weight = capacity;
    while (cur_weight > 0)
    {
        item = -1;
        F0(i, no_items) {
            if ((used[i] == 0) && ((item == -1) || (value[i] * 1.0 / weight[i] > value[item] * 1.0 / weight[item])))
                item = i;
        }

        used[item] = 1;
        cur_weight -= weight[item];
        total_profit += value[item];

        if (cur_weight >= 0) {
            printf("Object %d completely\n", item + 1);
        }
        else {

            int item_percent = (int) ((1 + cur_weight * 1.0 / weight[item]) * 100);

            pf("Added %d%% of object %d.\n", item_percent, item + 1);

            total_profit -= value[item];
            total_profit += (1 + cur_weight * 1.0 / weight[item]) * value[item];
        }
    }

    pf("\nFilled the bag with objects worth %.2f Rs.\n", total_profit);


    return 0;
}



void i_o_from_file() {

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\KIIT\\input", "r", stdin);
    freopen("C:\\Users\\KIIT\\output", "w", stdout);
#endif
}

