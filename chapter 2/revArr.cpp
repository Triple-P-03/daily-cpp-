#include <bits/stdc++.h>
using namespace std;
void poSwap(int *a, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i], a[n - i-1]);
            // temp=a[i];
            // a[i]=a[n-i-1];
            // a[n-1-i]=temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, n = sizeof(arr) / sizeof(arr[0]);
    poSwap(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"\t";
    }

    return 0;
}