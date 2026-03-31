#include <bits/stdc++.h>
using namespace std;
void prod2(int *a, int n)
{
    if (n < 3)
    {
        cout << "not applicable here ";
        return;
    }

    int maxd = INT_MIN;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                maxd = max(maxd, a[i] * a[j] * a[k]);
            }
        }
    }
    cout << "the max\t" << maxd;
}
int main()
{

    //   Given an array of distinct integers, find the maximum possible product of any 3
    //   elements in it. cannot consider the same element more than once.

    int arr[] = {
        -1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    prod2(arr, n);
    return 0;
}