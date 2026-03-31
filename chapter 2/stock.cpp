
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
{
    int b[] = {0};
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        b[j] = a[i] - a[i + 1];
        j++;
        i++;
    }
    int sum = 0;
    for (int i = 0; i < j; i++)
    {
        sum += b[i];
    }
    if (sum > 0)
    {
        return sum;
    }
    else
    return 0;
}
int main()
{
    int arr[] = {7, 10, 1, 3, 6, 9, 2};
    cout << stocks(arr, sizeof(arr) / sizeof(arr[0])); 
    return 0;
    // wrongg approach and solution
}