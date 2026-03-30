#include <bits/stdc++.h>
using namespace std;
void rev(int a[], int n)
{
    int r[n];
    for (int i = 0; i < n; i++)
    {
        r[i] = a[n - i - 1];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << r[i] << "\t";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, n = sizeof(arr) / sizeof(arr[0]);
    rev(arr, n);
    return 0;
}