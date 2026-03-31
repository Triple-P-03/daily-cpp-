#include <bits/stdc++.h>
using namespace std;
void swapper(int *a,int n)
{

    int pos = 0, b[n];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            b[pos] = a[i];
            pos++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 3)
        {
            b[pos] = a[i];
            pos++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 4)
        {
            b[pos] = a[i];
            pos++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i];
    }
}

int main()
{
    int a[] = {2, 2, 2, 3, 3, 3, 4, 4, 3},n = sizeof(a) / sizeof(a[0]);
    swapper(a,n);
    return 0;
}