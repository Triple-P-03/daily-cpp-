
// Stock Buy and Sell - Max one Transaction Allowed

// Given an array prices[] of non-negative integers, representing the prices of the stocks
// on different days, find the maximum profit possible by buying and selling the stocks
// on different days when at most one transaction is allowed. Here one transaction
// means 1 Buy + 1 Sell. If it is not possible to make a profit then return 0.

// Note: Stock must be bought before being sold.

// Input: prices[] = [7, 10, 1, 3, 6, 9, 2]
// Output: 8

// Input: prices[] = [7, 6, 4, 3, 1]
// Output: 0
#include <bits/stdc++.h>
using namespace std;
int stocks(int *a, int n)
{//find max profit = selling price -buying {this can be done by max and min values or some values with bigger differnces}
    if (n <= 1)
        return 0;
    int minp = INT_MAX, maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < minp)
        {
            minp = a[i];
        }
        else
        {
            maxProfit = max(maxProfit, a[i] - minp);
        }
    }
    return maxProfit;
}
int main()
{
    int arr[] = {7, 10, 1, 3, 6, 9, 2};
    cout << stocks(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
    // wrongg approach and solution
}