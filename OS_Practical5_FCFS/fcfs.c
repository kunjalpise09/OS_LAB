#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[n], bt[n], wt[n], tat[n];
    for (i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("Enter burst time for process %d: ", pid[i]);
        scanf("%d", &bt[i]);
    }

    wt[0] = 0;
    for (i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    for (i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }

    printf("\nProcess\tBT\tWT\tTAT\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\n", pid[i], bt[i], wt[i], tat[i]);
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
