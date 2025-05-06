#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[n], bt[n], pri[n], wt[n], tat[n], temp;
    for (i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("Enter burst time and priority for process %d: ", pid[i]);
        scanf("%d %d", &bt[i], &pri[i]);
    }

    // Sorting based on priority (lower number = higher priority)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (pri[i] > pri[j]) {
                temp = pri[i]; pri[i] = pri[j]; pri[j] = temp;
                temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
                temp = pid[i]; pid[i] = pid[j]; pid[j] = temp;
            }
        }
    }

    wt[0] = 0;
    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    for (i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }

    printf("\nProcess\tBT\tPriority\tWT\tTAT\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t\t%d\t%d\n", pid[i], bt[i], pri[i], wt[i], tat[i]);
    }

    printf("\nGantt Chart:\n|");
    for (i = 0; i < n; i++) {
        printf("  P%d  |", pid[i]);
    }

    printf("\n0");
    for (i = 0; i < n; i++) {
        printf("\t%d", wt[i] + bt[i]);
    }

    return 0;
}
