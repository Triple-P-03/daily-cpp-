#include <bits/stdc++.h>
using namespace std;
void counter(int *a, int n)
{
    int count = 0, c = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            c++;
        }
        else if (a[i] != a[i + 1])
        {
            if (c > count)
            {
                count = c;
            }
            c=1;
        }
    }
    if (c > count)
    {
        count = c;
    }
    cout << count;
}

int main()
{
    int arr[] = {1, 1, 1, 1, 0, 1, 1, 1,0,0,0,0,0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    counter(arr, n);
    return 0;
}