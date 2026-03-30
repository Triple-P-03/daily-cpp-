#include <bits/stdc++.h>
using namespace std;
void secMax(int a[], int n)
{
    int max = a[0], secm = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            secm = max;
            max = a[i];
        }
        else if(a[i]>secm && max>a[i]){
            secm=a[i];
        }
    }
    cout << "ans:" << secm;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 2, 3,9,8}, n = sizeof(arr) / sizeof(arr[0]);
    secMax(arr, n);

    return 0;
}