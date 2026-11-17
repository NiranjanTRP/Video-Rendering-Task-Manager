
#include <stdio.h>

int main() {
    int n, i, j, k, time = 0;
    int at[10], bt[10], p[10], done[10] = {0};
    int a[10], b[10], id[10];
    float fcfs = 0, priority = 0;

    printf("Enter number of tasks: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        id[i] = i + 1;
        printf("Enter AT, BT, Priority: ");
        scanf("%d%d%d", &at[i], &bt[i], &p[i]);
        a[i] = at[i];
        b[i] = bt[i];
    }

    // FCFS
    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(a[i] > a[j]) {
                int x;
                x=a[i]; a[i]=a[j]; a[j]=x;
                x=b[i]; b[i]=b[j]; b[j]=x;
                x=id[i]; id[i]=id[j]; id[j]=x;
            }

    printf("\nFCFS Scheduling:\n");
    for(i = 0, time = 0; i < n; i++) {
        if(time < a[i]) time = a[i];
        int wt = time - a[i];
        time += b[i];
        int tat = time - a[i];
        fcfs += wt;
        printf("T%d WT=%d TAT=%d\n", id[i], wt, tat);
    }

    // Priority Scheduling
    printf("\nPriority Scheduling:\n");
    time = 0;

    for(i = 0; i < n; i++) {
        k = -1;
        for(j = 0; j < n; j++)
            if(!done[j] && at[j] <= time &&
               (k == -1 || p[j] < p[k]))
                k = j;

        if(k == -1) {
            time++;
            i--;
            continue;
        }

        int wt = time - at[k];
        time += bt[k];
        int tat = time - at[k];
        done[k] = 1;
        priority += wt;

        printf("T%d WT=%d TAT=%d\n", id[k], wt, tat);
    }

    printf("\nFCFS Average WT = %.2f\n", fcfs/n);
    printf("Priority Average WT = %.2f\n", priority/n);

    if(fcfs < priority)
        printf("FCFS performs better");
    else if(priority < fcfs)
        printf("Priority performs better");
    else
        printf("Both perform equally");

    return 0;
}
