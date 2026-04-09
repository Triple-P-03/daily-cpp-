#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n) {
    int i, w;
    int dp[n + 1][W + 1];

    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            }
            else if (wt[i - 1] <= w) {
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            }
            else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    
    return dp[n][W];
}

int main() {
    int n, W;

    printf("--- Delivery Drone Optimization ---\n");
    printf("Enter the total number of packages: ");
    scanf("%d", &n);

    int val[n], wt[n];

    printf("Enter the drone's maximum weight capacity: ");
    scanf("%d", &W);

    printf("\n--- Input Package Weights ---\n");
    for (int i = 0; i < n; i++) {
        printf("Weight of package %d: ", i + 1);
        scanf("%d", &wt[i]);
    }

    printf("\n--- Input Package Profits ---\n");
    for (int i = 0; i < n; i++) {
        printf("Profit of package %d: ", i + 1);
        scanf("%d", &val[i]);
    }

    int max_profit = knapsack(W, wt, val, n);
    
    printf("\n===================================\n");
    printf("Optimal Load Calculated!\n");
    printf("Maximum possible profit: $%d\n", max_profit);
    printf("===================================\n");

    return 0;
}